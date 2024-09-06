#include"jaka.h"
#include <iostream>
#include "../include/jaka.h"
#include <vector>

/************************* jaka 机械臂控制相关的函数*************************/
/*** jaka 机械臂函数调用顺序： 登陆控制器login_in -> 上电power_on -> 使能 enable_robot
-> 机械臂操作... -> 去使能 disable_robot ->下电 power_off -> 注销登陆 login_out
***/

JAKAZuRobot m_JAKAZuRobot;
JointValue m_jot_pos;
JointValue m_jot_pos_JointMovement;
CartesianPose m_tcp_pose;
CartesianPose m_Linear_pose;
CartesianPose m_Linear_pose_con;
JointValue m_Jointest;
CartesianPose m_end_p;
CartesianPose m_mid_p;
RobotState state;


errno_t Servo_Move_Enable(BOOL enable)
{
    m_JAKAZuRobot.servo_move_enable(enable);
    return enable;
}

errno_t Servo_J(const JointValue *joint_pos, MoveMode move_mode)
{
    return m_JAKAZuRobot.servo_j(joint_pos, move_mode);
}


errno_t Login_In(const char *ip)
{
    return m_JAKAZuRobot.login_in(ip);
}



errno_t Power_On()
{
    return m_JAKAZuRobot.power_on();
}



errno_t Power_Off()
{
    return m_JAKAZuRobot.power_off();
}

errno_t Enable_Robot()
{
    return m_JAKAZuRobot.enable_robot();
}

errno_t Disable_Robot()
{
    return m_JAKAZuRobot.disable_robot();
}

errno_t Login_out()
{
    return m_JAKAZuRobot.login_out();
}

errno_t shut_down()
{
    return m_JAKAZuRobot.shut_down();
}

errno_t Set_Collision_Level(const int level)
{
    return m_JAKAZuRobot.set_collision_level(level);
}

errno_t Get_Collision_Level()
{
    int level; // collision level
    m_JAKAZuRobot.get_collision_level(&level);
    return level;
}

BOOL Is_In_Collision()
{
    BOOL in_collision;
    m_JAKAZuRobot.is_in_collision(&in_collision);
    return in_collision;
}

errno_t Collision_Recover()
{
    return m_JAKAZuRobot.collision_recover();
}

/*jog “点动”或者“单步运动”。适合于单个关节的控制，或者 末端在 x y z rx ry rz单个方向上的运动。
增量点动：当用户按下点动按键时，轴就会以设定好的速度转动某个固定的角度(或距离)，到达这个角度后，轴就会停止转动，而不管用户是否一直按着按键。当用户松开按键并再次按下按键时，轴又会以同样的方式运动。
*/
errno_t Jog_Motion(int aj_num, MoveMode move_mode, CoordType coord_type, double vel_cmd, double pos_cmd)
{
    return m_JAKAZuRobot.jog(aj_num, move_mode, coord_type, vel_cmd, pos_cmd);
}

errno_t Jog_Stop(int num)
{
    return m_JAKAZuRobot.jog_stop(num);
}

// 多关节联动
errno_t Joints_Move(const JointValue *joint_pos, MoveMode move_mode, BOOL is_block, double speed)
{
    return m_JAKAZuRobot.joint_move(joint_pos, move_mode, is_block, speed);
}

errno_t Joints_Move(const JointValue *joint_pos, MoveMode move_mode, BOOL is_block, double speed, double acc, double tol, const OptionalCond *option_cond)
{
    return m_JAKAZuRobot.joint_move(joint_pos, move_mode, is_block, speed, acc, tol, option_cond);
}

// 停止运动
errno_t Motion_Abort()
{
    return m_JAKAZuRobot.motion_abort();
}

errno_t Linear_Move(const CartesianPose *end_pos, MoveMode move_mode, BOOL is_block, double speed)
{
    return m_JAKAZuRobot.linear_move(end_pos, move_mode, is_block, speed);
}

errno_t Linear_Move(const CartesianPose *end_pos, MoveMode move_mode, BOOL is_block, double speed, double accel, double tol, const OptionalCond *option_cond, double ori_vel, double ori_acc)
{
    return m_JAKAZuRobot.linear_move(end_pos, move_mode, is_block, speed, accel, tol, option_cond, ori_vel, ori_acc);
}

errno_t Get_Joint_Position(JointValue *joint_position)
{
    return m_JAKAZuRobot.get_joint_position(joint_position);
}

errno_t Get_Tcp_Position(CartesianPose *tcp_position)
{
    return m_JAKAZuRobot.get_tcp_position(tcp_position);
}

// 机械臂是否正在运动
errno_t Is_Moving(BOOL *in_pos)
{
    m_JAKAZuRobot.is_in_pos(in_pos);
    return *in_pos;
}

/************************* inspire 仿生手 控制相关的函数*************************/

ModRtuComm hand;
SignInfo sign_info_angles[6];

// 更改485通道二的通讯模式,手的通讯模式是modbus rtu
errno_t change_mode()
{
    int ret;
    /*获取通道1的通信协议
    int chn_id=0;
    int chn_mode;
    m_JAKAZuRobot.get_rs485_chn_mode(chn_id,&chn_mode);
    qDebug()<<"通道"<<chn_id+1<<" chn_mode :"<<chn_mode;
    m_JAKAZuRobot.set_rs485_chn_mode(0,1);
*/

    // 获取通道2的通信协议
    int chn_id_ = 1;
    int chn_mode_;
    m_JAKAZuRobot.get_rs485_chn_mode(chn_id_, &chn_mode_);
    std::cout << "通道" << chn_id_ + 1 << " chn_mode :" << chn_mode_ <<std::endl;

    m_JAKAZuRobot.set_rs485_chn_mode(1, 0);
    /*RS485通道1通讯参数配置
    int ret;
    hand.chn_id=0;
    hand.parity=78;
    hand.baudrate=115200;
    hand.databit=8;
    hand.stopbit=1;
    hand.slaveId=1;
    ret=m_JAKAZuRobot.set_rs485_chn_comm(hand);
    ERR(ret,"RS485通道1通讯参数配置");
    qDebug()<<"RS485通道"<<hand.chn_id+1<<"配置完毕";
    */
    // RS485通道2通讯参数配置
    hand.chn_id = 1;
    hand.parity = 78;
    hand.baudrate = 115200;
    hand.databit = 8;
    hand.stopbit = 1;
    hand.slaveId = 1;
    return m_JAKAZuRobot.set_rs485_chn_comm(hand);
    
}

// 添加六个角度信号量，只有添加信号量才能获取角度信息
void Add_Signal()
{
    memcpy(sign_info_angles[0].sig_name, "Little_fin", sizeof("Little_fin"));
    sign_info_angles[0].chn_id = 1;
    sign_info_angles[0].sig_addr = 0x060A; // 1546
    sign_info_angles[0].frequency = 10;
    sign_info_angles[0].sig_type = 3;
    memcpy(sign_info_angles[1].sig_name, "Ring_fin", sizeof("Ring_fin"));
    sign_info_angles[1].chn_id = 1;
    sign_info_angles[1].sig_addr = 0x060C; // 1548
    sign_info_angles[1].frequency = 10;
    sign_info_angles[1].sig_type = 3;
    memcpy(sign_info_angles[2].sig_name, "Middle_fin", sizeof("Middle_fin"));
    sign_info_angles[2].chn_id = 1;
    sign_info_angles[2].sig_addr = 0x060E; // 1550
    sign_info_angles[2].frequency = 10;
    sign_info_angles[2].sig_type = 3;
    memcpy(sign_info_angles[3].sig_name, "Index_fin", sizeof("Index_fin"));
    sign_info_angles[3].chn_id = 1;
    sign_info_angles[3].sig_addr = 0x0610; // 1552
    sign_info_angles[3].frequency = 10;
    sign_info_angles[3].sig_type = 3;
    memcpy(sign_info_angles[4].sig_name, "Thumb_crooked", sizeof("Thumb_crooked"));
    sign_info_angles[4].chn_id = 1;
    sign_info_angles[4].sig_addr = 0x0612; // 1554
    sign_info_angles[4].frequency = 10;
    sign_info_angles[4].sig_type = 3;
    memcpy(sign_info_angles[5].sig_name, "Thumb_rotary", sizeof("Thumb_rotary"));
    sign_info_angles[5].chn_id = 1;
    sign_info_angles[5].sig_addr = 0x0614; // 1556
    sign_info_angles[5].frequency = 10;
    sign_info_angles[5].sig_type = 3;
    for (int i = 0; i < 6; i++)
    {
        int ret = m_JAKAZuRobot.add_tio_rs_signal(sign_info_angles[i]);
    }
}

// 删除信号量，放在析构函数中
void Delete_signal()
{
    const char *name[6] = {"Little_fin", "Ring_fin", "Middle_fin", "Index_fin", "Thumb_crooked", "Thumb_rotary"};
    for (int i = 0; i < 6; i++)
    {
        int ret = m_JAKAZuRobot.del_tio_rs_signal(name[i]);

    }
}

// 发送写手的角度指令modbus rtu
std::vector<uint16_t> read_SeriesPort()
{
    std::vector<uint16_t> R_ByteArray;
    for (int i = 0; i < 6; i++)
    {
        //m_JAKAZuRobot.get_signal_by_index(&sign_info_angles[i], i);
    }
    for (int i = 0; i < 6; i++)
    {
        R_ByteArray.push_back(sign_info_angles[i].value);
    }

    return 
}

void write_SeriesPort_modbus(uint16_t angle_1, uint16_t angle_2, uint16_t angle_3, uint16_t angle_4, uint16_t angle_5, uint16_t angle_6, qint16 Register_Number)
{
    uint8_t Register_Number_H = (Register_Number >> 8) & 0xFF;
    uint8_t Register_Number_L = Register_Number & 0xFF;
    uint8_t Register_amount_H = 0x00;
    uint8_t Register_amount_L = 0x06;
    uint8_t BYTE_LEN = 0x12;

    std::vector<uint16_t> ARRAY;
    ARRAY.push_back(angle_1);
    ARRAY.push_back(angle_2);
    ARRAY.push_back(angle_3);
    ARRAY.push_back(angle_4);
    ARRAY.push_back(angle_5);
    ARRAY.push_back(angle_6);

    std::vector<uint8_t> ARRAY2;
    ARRAY2.push_back((ARRAY[0] >> 8) & 0xff);
    ARRAY2.push_back(ARRAY[0] & 0xff);
    ARRAY2.push_back((ARRAY[1] >> 8) & 0xff);
    ARRAY2.push_back(ARRAY[1] & 0xff);
    ARRAY2.push_back((ARRAY[2] >> 8) & 0xff);
    ARRAY2.push_back(ARRAY[2] & 0xff);
    ARRAY2.push_back((ARRAY[3] >> 8) & 0xff);
    ARRAY2.push_back(ARRAY[3] & 0xff);
    ARRAY2.push_back((ARRAY[4] >> 8) & 0xff);
    ARRAY2.push_back(ARRAY[4] & 0xff);
    ARRAY2.push_back((ARRAY[5] >> 8) & 0xff);
    ARRAY2.push_back(ARRAY[5] & 0xff);


    uint8_t data[] = {SLAVE_STATION_ADD, FUNCTION_MULTI_REGISTER, Register_Number_H, Register_Number_L, Register_amount_H, Register_amount_L, BYTE_LEN, ARRAY2[0], ARRAY2[1], ARRAY2[2], ARRAY2[3], ARRAY2[4], ARRAY2[5], ARRAY2[6], ARRAY2[7], ARRAY2[8], ARRAY2[9], ARRAY2[10], ARRAY2[11]};
    int ret = m_JAKAZuRobot.send_tio_rs_command(1, data, sizeof(data));
}