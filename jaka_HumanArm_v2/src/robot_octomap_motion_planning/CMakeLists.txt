cmake_minimum_required(VERSION 3.8)
project(robot_octomap_motion_planning)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(octomap_msgs REQUIRED)
find_package(PCL REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(octomap REQUIRED)
find_package(ament_cmake REQUIRED)

find_package(rclcpp REQUIRED)
find_package(moveit_core REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_common REQUIRED)
moveit_package()

find_package(Eigen3 REQUIRED)
find_package(Boost REQUIRED system filesystem date_time thread)
find_package(ament_cmake REQUIRED)
find_package(control_msgs REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_ros_planning REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_ros_perception REQUIRED)
find_package(moveit_servo REQUIRED)
find_package(interactive_markers REQUIRED)
find_package(rviz_visual_tools REQUIRED)
find_package(moveit_visual_tools REQUIRED)
find_package(geometric_shapes REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(pluginlib REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_eigen REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

find_package(robot_moveit_config REQUIRED) # 引入moveit配置助手生成的功能包，根据实际机械臂进行替换
find_package(robot_description REQUIRED) # 引入机械臂URDF功能包，根据实际机械臂进行替换
find_package(arm_hand_interface REQUIRED) # 接口功能包

add_executable(robot_octomap_motion_planning src/robot_octomap_motion_planning.cpp) # 增加一个可执行文件，说明与源文件的映射关系

set(THIS_PACKAGE_INCLUDE_DIRS
  doc/interactivity/include
)

set(THIS_PACKAGE_INCLUDE_DEPENDS
  ament_cmake
  rclcpp
  rclcpp_action
  tf2_geometry_msgs
  tf2_ros
  moveit_core
  rviz_visual_tools
  moveit_visual_tools
  moveit_ros_planning_interface
  interactive_markers
  tf2_geometry_msgs
  moveit_ros_planning
  pluginlib
  Eigen3
  Boost
  control_msgs
  moveit_servo
)

include_directories(${THIS_PACKAGE_INCLUDE_DIRS})

include_directories(
  # include
  ${PCL_INCLUDE_DIRS}
  ${OCTOMAP_INCLUDE_DIRS}
)

include_directories(
  "/opt/ros/humble/include" ,
  "/opt/ros/humble/include/octomap_msgs" ,
  "/opt/ros/humble/include/std_msgs" ,
  "/opt/ros/humble/include/message_filters" ,
  "/opt/ros/humble/include/sensor_msgs" ,
  "/opt/ros/humble/include/pcl_msgs" ,
  "/usr/include/octomap"
)

target_link_libraries(robot_octomap_motion_planning
  ${PCL_LIBRARIES}
  ${OCTOMAP_LIBRARIES}
)

target_link_libraries(robot_octomap_motion_planning
  ${octomap_msgs_LIBRARIES}
)

target_include_directories(robot_octomap_motion_planning PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(robot_octomap_motion_planning
  PUBLIC include)

target_compile_features(robot_octomap_motion_planning PUBLIC c_std_99 cxx_std_17)

# 对可执行文件vscode添加依赖项point_cloud2_publisher
ament_target_dependencies(
  robot_octomap_motion_planning
  "rclcpp"
  "PCL"
  "std_msgs"
  "sensor_msgs"
  "octomap_msgs"
  "arm_hand_interface"
)

ament_target_dependencies(robot_octomap_motion_planning
  ${THIS_PACKAGE_INCLUDE_DEPENDS} Boost)


ament_export_dependencies(
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)

ament_export_include_directories(include)


# 安装可执行文件
install(TARGETS robot_octomap_motion_planning
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)


install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)
















if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
