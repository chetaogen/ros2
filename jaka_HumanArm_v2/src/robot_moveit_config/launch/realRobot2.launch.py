from launch import LaunchDescription
from launch.actions import ExecuteProcess, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python import get_package_share_directory
from launch_ros.actions import Node


def generate_launch_description():
    # 引用move_group.launch.py文件
    include_launch1 = IncludeLaunchDescription(
        launch_description_source=PythonLaunchDescriptionSource(
            launch_file_path=os.path.join(
                get_package_share_directory(
                    "robot_moveit_config"
                ),  # 功能包“robot_moveit_config”
                "launch",  # 文件夹launch
                "move_group.launch.py",  # launch文件
            )
        )
    )

    # 引用rsp.launch.py文件
    include_launch2 = IncludeLaunchDescription(
        launch_description_source=PythonLaunchDescriptionSource(
            launch_file_path=os.path.join(
                get_package_share_directory(
                    "robot_moveit_config"
                ),  # 功能包“robot_moveit_config”
                "launch",  # 文件夹launch
                "rsp.launch.py",  # launch文件
            )
        )
    )

    # 引用static_virtual_joint_tfs.launch.py文件, 在有 virtual joint时才启用此节点
    include_launch3 = IncludeLaunchDescription(
        launch_description_source=PythonLaunchDescriptionSource(
            launch_file_path=os.path.join(
                get_package_share_directory(
                    "robot_moveit_config"
                ),  # 功能包“robot_moveit_config”
                "launch",  # 文件夹launch
                "static_virtual_joint_tfs.launch.py",  # launch文件
            )
        )
    )

    # 引用moveit_rviz.launch.py文件
    include_launch4 = IncludeLaunchDescription(
        launch_description_source=PythonLaunchDescriptionSource(
            launch_file_path=os.path.join(
                get_package_share_directory(
                    "robot_moveit_config"
                ),  # 功能包robot_moveit_config
                "launch",  # 文件夹launch
                "moveit_rviz.launch.py",  # launch文件
            )
        )
    )

    return LaunchDescription(
        [include_launch1, include_launch2, include_launch3, include_launch4]
    )
