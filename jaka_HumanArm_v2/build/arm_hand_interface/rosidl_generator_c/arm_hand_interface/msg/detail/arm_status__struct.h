// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__STRUCT_H_
#define ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'arm_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ArmStatus in the package arm_hand_interface.
/**
  * 此topic是机械臂系统向外发送的机械臂-手状态信息，供所有外界设备获取
 */
typedef struct arm_hand_interface__msg__ArmStatus
{
  /// arm_no=1,表示左臂；arm_No=2,表示右臂
  int32_t arm_no;
  /// int32    status_no              # 当前topc消息的编号，从1开始。代表第几条消息
  ///  发布topic的当前时间
  builtin_interfaces__msg__Time time;
  /// 机械臂的实际末端位姿
  geometry_msgs__msg__Pose arm_pose;
  /// 机械臂6个关节实际角度
  float arm_joint_angles[6];
  /// 机械臂运动状态，false不运动，true正在运动
  int32_t arm_motion_status;
  /// 机械臂是否处于碰撞状态,true处于碰撞状态,false 处于正常状态
  bool arm_collision_status;
  /// 手的6个关节角度
  float hand_angles[6];
  /// 手的各个手指受力
  float hand_forces[6];
} arm_hand_interface__msg__ArmStatus;

// Struct for a sequence of arm_hand_interface__msg__ArmStatus.
typedef struct arm_hand_interface__msg__ArmStatus__Sequence
{
  arm_hand_interface__msg__ArmStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__msg__ArmStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__STRUCT_H_
