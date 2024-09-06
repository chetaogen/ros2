/**
 * @file robot_moveit_interface.cpp  
 * @author your name (you@domain.com)
 * @brief  这个例子实现了有障碍物的轨迹规划
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
#include <moveit/moveit_cpp/moveit_cpp.h>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

// #include <geometry_msgs/PoseStamped.h>

//#include <tf2/Linearm_move_groupath/Quaternion.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <octomap/OcTree.h>
#include <octomap_msgs/conversions.h>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap/octomap.h>

#include <rclcpp/rclcpp.hpp>

#include <pcl/pcl_base.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl_conversions/pcl_conversions.h>

#include "sensor_msgs/msg/point_cloud2.hpp"
#include "std_msgs/msg/header.hpp" // 包含Header信息

#include <cstdio>
#include <chrono>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>


#include"arm_hand_interface/msg/arm_status.hpp"
#include "arm_hand_interface/action/arm_vision_planning.hpp"
#include "arm_hand_interface/action/dexterous_hand.hpp"

using ArmVisionPlanning = arm_hand_interface::action::ArmVisionPlanning;
using ArmStatus = arm_hand_interface::msg::ArmStatus;

using GoalHandleArmVisionPlanning = rclcpp_action::ServerGoalHandle<ArmVisionPlanning>;

// typedef pcl::PointXYZRGB PointType;

using namespace std::chrono_literals; // c++时间库，允许函数以 500ms的形式定义时间

using std::placeholders::_1;
using std::placeholders::_2; // 占位符


class octomap_planning : public rclcpp::Node
{
public:
    octomap_planning() : Node("octomap_planning")
    {
          // 创建一个Publisher，发布PointCloud2消息到名为"PointCloud2"的topic
        m_publisher = this->create_publisher<octomap_msgs::msg::Octomap>("pc", 10);

        // 创建一个定时器，每 10ms 发布一次 ArmStatus消息
        m_timer = create_wall_timer(2000ms, std::bind(&octomap_planning ::publisher_timerCallback, this));
    }

    void publisher_timerCallback();//定时器回调函数
    void motion_planning_interface(octomap_msgs::msg::Octomap octomap_msg); // 利用move_group_interface进行避障轨迹规划

    rclcpp_action::Server<ArmVisionPlanning>::SharedPtr m_arm_vision_planning_server;
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const ArmVisionPlanning::Goal> goal);
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle);
    void handle_accepted(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle);
    void execute_move(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle);


public:
    rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr m_publisher;
    rclcpp::TimerBase::SharedPtr m_timer;
    std::shared_ptr<GoalHandleArmVisionPlanning> m_myactionPtr;
    octomap_msgs::msg::Octomap m_octomap_msg;
};

rclcpp_action::GoalResponse octomap_planning::handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const ArmVisionPlanning::Goal> goal)
{
    (void)uuid;

    // RCLCPP_INFO(this->get_logger(), "接收到action客户端的请求");

    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse octomap_planning::handle_cancel(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle)
{
    //  RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");

    return rclcpp_action::CancelResponse::ACCEPT;
}

void octomap_planning::handle_accepted(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle)
{
    using std::placeholders::_1;



  //进行避障运动规划

    const auto goal = m_myactionPtr->get_goal();
    octomap_msgs::msg::Octomap octomap_msg;
    //octomap_msgs::binaryMapToMsg(tree, octomap_msg);
    //octomap_msgs::fullMapToMsg(tree, octomap_msg);

    geometry_msgs::msg::Pose target_pose;

    m_octomap_msg.header.stamp = rclcpp::Clock().now(); // 时间戳

    m_octomap_msg.header.frame_id = "base_link_jaka_right"; // 参考坐标, 与规划组arm_move_group的frame_id保持一致

    m_publisher->publish(m_octomap_msg); // 该topic会被rviz2的插件订阅

    motion_planning_interface(); // 进行避障轨迹规划




    // 通过定时器来实现连续反馈和结果反馈
    m_myactionPtr = goal_handle;

    if (m_timer != NULL)
    {
        m_timer->cancel();
        // delete m_timer;
    }
    m_timer = create_wall_timer(20ms, std::bind(&octomap_planning::publisher_timerCallback, this));
}



// 定义一个定时器函数，用于定时发布消息
void octomap_planning :: publisher_timerCallback()
{
    static int64_t count = 0;
    count++;



    octomap::OcTree tree(0.01); // 0.01 是树的分辨率

    for (const auto &point : cloud)
    {
        // Extract XYZ coordinates and RGB color from the point
        float x = point.x;
        float y = point.y;
        float z = point.z;

        // Convert color to octomap::ColorOcTreeNode
        octomap::point3d octomap_point(x, y, z);

        // Insert the node into the octomap
        tree.updateNode(octomap_point, true);
    }

    RCLCPP_INFO(this->get_logger(), "发布的消息: '%ld'", count);

    // Also publish as an octomap msg for visualization
    octomap_msgs::msg::Octomap octomap_msg;
    //  octomap_msgs::binaryMapToMsg(tree, octomap_msg);
    octomap_msgs::fullMapToMsg(tree, octomap_msg);

    octomap_msg.header.stamp = rclcpp::Clock().now(); // 时间戳

    octomap_msg.header.frame_id = "base_link"; // 参考坐标, 与规划组arm_move_group的frame_id保持一致

    m_publisher->publish(octomap_msg); // 该topic会被rviz2的插件订阅

    motion_planning_interface(octomap_msg); // 进行避障轨迹规划

    m_timer->cancel(); // 定时器只运行一次
};

void octomap_planning ::motion_planning_interface()
{
    auto node = rclcpp::Node::make_shared("robot_octomap_motion_planning", rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true));
    //  Create a ROS logger
    auto const logger = rclcpp::get_logger("robot_moveit_interface");

    moveit::planning_interface::MoveGroupInterface arm_move_group(node, "jaka_arm");                  // 需要依附于节点，才能创建arm_move_group变量。连接到 jaka_arm_move_group 规划组
    moveit::planning_interface::MoveGroupInterface gripper(node, std::string("jaka_arm")); // 连接到 jaka_arm_move_group 规划组

    arm_move_group.setGoalJointTolerance(0.01); // 设置关节运动的允许误差，单位：弧度
    gripper.setGoalJointTolerance(0.01);
    arm_move_group.setMaxVelocityScalingFactor(0.05); // 设置比例因子，以降低最大关节速度限制，取值范围(0,1]
    gripper.setMaxVelocityScalingFactor(0.8);

    // RCLCPP_INFO(get_logger(),"Moveing to joint-space goal: joint_positions");

    arm_move_group.allowReplanning(true);         // 若规划失败，允许再次进行规划
   // moveit::core::RobotStatePtr current_state = arm_move_group.getCurrentState();
   // const moveit::core::RobotState &start_state = *current_state;
   // arm_move_group.setStartState(start_state); // 获取规划组的当前状态，并设置为开始状态

    //arm_move_group.setStartStateToCurrentState(); // 显示地将开始状态设置为当前状态
    // const moveit::core::RobotState  *current_state = arm_move_group.getCurrentState()；
    // arm_move_group.setStartState(current_state); // 获取规划组的当前状态，并设置为开始状态
    // arm_move_group.getCurrentState();             //获取当前状态

    // 设置工作场景，将障碍物带入场景中
    // 创建PlanningSceneMonitor实例, 用于获取 AllowedCollisionMatrix
    planning_scene_monitor::PlanningSceneMonitor planning_scene_monitor(node, "robot_description");
    //auto planning_scene_monitor = std::make_shared<planning_scene_monitor::PlanningSceneMonitor>(); // node, "robot_description"
    collision_detection::AllowedCollisionMatrix acm = planning_scene_monitor.getPlanningScene()->getAllowedCollisionMatrix();
    //  假设我们需要允许"obstacle_1"和"obstacle_2"之间的碰撞
    //  acm.setEntry("obstacle_1", "obstacle_2", true);

    // 将 collision_detection::AllowedCollisionMatrix 转成 moveit_msgs::msg::AllowedCollisionMatrix
    moveit_msgs::msg::AllowedCollisionMatrix acm_msg;
    acm.getMessage(acm_msg);

    auto frameID = arm_move_group.getPlanningFrame();
    moveit_msgs::msg::PlanningScene planning_scene_msg;
    planning_scene_msg.world.octomap.header.frame_id = frameID; // Replace "map" with your frame ID
    planning_scene_msg.world.octomap.origin.orientation.w = 1.0;
    planning_scene_msg.world.octomap.octomap = octomap_msg;
    planning_scene_msg.allowed_collision_matrix = acm_msg;

    // 将PlanningScene 加（替换）到moveit中
    moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
    planning_scene_interface.applyPlanningScene(planning_scene_msg);


    // joint1:[-6.28, 6.28], joint2:[-1.8325, 1.8325], joint3:[-6.28, 6.28], joint4:[-2.5307, 0.5235]， joint5:[-6.28, 6.28], joint6:[-1.5707, 1.5707]
    std::vector<double>
        arm_move_group_joint_positions = { -0.78, 1.57, -4, -1, 2, 1};
    arm_move_group.setJointValueTarget(arm_move_group_joint_positions); // 设置各个关节的目标值，单位：弧度或米（直线关节）

    geometry_msgs::msg::Pose target_pose;
    target_pose.position.x = 0.2;
    target_pose.position.y = 0.1;
    target_pose.position.z = 0.1;
    target_pose.orientation.w = 1.0;
    // arm_move_group.setPoseTarget(target_pose); // 设置期望末端位姿的方式

    // arm_move_group.setNamedTarget("ready");//”ready”是配置助手配置过程中，预设的位置，这里通过名称直接设置为目标位置
    // arm_move_group.setNamedTarget("open");

    // 调用MoveGroupInterface类的plan函数，实现轨迹规划，并保存到变量plan中。如果规划成功，则调用execute函数，该函数调用move_group节点，move_group节点作为client，发布”pand_arm_move_group_hand_controller/follow_joint_trajectory”的action，传递的数据类型为FollowJointTrajectoryAction，plan的内容包含在此action中
    // 如果要控制真实的机械臂，就需要定义一个服务端，传递的action名称为“arm_move_group_controller/follow_joint_trajectory”，数据类型为FollowJointTrajectoryAction, 就会自动接收execute函数传递过来的规划轨迹数据
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = static_cast<bool>(arm_move_group.plan(plan));

    if (success)
    {
        arm_move_group.execute(plan); // 作为action的server,发送"/panda_arm_move_group_hand_controller/follow_joint_trajectory" ，消息类型为 control_msgs/action/FollowJointTrajectory
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
    // arm_move_group.setNamedTarget("Home");
    // arm_move_group.move();
};


int main(int argc, char **argv)
{
     // 1.初始化ros2
    rclcpp::init(argc, argv);

    // 定义一个 pointCloud2_publisher 实例
    auto topic_pub = std::make_shared<octomap_planning>();
    rclcpp::spin(topic_pub);

    // 释放ros2资源
    rclcpp::shutdown();

    return 0;
}