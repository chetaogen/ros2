/**
 * @file robot_moveit_interface.cpp  
 * @author your name (you@domain.com)
 * @brief  这个例子实现了无障碍物的轨迹规划
 * @version 0.1
 * @date 2024-07-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/logging.hpp>

#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
// #include <geometry_msgs/PoseStamped.h>

#include <tf2/LinearMath/Quaternion.h>

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("robot_moveit_interface", rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true));
    //  Create a ROS logger
    auto const logger = rclcpp::get_logger("robot_moveit_interface");

    moveit::planning_interface::MoveGroupInterface arm(node, "jaka_arm");                  // 需要依附于节点，才能创建arm变量。连接到 jaka_arm 规划组
    moveit::planning_interface::MoveGroupInterface gripper(node, std::string("jaka_arm")); // 连接到 jaka_arm 规划组

    arm.setGoalJointTolerance(0.01); // 设置关节运动的允许误差，单位：弧度
    gripper.setGoalJointTolerance(0.01);
    arm.setMaxVelocityScalingFactor(0.1); // 设置比例因子，以降低最大关节速度限制，取值范围(0,1]
    gripper.setMaxVelocityScalingFactor(0.8);


    arm.allowReplanning(true);         // 若规划失败，允许再次进行规划
    //arm.setStartStateToCurrentState(); // 显示地将开始状态设置为当前状态
    //moveit::core::RobotStatePtr current_state = arm.getCurrentState();
    //const moveit::core::RobotState &start_state = *current_state;
    //arm.setStartState(start_state); // 获取规划组的当前状态，并设置为开始状态

    // joint1:[-6.28, 6.28], joint2:[-1.8325, 1.8325], joint3:[-6.28, 6.28], joint4:[-2.5307, 0.5235]， joint5:[-6.28, 6.28], joint6:[-1.5707, 1.5707]
    std::vector<double> arm_joint_positions = {-3, -1.5, -6, 0, 3, -1};
    arm.setJointValueTarget(arm_joint_positions); // 设置各个关节的目标值，单位：弧度或米（直线关节）

    geometry_msgs::msg::Pose target_pose;
    target_pose.position.x = 0.2;
    target_pose.position.y = 0.1;
    target_pose.position.z = 0.1;
    target_pose.orientation.w = 1.0;
    // arm.setPoseTarget(target_pose); // 设置期望末端位姿的方式

    // arm.setNamedTarget("ready");//”ready”是配置助手配置过程中，预设的位置，这里通过名称直接设置为目标位置
    // arm.setNamedTarget("open");

    // 调用MoveGroupInterface类的plan函数，实现轨迹规划，并保存到变量plan中。如果规划成功，则调用execute函数，该函数调用move_group节点，move_group节点作为client，发布”pand_arm_hand_controller/follow_joint_trajectory”的action，传递的数据类型为FollowJointTrajectoryAction，plan的内容包含在此action中
    // 如果要控制真实的机械臂，就需要定义一个服务端，传递的action名称为“arm_controller/follow_joint_trajectory”，数据类型为FollowJointTrajectoryAction, 就会自动接收execute函数传递过来的规划轨迹数据
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = static_cast<bool>(arm.plan(plan));

    if (success)
    {
        arm.execute(plan); // 作为action的server,发送"/panda_arm_hand_controller/follow_joint_trajectory" ，消息类型为 control_msgs/action/FollowJointTrajectory
    }
    else
        RCLCPP_ERROR(logger, "Planning failed!");

    // RCLCPP_INFO(nh->get_logger(),"Open gripper ...");
    // panda_finger_joint1:[0.0, 0.04], panda_finger_joint2:[0, 0.04]
    // std::vector<double> gripper_joint_positions = {0.65, 0.65};
    // gripper.setJointValueTarget(gripper_joint_positions);
    // gripper.move();
    // RCLCPP_INFO(this->get_logger(),"Close gripper ...");
    // gripper.setNamedTarget("Close_gripper");
    // gripper.move(); // move函数相当于 plan()+execute()两个函数，即规划出轨迹后直接执行轨迹
    // RCLCPP_INFO(nh->get_logger(),"Moving to pose: Home");
    // arm.setNamedTarget("Home");
    // arm.move();
    rclcpp::shutdown();
    return 0;
}
