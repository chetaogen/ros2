/**
 * @file robot_moveit_interface.cpp
 * @author your name (you@domain.com)
 * @brief  这个例子实现了真实jaka机械臂的控制
 * @version 0.1
 * @date 2024-07-18
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "jaka.h"

#include <map>
#include "math.h"
#include <iostream>
#include <vector>

#include <iostream>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/logging.hpp>

#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/moveit_cpp/moveit_cpp.h>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

// #include <geometry_msgs/PoseStamped.h>

// #include <tf2/Linearm_move_groupath/Quaternion.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <octomap/OcTree.h>
#include <octomap_msgs/conversions.h>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap/octomap.h>

#include <rclcpp/rclcpp.hpp>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "control_msgs/action/follow_joint_trajectory.hpp"

#include "sensor_msgs/msg/point_cloud2.hpp"
#include "std_msgs/msg/header.hpp" // 包含Header信息

#include <cstdio>
#include <chrono>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <cmath>

#include "arm_hand_interface/msg/arm_status.hpp"
#include "arm_hand_interface/action/arm_vision_planning.hpp"
#include "arm_hand_interface/action/dexterous_hand.hpp"

using DexterousHand = arm_hand_interface::action::DexterousHand;
using ArmStatus = arm_hand_interface::msg::ArmStatus;
using ArmVisionPlanning = ArmVisionPlanningarm_hand_interface::action::ArmVisionPlanning;

using GoalHandleArmVisionPlanning = rclcpp_action::ServerGoalHandle<ArmVisionPlanning>;
using GoalHandleDexterousHand = rclcpp_action::ServerGoalHandle<DexterousHand>;

// typedef pcl::PointXYZRGB PointType;
using namespace std;
using std::vector;

using namespace std::chrono_literals; // c++时间库，允许函数以 500ms的形式定义时间

using std::placeholders::_1;
using std::placeholders::_2; // 占位符

using FollowJointTrajectory = control_msgs::action::FollowJointTrajectory;
using GoalHandleFJT = rclcpp_action::ServerGoalHandle<FollowJointTrajectory>;
using namespace std::placeholders;

class robot_control : public rclcpp::Node
{
public:
    robot_control() : Node("robot_control")
    {
        // 创建一个Publisher，发布/joint_states的topic
        m_joint_states_publisher = this->create_publisher<sensor_msgs::msg::JointState>("/joint_states", 10);

        // 创建一个Publisher，发布 ArmStatus 的topic
        m_arm_status_publisher = this->create_publisher<ArmStatus>("ArmStatus", 10);

        // 创建一个定时器，每 4ms 发布一次真实关节角度消息
        m_timer1 = create_wall_timer(4ms, std::bind(&robot_control ::publisher_timer_1_Callback, this));

        // 创建一个定时器，每 4ms 发布一次机械臂关节控制指令
        m_timer2 = create_wall_timer(8ms, std::bind(&robot_control ::publisher_timer_2_Callback, this));

        // 创建一个定时器，每 4ms 发布一次armstatus话题
        m_timer3 = create_wall_timer(8ms, std::bind(&robot_control ::publisher_timer_3_Callback, this));

        /*************** 创建服务端，接收规划的机械臂关节轨迹 ************/
        this->m_action_server_ = rclcpp_action::create_server<FollowJointTrajectory>(
            this, "/jaka_arm_controller/follow_joint_trajectory",
            std::bind(&robot_control::handle_goal, this, _1, _2),
            std::bind(&robot_control::handle_cancel, this, _1),
            std::bind(&robot_control::handle_accepted, this, _1));

        m_initialJointStates[6] = {0};
        memset(joint_pos.jVal, 0, sizeof(joint_pos.jVal));           
    }

public:
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr m_joint_states_publisher;
    rclcpp::Publisher<ArmStatus>::SharedPtr m_arm_status_publisher;
    rclcpp::TimerBase::SharedPtr m_timer1;
    rclcpp::TimerBase::SharedPtr m_timer2;
    rclcpp::TimerBase::SharedPtr m_timer3;
    rclcpp::TimerBase::SharedPtr m_timer4;
    void publisher_timer_1_Callback(); // 定时器1的回调函数，发布/joint_states话题
    void publisher_timer_2_Callback(); // 定时器2的回调函数，控制机械臂
    void publisher_timer_3_Callback(); // 定时器3的回调函数，发布 armstatus话题
    void publisher_timer_4_Callback(); // 定时器4的回调函数，控制仿生手

    // <groupName>_controller/follow_joint_trajectory 的服务端相关
    rclcpp_action::Server<FollowJointTrajectory>::SharedPtr m_action_server_;
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const FollowJointTrajectory::Goal> goal);
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleFJT> goal_handle);
    void handle_accepted(const std::shared_ptr<GoalHandleFJT> goal_handle);
    void execute_move(const std::shared_ptr<GoalHandleFJT> goal_handle);

    void publish_joint_states(std::vector<double> SampledJointPosition);

    // DexterousHand.action 服务端
    rclcpp_action::Server<DexterousHand>::SharedPtr m_dex_server_;
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const DexterousHand::Goal> goal);
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleDexterousHand> goal_handle);
    void handle_accepted(const std::shared_ptr<GoalHandleDexterousHand> goal_handle);
    void execute_move(const std::shared_ptr<GoalHandleDexterousHand> goal_handle);

    struct QuinticPolynomial
    {
        double a0;double a1;double a2;double a3;double  a4;double  a5;
    }; // 定义五次多项式函数系数结构体
    QuinticPolynomial solveQuinticPolynomial(double p0, double v0, double a0, double pT, double vT, double aT, double T);
    double calculatePosition(const QuinticPolynomial &poly, double t);
    double calculateVelocity(const QuinticPolynomial &poly, double t);
    double calculateAcceleration(const QuinticPolynomial &poly, double t);

    std::vector<double> time_from_start;       // 关节运动指令对应的时间
    std::vector<double> r1_jointAngleCommands; // 关节1接收关节位移轨迹指令
    std::vector<double> r2_jointAngleCommands; // 关节2接收关节位移轨迹指令
    std::vector<double> r3_jointAngleCommands; // 关节3接收关节位移轨迹指令
    std::vector<double> r4_jointAngleCommands; // 关节4接收关节位移轨迹指令
    std::vector<double> r5_jointAngleCommands; // 关节5接收关节位移轨迹指令
    std::vector<double> r6_jointAngleCommands; // 关节6接收关节位移轨迹指令

    std::vector<double> r1_jointVelCommands; // 关节1接收关节速度轨迹指令
    std::vector<double> r2_jointVelCommands; // 关节2接收关节速度轨迹指令
    std::vector<double> r3_jointVelCommands; // 关节3接收关节速度轨迹指令
    std::vector<double> r4_jointVelCommands; // 关节4接收关节速度轨迹指令
    std::vector<double> r5_jointVelCommands; // 关节5接收关节速度轨迹指令
    std::vector<double> r6_jointVelCommands; // 关节6接收关节速度轨迹指令

    std::vector<double> r1_jointAccCommands; // 关节1接收关节加速度轨迹指令
    std::vector<double> r2_jointAccCommands; // 关节2接收关节加速度轨迹指令
    std::vector<double> r3_jointAccCommands; // 关节3接收关节加速度轨迹指令
    std::vector<double> r4_jointAccCommands; // 关节4接收关节加速度轨迹指令
    std::vector<double> r5_jointAccCommands; // 关节5接收关节加速度轨迹指令
    std::vector<double> r6_jointAccCommands; // 关节6接收关节加速度轨迹指令

    std::vector<double> m_SampledJointStates; // 在没有真实机械臂时，将接收到的关节位移指令作为实际关节角度反馈
    std::vector<double> m_Current_joint_position;
    double m_initialJointStates[6];
    JointValue joint_pos;
    

};



robot_control::QuinticPolynomial robot_control::solveQuinticPolynomial(double p0, double v0, double a0, double pT, double vT, double aT, double T)
{
    QuinticPolynomial poly;

    poly.a0 = p0;
    poly.a1 = v0;
    poly.a2 = 0.5 * a0;

    double T2 = T * T;
    double T3 = T2 * T;
    double T4 = T3 * T;
    double T5 = T4 * T;

    poly.a3 = (20 * pT - 20 * p0 - (8 * vT + 12 * v0) * T - (3 * a0 - aT) * T2) / (2 * T3);
    poly.a4 = (30 * p0 - 30 * pT + (14 * vT + 16 * v0) * T + (3 * a0 - 2 * aT) * T2) / (2 * T4);
    poly.a5 = (12 * pT - 12 * p0 - (6 * vT + 6 * v0) * T - (a0 - aT) * T2) / (2 * T5);

    return poly;
}
double robot_control ::calculatePosition(const QuinticPolynomial &poly, double t)
{
    return poly.a0 + poly.a1 * t + poly.a2 * t * t + poly.a3 * t * t * t + poly.a4 * t * t * t * t + poly.a5 * t * t * t * t * t;
}

// 计算在时间t处的五次多项式的速度
double robot_control ::calculateVelocity(const QuinticPolynomial &poly, double t)
{
    return poly.a1 + 2 * poly.a2 * t + 3 * poly.a3 * t * t + 4 * poly.a4 * t * t * t + 5 * poly.a5 * t * t * t * t;
}

// 计算在时间t处的五次多项式的加速度
double robot_control ::calculateAcceleration(const QuinticPolynomial &poly, double t)
{
    return 2 * poly.a2 + 6 * poly.a3 * t + 12 * poly.a4 * t * t + 20 * poly.a5 * t * t * t;
}

// 定义定时器1的回调函数，采集真实机械臂的角度，发送给move_group节点和rviz2节点
void robot_control ::publisher_timer_1_Callback()
{
    static int64_t count1 = 0;
    count1++;

    std::vector<double> SampledJointPosition;
    SampledJointPosition = {0, 0, 0, 0, 0, 0};

    // 调用机械臂采集函数，获取真实机械臂关节角度
    JointValue joint_position;
    Get_Joint_Position(&joint_position);
    for (int i = 0; i <= 5; i++)
    {
        SampledJointPosition[i] = joint_position.jVal[i];
    }

    for (int i = 0; i <= 5; i++)
        m_initialJointStates[i] = joint_position.jVal[i];


    publish_joint_states(SampledJointPosition);
};

// 定义定时器2的回调函数，对接收到的8ms周期的关节指令，进行插补，并发送给机械臂
void robot_control ::publisher_timer_2_Callback()
{
    if (r1_jointAngleCommands.size() == 0)
        return;
    joint_pos.jVal[0] = r1_jointAngleCommands[0];
    joint_pos.jVal[1] = r2_jointAngleCommands[0];
    joint_pos.jVal[2] = r3_jointAngleCommands[0];
    joint_pos.jVal[3] = r4_jointAngleCommands[0];
    joint_pos.jVal[4] = r5_jointAngleCommands[0];
    joint_pos.jVal[5] = r6_jointAngleCommands[0];

    r1_jointAngleCommands.erase(r1_jointAngleCommands.begin());
    r2_jointAngleCommands.erase(r2_jointAngleCommands.begin());
    r3_jointAngleCommands.erase(r3_jointAngleCommands.begin());
    r4_jointAngleCommands.erase(r4_jointAngleCommands.begin());
    r5_jointAngleCommands.erase(r5_jointAngleCommands.begin());
    r6_jointAngleCommands.erase(r6_jointAngleCommands.begin());
    
    Servo_J(&joint_pos, ABS);
    
    if (r1_jointAngleCommands.size() == 0)
    {
    rclcpp::Rate rate1(1.5);
    rate1.sleep();
    write_SeriesPort_modbus(999,999,999,999,1000,1000,ANGLE_SET);
    }
};


void robot_control::publish_joint_states(std::vector<double> SampledJointPosition)
{
    if (rclcpp::ok())
    {
        sensor_msgs::msg::JointState jointStates;
        jointStates.header.frame_id = "";
        jointStates.header.stamp.sec = this->now().seconds();
        jointStates.header.stamp.nanosec = this->now().nanoseconds();
        jointStates.name = {"r-j1", "r-j2", "r-j3", "r-j4", "r-j5", "r-j6"};
        // jointStates.name = m_JointNames;
        jointStates.position = SampledJointPosition;

        m_joint_states_publisher->publish(jointStates);

        // std::cout << "Publish joint states[0]: "  << jointStates[0] << std::endl;
        // std::cout << "Publish joint states[1]: "  << jointStates[1] << std::endl;
    }
}

rclcpp_action::GoalResponse robot_control::handle_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const FollowJointTrajectory::Goal> goal)
{
    (void)uuid;

    // RCLCPP_INFO(this->get_logger(), "接收到action客户端的请求");

    //  std::cout << "关节数量:" << goal->trajectory.joint_names.size() << std::endl;
    for (long unsigned int i = 0; i < goal->trajectory.joint_names.size(); i++)
    {
        //     std::cout << goal->trajectory.joint_names.at(i).c_str() << std::endl;
    }

    // std::cout << "frame id: " << goal->trajectory.header.frame_id.c_str() << "time stamp sec: " << goal->trajectory.header.stamp.sec << "time stamp nanosec: " << goal->trajectory.header.stamp.nanosec << std::endl;

    int pointSize = goal->trajectory.points.size();
    if (pointSize > 0)
    {
        for (int i = 0; i < pointSize; i++)
        {
            auto point = goal->trajectory.points.at(i);
            // std::cout << point.positions << std::endl;
            //         std::cout << "[sec:" << point.time_from_start.sec << ", nanosec:" << point.time_from_start.nanosec << "]" << std::endl;
        }
    }

    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse robot_control::handle_cancel(const std::shared_ptr<GoalHandleFJT> goal_handle)
{
    Q_UNUSED(goal_handle);
    //  RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");

    return rclcpp_action::CancelResponse::ACCEPT;
}

void robot_control::handle_accepted(const std::shared_ptr<GoalHandleFJT> goal_handle)
{
    using std::placeholders::_1;

    std::thread{std::bind(&robot_control::execute_move, this, _1), goal_handle}
        .detach();
}

void robot_control::execute_move(const std::shared_ptr<GoalHandleFJT> goal_handle)
{
    int i = 0;
    int j = 0;
    const auto goal = goal_handle->get_goal();
    auto result = std::make_shared<FollowJointTrajectory::Result>();
    int point_num = goal->trajectory.points.size();
    std::cout << "Move_group give us" << point_num << "points" << std::endl;
    if (point_num <= 0)
        return;

    for (auto str : goal->trajectory.joint_names)
    {
        std::cout << str << std::endl;
    }

    std::vector<std::string> m_JointNames = goal->trajectory.joint_names;
    

    for (i = 0; i < point_num-1; i++)
    {
        // 计算在时间t处的五次多项式的位置

        double tstart = goal->trajectory.points[i].time_from_start.sec + goal->trajectory.points[i].time_from_start.nanosec / 1000000000.0;

        for (j= 0; j <= 5; j++) // 这个循环是循环6个关节的
        {                                                                                                 // poly中保存这二点求解出来的系数
            QuinticPolynomial poly = solveQuinticPolynomial(
                goal->trajectory.points[i].positions[j],
                goal->trajectory.points[i].velocities[j],
                goal->trajectory.points[i].accelerations[j],
                goal->trajectory.points[i + 1].positions[j],
                goal->trajectory.points[i + 1].velocities[j],
                goal->trajectory.points[i + 1].accelerations[j],
                0.1); // 用tstart表示每个接收点的时间
                
            if(j == 0)
            {
                for (int k= 0; k < 12; k++)
                {
                    
                    double t1 = 8 * k / 1000.0;
                    double t = t1 + tstart;
                    double p = calculatePosition(poly, t1);
                    double v = calculateVelocity(poly, t1);
                    double a = calculateAcceleration(poly, t1);
                    time_from_start.push_back(t);
                    //std::cout << " time_from_start :"<< time_from_start[k + i * 6] <<std::endl;
                    r1_jointAngleCommands.push_back(p);
                    r1_jointVelCommands.push_back(v);
                    r1_jointAccCommands.push_back(a);
                    
                }
            }

            if(j == 1)
            {
                for (int k= 0; k < 12; k++)
                {
                    
                    double t1 = 8 * k / 1000.0;
                    
                    double p = calculatePosition(poly, t1);
                    double v = calculateVelocity(poly, t1);
                    double a = calculateAcceleration(poly, t1);
                    
                    r2_jointAngleCommands.push_back(p);
                    r2_jointVelCommands.push_back(v);
                    r2_jointAccCommands.push_back(a);
                    
                }
            }

            if(j == 2)
            {
                for (int k= 0; k < 12; k++)
                {
                    
                    double t1 = 8 * k / 1000.0;
                    
                    double p = calculatePosition(poly, t1);
                    double v = calculateVelocity(poly, t1);
                    double a = calculateAcceleration(poly, t1);
                    
                    r3_jointAngleCommands.push_back(p);
                    r3_jointVelCommands.push_back(v);
                    r3_jointAccCommands.push_back(a);
                    
                }
            }

            if(j == 3)
            {
                for (int k= 0; k < 12; k++)
                {
                    
                    double t1 = 8 * k / 1000.0;
                    
                    double p = calculatePosition(poly, t1);
                    double v = calculateVelocity(poly, t1);
                    double a = calculateAcceleration(poly, t1);
                    
                    r4_jointAngleCommands.push_back(p);
                    r4_jointVelCommands.push_back(v);
                    r4_jointAccCommands.push_back(a);
                    
                }
            }

            if(j == 4)
            {
                for (int k= 0; k < 12; k++)
                {
                    
                    double t1 = 8 * k / 1000.0;
                    
                    double p = calculatePosition(poly, t1);
                    double v = calculateVelocity(poly, t1);
                    double a = calculateAcceleration(poly, t1);
                    
                    r5_jointAngleCommands.push_back(p);
                    r5_jointVelCommands.push_back(v);
                    r5_jointAccCommands.push_back(a);
                    
                }
            }

            if(j == 5)
            {
                for (int k= 0; k < 12; k++)
                {
                    
                    double t1 = 8 * k / 1000.0;
                    
                    double p = calculatePosition(poly, t1);
                    double v = calculateVelocity(poly, t1);
                    double a = calculateAcceleration(poly, t1);
                    
                    r6_jointAngleCommands.push_back(p);
                    r6_jointVelCommands.push_back(v);
                    r6_jointAccCommands.push_back(a);
                    
                }
            }
        }

        
        // 给action的客户端发送实时状态反馈，每个点都要给个实时反馈
        auto feedback = std::make_shared<FollowJointTrajectory::Feedback>();
        feedback->header.frame_id = goal->trajectory.header.frame_id;
        feedback->header.stamp = goal->trajectory.header.stamp;
        feedback->joint_names = goal->trajectory.joint_names;
        // feedback->actual = goal->trajectory.joint_names;
        // feedback->desired = ;
        // feedback->error = "";
        goal_handle->publish_feedback(feedback);
        // std::cout << "Publish Feedback" << "points" << std::endl; // Publish feedback
//std::cout <<"moveitpos1 :"<<goal->trajectory.points[i].positions[0]<<"  pos2 :"<<goal->trajectory.points[i].positions[1]<<" vel1 :"<<goal->trajectory.points[i].velocities[0]<<" vel2 :"<<goal->trajectory.points[i].velocities[1]<<std::endl;
        /*检测任务是否被取消*/
        if (goal_handle->is_canceling())
        {
            result->error_code = -1;
            result->error_string = "has cancel";
            goal_handle->canceled(result);
            RCLCPP_INFO(this->get_logger(), "Goal Canceled");
            return;
        }
    }

    // action的结果反馈
    result->error_code = 0; // SUCCCESSFUL=0
    result->error_string = "";
    goal_handle->succeed(result);
    RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
}

void robot_control ::publisher_timer_3_Callback()
{

    static int64_t count1 = 0;
    count1++;

    std::vector<double> SampledJointPosition;
    SampledJointPosition = {0, 0, 0, 0, 0, 0};

    // 调用机械臂采集函数，获取真实机械臂关节角度
    JointValue joint_position;
    Get_Joint_Position(&joint_position);
    for (int i = 0; i <= 5; i++)
    {
        SampledJointPosition[i] = joint_position.jVal[i];
    }
     //读取手的关节角度
    std::vector<uint16_t> R_ByteArray = read_SeriesPort();

    m_arm_status_publisher
}





int main(int argc, char **argv)
{
    // 1.初始化ros2
    rclcpp::init(argc, argv);

    Login_In("192.168.3.100");
    Power_On();
    Enable_Robot();
    //Servo_Move_Use_Joint_LPF(0.5);
    Servo_Move_Enable(TRUE);
    
    Set_Collision_Level(3); // 碰撞等级为1,碰撞阈值25N
    change_mode();

    // 定义一个 pointCloud2_publisher 实例
    auto robot = std::make_shared<robot_control>();
    rclcpp::spin(robot);

    // 释放ros2资源
    rclcpp::shutdown();

    Disable_Robot();
    Power_Off();
    Login_out();

    return 0;
}
