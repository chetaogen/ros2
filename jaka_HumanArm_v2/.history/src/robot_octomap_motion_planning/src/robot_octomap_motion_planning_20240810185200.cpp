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
       // m_publisher = this->create_publisher<octomap_msgs::msg::Octomap>("pc", 10);

        // 创建一个定时器，每 10ms 发布一次 ArmStatus消息
        //m_timer1 = create_wall_timer(2000ms, std::bind(&octomap_planning ::publisher_timerCallback, this));

        m_octomap_subscriber = create_subscription<octomap_msgs::msg::Octomap>("octomap_topic", 10, std::bind(&octomap_planning::octomap_topic_subscribe, this, _1));
        m_arm_status_subscriber = create_subscription<ArmStatus>("ArmStatus", 10, std::bind(&octomap_planning::arm_status_topic_subscribe, this, _1));
    }

    void publisher_timerCallback1();//定时器1回调函数
    void publisher_timerCallback2();//定时器2回调函数
    void motion_planning_interface(int arm_no, octomap_msgs::msg::Octomap octomap_msg, geometry_msgs::msg::Pose target_pose); // 利用move_group_interface进行避障轨迹规划
    void octomap_topic_subscribe( const octomap_msgs::msg::Octomap &msg) const;                                                // 订阅障碍物的topic
    void arm_status_topic_subscribe(const ArmStatus& arm_status) const;

    rclcpp_action::Server<ArmVisionPlanning>::SharedPtr m_arm_vision_planning_server;
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const ArmVisionPlanning::Goal> goal);
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle);
    void handle_accepted(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle);
    void execute_move(const std::shared_ptr<GoalHandleArmVisionPlanning> goal_handle);


public:
    //rclcpp::Publisher<octomap_msgs::msg::Octomap>::SharedPtr m_publisher;
    rclcpp::TimerBase::SharedPtr m_timer1, m_timer2;//分别对应左臂和右臂
    std::shared_ptr<GoalHandleArmVisionPlanning> m_myactionPtr1, m_myactionPtr2; // 分别对应左臂和右臂
    octomap_msgs::msg::Octomap m_octomap_msg;
    rclcpp::Time   m_begin_time;
    geometry_msgs::msg::Pose m_arm_left_pose;//左机械臂实际位姿
    geometry_msgs::msg::Pose m_arm_right_pose; // 左机械臂实际位姿
    float m_arm_left_jointAngles[6];// 左机械臂实际关节角度
    float m_arm_right_jointAngles[6]; // 右机械臂实际关节角度
    bool  m_arm_left_plan_success = false;
    bool m_arm_right_plan_success = false;
    bool m_arm_left_motion_success = false;
    bool m_arm_right_motion_success = false;

    rclcpp::Subscription<octomap_msgs::msg::Octomap>::SharedPtr m_octomap_subscriber;
    rclcpp::Subscription<ArmStatus>::SharedPtr m_arm_status_subscriber;
    
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

    if ( goal_handle->get_goal().arm_no == 1) //左臂
    {
        m_myactionPtr1 = goal_handle;

        // 进行避障运动规划
        const auto goal = m_myactionPtr1->get_goal();
        geometry_msgs::msg::Pose target_pose = goal.arm_target_pose;
        int arm_no = goal.arm_no;                                      // 左臂还是右臂
        motion_planning_interface(arm_no, m_octomap_msg, target_pose); // 进行避障轨迹规划

        // 通过定时器来实现连续反馈和结果反馈
        if (m_timer1 != NULL)
        {
            m_timer1->cancel();
            // delete m_timer;
        }
        m_timer1 = create_wall_timer(20ms, std::bind(&octomap_planning::publisher_timerCallback1, this));
    }

    else if ( goal_handle->get_goal().arm_no == 2 ) //右臂
    {
        m_myactionPtr2 = goal_handle;

        // 进行避障运动规划
        const auto goal = m_myactionPtr2->get_goal();
        geometry_msgs::msg::Pose target_pose = goal.arm_target_pose;
        int arm_no = goal.arm_no;                                      // 左臂还是右臂
        motion_planning_interface(arm_no, m_octomap_msg, target_pose); // 进行避障轨迹规划

        // 通过定时器来实现连续反馈和结果反馈
        if (m_timer2 != NULL)
        {
            m_timer2->cancel();
            // delete m_timer;
        }

        m_timer2 = create_wall_timer(20ms, std::bind(&octomap_planning::publisher_timerCallback2, this));
    }
    
        
    m_begin_time = rclcpp::Clock().now();//记录开始运动的时间


    // octomap_msgs::msg::Octomap   octomap_msg;
    // octomap_msgs::binaryMapToMsg(tree, octomap_msg);
    // octomap_msgs::fullMapToMsg(tree, octomap_msg);
    // m_octomap_msg.header.stamp = rclcpp::Clock().now();     // 时间戳
    // m_octomap_msg.header.frame_id = "base_link_jaka_right"; // 参考坐标, 与规划组arm_move_group的frame_id保持一致
    // m_publisher->publish(m_octomap_msg);                    // 该topic会被rviz2的插件订阅
    
}

// 定义一个定时器函数，实现 左臂 ArmVisionPlanning 的 action 的连续反馈和结果反馈
void octomap_planning :: publisher_timerCallback1()
{
    static int64_t count = 0;
    count++;

    const auto goal = m_myactionPtr1->get_goal();
    auto feedback = std::make_shared<ArmVisionPlanning::Feedback>();
    auto result = std::make_shared<ArmVisionPlanning::Result>();


    if (!m_arm_left_motion_success) // 左臂是否完成运动的变量 m_arm_left_motion_success, 赋值在 ArmStatus.msg 的topic接收函数中实现
    {
        // 如果收到 取消action的请求
        if (m_myactionPtr1->is_canceling())
        {
            m_myactionPtr1->canceled(result);
            RCLCPP_INFO(this->get_logger(), "任务取消");
            return;
        }
        feedback->arm_no = goal->arm_no;
        feedback->command_no = goal->command_no;
        feedback->plan_success = m_arm_left_plan_success;
        feedback->time_from_start = rclcpp::Clock().now() - m_begin_time;
        feedback->arm_pose = m_arm_left_pose;           // 左臂实际位姿
        feedback->arm_joint_angles = m_arm_left_jointAngles; // 左臂实际关节角度

        m_myactionPtr1->publish_feedback(feedback); // 提供过程反馈

        RCLCPP_INFO(this->get_logger(), "左臂运动连续反馈中");
    }

    else if (rclcpp::ok()) //结果反馈
    {
        result->arm_no = goal->arm_no;
        result->command_no = goal->command_no;
        result->time_from_start = rclcpp::Clock().now() - m_begin_time;
        result->arm_pose = m_arm_left_pose; // 机械臂实际位姿
        result->success = m_arm_left_motion_success;
        result->info = NULL;
        m_myactionPtr1->succeed(result); // action的结果反馈
        RCLCPP_INFO(this->get_logger(), "机械臂运动任务完成!");

        m_timer1->cancel();
        m_arm_left_motion_success = false;
    }
};

// 定义一个定时器函数，实现 右臂 ArmVisionPlanning 的 action 的连续反馈和结果反馈
void octomap_planning ::publisher_timerCallback2()
{
    static int64_t count = 0;
    count++;

    const auto goal = m_myactionPtr2->get_goal();
    auto feedback = std::make_shared<ArmVisionPlanning::Feedback>();
    auto result = std::make_shared<ArmVisionPlanning::Result>();

    static int64_t sum = 0;

    static size_t i = 0;

    if (!m_arm_right_motion_success) // 右臂是否完成运动的变量 m_arm_right_motion_success, 赋值在 ArmStatus.msg 的topic接收函数中实现
    {
        // 如果收到 取消action的请求
        if (m_myactionPtr2->is_canceling())
        {
            m_myactionPtr2->canceled(result);
            RCLCPP_INFO(this->get_logger(), "任务取消");
            return;
        }
        feedback->arm_no = goal->arm_no;
        feedback->command_no = goal->command_no;
        feedback->plan_success = m_arm_left_plan_success;
        feedback->time_from_start = rclcpp::Clock().now() - m_begin_time;
        feedback->arm_pose = m_arm_left_pose;                // 左臂实际位姿
        feedback->arm_joint_angles = m_arm_left_jointAngles; // 左臂实际关节角度

        m_myactionPtr2->publish_feedback(feedback); // 提供实时反馈

        RCLCPP_INFO(this->get_logger(), "左臂运动连续反馈中");
    }

    else if (rclcpp::ok())
    {
        result->arm_no = goal->arm_no;
        result->command_no = goal->command_no;
        result->time_from_start = rclcpp::Clock().now() - m_begin_time;
        result->arm_pose = m_arm_right_pose; // 机械臂实际位姿
        result->success = m_arm_right_motion_success;
        result->info = NULL;
        m_myactionPtr2->succeed(result); // action的结果反馈
        RCLCPP_INFO(this->get_logger(), "机械臂运动任务完成!");

        m_timer2->cancel();
        m_arm_right_motion_success = false;
    }
};



void octomap_planning ::motion_planning_interface(int arm_no, octomap_msgs::msg::Octomap octomap_msg, geometry_msgs::msg::Pose target_pose)
{
    auto node = rclcpp::Node::make_shared("robot_octomap_motion_planning", rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true));
    //  Create a ROS logger
    auto const logger = rclcpp::get_logger("robot_moveit_interface");

    if (arm_no == 1) //左臂的避障规划
    {
        moveit::planning_interface::MoveGroupInterface arm_move_group(node, "jaka_arm"); // 需要依附于节点，才能创建arm_move_group变量。连接到 jaka_arm_move_group 规划组

        arm_move_group.setGoalJointTolerance(0.1);       // 设置关节运动的允许误差，单位：弧度
        arm_move_group.setMaxVelocityScalingFactor(0.5); // 设置比例因子，以降低最大关节速度限制，取值范围(0,1]

        // RCLCPP_INFO(get_logger(),"Moveing to joint-space goal: joint_positions");

        arm_move_group.allowReplanning(true); // 若规划失败，允许再次进行规划

        // 设置工作场景，将障碍物带入场景中
        // 创建PlanningSceneMonitor实例, 用于获取 AllowedCollisionMatrix
        planning_scene_monitor::PlanningSceneMonitor planning_scene_monitor(node, "robot_description");
        collision_detection::AllowedCollisionMatrix acm = planning_scene_monitor.getPlanningScene()->getAllowedCollisionMatrix();

        // 将 collision_detection::AllowedCollisionMatrix 转成 moveit_msgs::msg::AllowedCollisionMatrix
        moveit_msgs::msg::AllowedCollisionMatrix acm_msg;
        acm.getMessage(acm_msg);

        auto frameID = arm_move_group.getPlanningFrame();
        moveit_msgs::msg::PlanningScene planning_scene_msg;
        planning_scene_msg.world.octomap.header.frame_id = frameID; // Replace with your frame ID
        planning_scene_msg.world.octomap.origin.orientation.w = 1.0;
        planning_scene_msg.allowed_collision_matrix = acm_msg;
        planning_scene_msg.world.octomap.octomap = octomap_msg; // 接收的障碍物信息在这里赋值给环境变量

        // 将PlanningScene 加（替换）到moveit中
        moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
        planning_scene_interface.applyPlanningScene(planning_scene_msg);

        arm_move_group.setPoseTarget(target_pose); // 接收到的期望末端位姿在这里使用

        // 调用MoveGroupInterface类的plan函数，实现轨迹规划，并保存到变量plan中。如果规划成功，则调用execute函数，该函数调用move_group节点，move_group节点作为client，发布”pand_arm_move_group_hand_controller/follow_joint_trajectory”的action，传递的数据类型为FollowJointTrajectoryAction，plan的内容包含在此action中
        // 如果要控制真实的机械臂，就需要定义一个服务端，传递的action名称为“arm_move_group_controller/follow_joint_trajectory”，数据类型为FollowJointTrajectoryAction, 就会自动接收execute函数传递过来的规划轨迹数据
        moveit::planning_interface::MoveGroupInterface::Plan plan;
        bool success = static_cast<bool>(arm_move_group.plan(plan));

        m_arm_left_plan_success = success;

        if (success)
        {
            m_arm_left_motion_success = static_cast<bool>(arm_move_group.execute(plan)); // 作为action的server,发送"/panda_arm_move_group_hand_controller/follow_joint_trajectory" ，消息类型为 control_msgs/action/FollowJointTrajectory
        }
        else
            RCLCPP_ERROR(logger, "Planning failed!");
    }



    if( arm_no == 2 ) //右臂的避障规划
    {
        moveit::planning_interface::MoveGroupInterface arm_move_group(node, "jaka_arm"); // 需要依附于节点，才能创建arm_move_group变量。连接到 jaka_arm_move_group 规划组

        arm_move_group.setGoalJointTolerance(0.1);       // 设置关节运动的允许误差，单位：弧度
        arm_move_group.setMaxVelocityScalingFactor(0.5); // 设置比例因子，以降低最大关节速度限制，取值范围(0,1]

        // RCLCPP_INFO(get_logger(),"Moveing to joint-space goal: joint_positions");

        arm_move_group.allowReplanning(true); // 若规划失败，允许再次进行规划

        // 设置工作场景，将障碍物带入场景中
        // 创建PlanningSceneMonitor实例, 用于获取 AllowedCollisionMatrix
        planning_scene_monitor::PlanningSceneMonitor planning_scene_monitor(node, "robot_description");
        collision_detection::AllowedCollisionMatrix acm = planning_scene_monitor.getPlanningScene()->getAllowedCollisionMatrix();

        // 将 collision_detection::AllowedCollisionMatrix 转成 moveit_msgs::msg::AllowedCollisionMatrix
        moveit_msgs::msg::AllowedCollisionMatrix acm_msg;
        acm.getMessage(acm_msg);

        auto frameID = arm_move_group.getPlanningFrame();
        moveit_msgs::msg::PlanningScene planning_scene_msg;
        planning_scene_msg.world.octomap.header.frame_id = frameID; // Replace with your frame ID
        planning_scene_msg.world.octomap.origin.orientation.w = 1.0;
        planning_scene_msg.allowed_collision_matrix = acm_msg;
        planning_scene_msg.world.octomap.octomap = octomap_msg; // 接收的障碍物信息在这里赋值给环境变量

        // 将PlanningScene 加（替换）到moveit中
        moveit::planning_interface::PlanningSceneInterface planning_scene_interface;
        planning_scene_interface.applyPlanningScene(planning_scene_msg);

        // joint1:[-6.28, 6.28], joint2:[-1.8325, 1.8325], joint3:[-6.28, 6.28], joint4:[-2.5307, 0.5235]， joint5:[-6.28, 6.28], joint6:[-1.5707, 1.5707]
        // std::vector<double> arm_move_group_joint_positions = { -0.78, 1.57, -4, -1, 2, 1};
        // arm_move_group.setJointValueTarget(arm_move_group_joint_positions); // 设置各个关节的目标值，单位：弧度或米（直线关节）

        // geometry_msgs::msg::Pose target_pose;
        // target_pose.position.x = 0.2;
        // target_pose.position.y = 0.1;
        // target_pose.position.z = 0.1;
        // target_pose.orientation.w = 1.0;
        arm_move_group.setPoseTarget(target_pose); // 接收到的期望末端位姿在这里使用

        // arm_move_group.setNamedTarget("ready");//”ready”是配置助手配置过程中，预设的位置，这里通过名称直接设置为目标位置

        // 调用MoveGroupInterface类的plan函数，实现轨迹规划，并保存到变量plan中。如果规划成功，则调用execute函数，该函数调用move_group节点，move_group节点作为client，发布”pand_arm_move_group_hand_controller/follow_joint_trajectory”的action，传递的数据类型为FollowJointTrajectoryAction，plan的内容包含在此action中
        // 如果要控制真实的机械臂，就需要定义一个服务端，传递的action名称为“arm_move_group_controller/follow_joint_trajectory”，数据类型为FollowJointTrajectoryAction, 就会自动接收execute函数传递过来的规划轨迹数据
        moveit::planning_interface::MoveGroupInterface::Plan plan;
        bool success = static_cast<bool>(arm_move_group.plan(plan));

        m_arm_right_plan_success = success;

        if (success)
        {
            m_arm_right_motion_success = static_cast<bool>(arm_move_group.execute(plan)); // 作为action的server,发送"/panda_arm_move_group_hand_controller/follow_joint_trajectory" ，消息类型为 control_msgs/action/FollowJointTrajectory
        }
        else
            RCLCPP_ERROR(logger, "Planning failed!");
    }

};

void octomap_planning ::octomap_topic_subscribe(const octomap_msgs::msg::Octomap &msg) const
{
    octomap_msgs::msg::Octomap octomap_msg = msg;
    m_octomap_msg = octomap_msg;
};

void octomap_planning ::arm_status_topic_subscribe(const ArmStatus &arm_status) const
{
    geometry_msgs::msg::Pose m_arm_left_pose;  // 左机械臂实际位姿
    geometry_msgs::msg::Pose m_arm_right_pose; // 左机械臂实际位姿
    float m_arm_left_jointAngles[6];           // 左机械臂实际关节角度
    float m_arm_right_jointAngles[6];          // 右机械臂实际关节角度

    if (arm_status.arm_no == 1) //左臂
    {

    }

    else if (arm_status.arm_no == 2)//右臂
    {
        arm_status.arm_pose
    }

}




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