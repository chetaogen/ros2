# 此topic是机械臂系统向外发送的机械臂-手状态信息，供所有外界设备获取
int32    arm_no                 # arm_no=1,表示左臂；arm_No=2,表示右臂
int32    status_no              # 当前topc消息的编号，从1开始。代表第几条消息
builtin_interfaces/Time     time                  # 发布topic的当前时间
geometry_msgs/Pose     arm_pose                 # 机械臂的实际末端位姿
float32[6]  arm_joint_angles    # 机械臂6个关节实际角度
bool     arm_motion_status        # 机械臂运动状态，false不运动，true正在运动
bool     arm_collision_status     # 机械臂是否处于碰撞状态,true处于碰撞状态,false 处于正常状态
float32[6]   hand_angles          # 手的6个关节角度
float32[6]   hand_forces          # 手的各个手指受力
