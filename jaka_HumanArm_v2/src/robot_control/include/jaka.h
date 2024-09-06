#include "JAKAZuRobot.h"
#include "jktypes.h"
#include <vector>
#include <cstring>
#include <functional>
/************************* jaka 机械臂控制相关的函数*************************/
/*** jaka 机械臂函数调用顺序： 登陆控制器login_in -> 上电power_on -> 使能 enable_robot
-> 机械臂操作... -> 去使能 disable_robot ->下电 power_off -> 注销登陆 login_out
***/
using Action = std::function<void()>;
using Judge = std::function<bool(uint16_t ,uint16_t ,uint16_t ,uint16_t ,uint16_t ,uint16_t)>;
extern JAKAZuRobot m_JAKAZuRobot;
extern JointValue m_jot_pos;
extern JointValue m_jot_pos_JointMovement;
extern CartesianPose m_tcp_pose;
extern CartesianPose m_Linear_pose;
extern CartesianPose m_Linear_pose_con;
extern JointValue m_Jointest;
extern CartesianPose m_end_p;
extern CartesianPose m_mid_p;
extern RobotState state;
extern BOOL in_pos;
errno_t Servo_Move_Use_Joint_LPF(double cutoffFreq);

errno_t Servo_Move_Enable(BOOL enable);

errno_t Servo_J(const JointValue *joint_pos, MoveMode move_mode);


errno_t Login_In(const char *ip);


errno_t Power_On();



errno_t Power_Off();


errno_t Enable_Robot();


errno_t Disable_Robot();

errno_t Login_out();

errno_t shut_down();


errno_t Set_Collision_Level(const int level);


errno_t Get_Collision_Level();


BOOL Is_In_Collision();


errno_t Collision_Recover();

/*jog “点动”或者“单步运动”。适合于单个关节的控制，或者 末端在 x y z rx ry rz单个方向上的运动。
  连续点动：当用户按下按键，对应的轴就会以设定好的速度连续转动，一旦松开按键，轴就会立即停止。
  增量点动：当用户按下点动按键时，轴就会以设定好的速度转动某个固定的角度(或距离)，到达这个角度后，轴就会停止转动，而不管用户是否一直按着按键。当用户松开按键并再次按下按键时，轴又会以同样的方式运动。
*/
errno_t Jog_Motion(int aj_num, MoveMode move_mode, CoordType coord_type, double vel_cmd, double pos_cmd);


errno_t Jog_Stop(int num);


// 多关节联动
errno_t Joints_Move(const JointValue *joint_pos, MoveMode move_mode, BOOL is_block, double speed);


errno_t Joints_Move(const JointValue *joint_pos, MoveMode move_mode, BOOL is_block, double speed, double acc, double tol, const OptionalCond *option_cond);


// 停止运动
errno_t Motion_Abort();


errno_t Linear_Move(const CartesianPose *end_pos, MoveMode move_mode, BOOL is_block, double speed);


errno_t Linear_Move(const CartesianPose *end_pos, MoveMode move_mode, BOOL is_block, double speed, double accel, double tol, const OptionalCond *option_cond, double ori_vel, double ori_acc);


errno_t Get_Joint_Position(JointValue *joint_position);


errno_t Get_Tcp_Position(CartesianPose *tcp_position);


// 机械臂是否正在运动
errno_t Is_Moving(BOOL *in_pos);




/***************************     inspire 仿生手相关的控制函数   *****************************/
#define PI 3.1415926
#define FRAME_HEAD1 0xEB
#define FRAME_HEAD2 0x90

#define FRAME_HEAD1_RT 0x90
#define FRAME_HEAD2_RT 0xEB

#define REGISTER_ANGLE_ACT 1546
#define REGISTER_FORCE_ACT 1582
#define REGISTER_TEMPLE 1618
#define CMD_HANDG3_READ 0x11  // 读三代手内部寄存器
#define CMD_HANDG3_WRITE 0x12 // 写三代手内部寄存器
#define ANGLE_SET 1486
#define SPEED_SET 1522

/**********modbusRTU********/

#define SLAVE_STATION_ADD 0x01
#define FUNCTION_READ_REGISTER 0x03
#define FUNCTION_SINGLE_REGISTER 0x06
#define FUNCTION_MULTI_REGISTER 0x10
/**********modbusRTU ANGLE_SET********/
#define ANGLE_SET_H 0x05
#define ANGLE_SET_L 0xCE

extern ModRtuComm hand;


errno_t change_mode(); // 更改485通道二的通讯模式,手的通讯模式是modbus rtu
void Add_Signal();     // 添加六个角度信号量，只有添加信号量才能获取角度信息
void Delete_signal();  // 删除信号量，放在析构函数中
std::vector<uint16_t> read_SeriesPort(); // 读手角度信息 但是信息读取有问题

// 发送写手的角度指令modbus rtu
void write_SeriesPort_modbus(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6, uint16_t  Register_Number);


void action0();
bool judge0(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6);

void action1();
bool judge1(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6);

void action2();
bool judge2(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6);

void action3();
bool judge3(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6);

void action4();
bool judge4(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6);

void action5();
bool judge5(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6);