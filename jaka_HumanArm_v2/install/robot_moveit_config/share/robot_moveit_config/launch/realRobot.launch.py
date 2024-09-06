from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import generate_demo_launch
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

from srdfdom.srdf import SRDF

from moveit_configs_utils.launch_utils import (
    add_debuggable_node,
    DeclareBooleanLaunchArg,
)


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder(
        "urdf", package_name="robot_moveit_config"
    ).to_moveit_configs()
    return generate_realRobot_launch(moveit_config)


def generate_realRobot_launch(moveit_config):
    """
    Launches a self contained demo

    Includes
     * static_virtual_joint_tfs： Indicates the relationship between virtual coordinates and real coordinates
     * robot_state_publisher：subscribe to the joint state topic and update rviz2
     * move_group： Movement planning library
     * moveit_rviz：Movement moveit visualization
     * warehouse_db (optional)：data warehouse
     * ros2_control_node + controller spawners：Using ros2 control(too complicated)
    """
    ld = LaunchDescription()
    ld.add_action(
        DeclareBooleanLaunchArg(
            "db",
            default_value=False,
            description="By default, we do not start a database (it can be large)",
        )
    )
    ld.add_action(
        DeclareBooleanLaunchArg(
            "debug",
            default_value=False,
            description="By default, we are not in debug mode",
        )
    )
    ld.add_action(DeclareBooleanLaunchArg("use_rviz", default_value=True))

    # 虚拟关节节点, 在有 virtual joint时才启用此节点
    # If there are virtual joints, broadcast static tf by including virtual_joints launch
    # Indicates the relationship between virtual coordinates and real coordinates
    virtual_joints_launch = (
        moveit_config.package_path / "launch/static_virtual_joint_tfs.launch.py"
    )
    if virtual_joints_launch.exists():
        ld.add_action(
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(str(virtual_joints_launch)),
            )
        )

    # robot_state_broadcaster节点
    # Given the published joint states, publish tf for the robot links
    # subscribe to the joint state topic and update rviz2
    ld.add_action(
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                str(moveit_config.package_path / "launch/rsp.launch.py")
            ),
        )
    )

    # move_group节点
    # Movement planning library
    ld.add_action(
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                str(moveit_config.package_path / "launch/move_group.launch.py")
            ),
        )
    )

    # rviz2 节点
    # Run Rviz and load the default config to see the state of the move_group node
    # Movement moveit visualization
    ld.add_action(
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                str(moveit_config.package_path / "launch/moveit_rviz.launch.py")
            ),
            condition=IfCondition(LaunchConfiguration("use_rviz")),
        )
    )

    return ld
