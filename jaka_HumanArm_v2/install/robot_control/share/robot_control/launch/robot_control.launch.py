import os
import yaml
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import xacro


def load_file(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return file.read()
    except (
        EnvironmentError
    ):  # parent of IOError, OSError *and* WindowsError where available
        return None


def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return yaml.safe_load(file)
    except (
        EnvironmentError
    ):  # parent of IOError, OSError *and* WindowsError where available
        return None


# generate_launch_description 是入口函数
# 高亮的部分，在实际使用时，替换为对应的文件。其他代码是通用代码。
def generate_launch_description():

    # robot_moveit_config换成对应的功能包文件夹, urdf.urdf.xacro换成对应的文件名称
    robot_description_config = xacro.process_file(
        os.path.join(
            get_package_share_directory("robot_moveit_config"),
            "config",
            "urdf.urdf.xacro",
        )
    )
    robot_description = {"robot_description": robot_description_config.toxml()}

    robot_description_semantic_config = load_file(
        "robot_moveit_config", "config/urdf.srdf"
    )

    robot_description_semantic = {
        "robot_description_semantic": robot_description_semantic_config
    }

    kinematics_yaml = load_yaml("robot_moveit_config", "config/kinematics.yaml")

    # MoveGroupInterface demo executable
    move_group_interface_demo = Node(
        package="robot_control",
        executable="robot_control",
        name="robot_control",
        output="screen",
        parameters=[
            robot_description,
            robot_description_semantic,
            kinematics_yaml,
        ],
    )

    return LaunchDescription([move_group_interface_demo])
