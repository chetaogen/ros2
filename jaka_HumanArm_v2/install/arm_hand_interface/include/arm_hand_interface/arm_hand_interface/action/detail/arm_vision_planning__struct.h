// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_hand_interface:action/ArmVisionPlanning.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__STRUCT_H_
#define ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arm_target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_Goal
{
  /// arm_no=1,表示左臂；arm_no=2,表示右臂
  int32_t arm_no;
  /// int32  command_no                            #当前指令的编号，从1开始。代表第几条指令
  /// 机械臂末端目标位姿
  geometry_msgs__msg__Pose arm_target_pose;
} arm_hand_interface__action__ArmVisionPlanning_Goal;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_Goal.
typedef struct arm_hand_interface__action__ArmVisionPlanning_Goal__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'arm_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_Result
{
  /// arm_no=1,表示左臂；arm_no=2,表示右臂
  int32_t arm_no;
  /// int32   command_no                     #当前指令的编号，从1开始
  /// 从开始运动到结束的时间, 单位:s
  float time_from_start;
  /// 机械臂末端实际位姿
  geometry_msgs__msg__Pose arm_pose;
  bool success;
  /// error_info if success is false, else is empty
  rosidl_runtime_c__String info;
} arm_hand_interface__action__ArmVisionPlanning_Result;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_Result.
typedef struct arm_hand_interface__action__ArmVisionPlanning_Result__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'arm_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_Feedback
{
  /// arm_no=1,表示左臂；arm_no=2,表示右臂
  int32_t arm_no;
  /// int32    command_no                    #当前指令的编号，从1开始。代表第几条指令
  ///  机械臂轨迹规划结果, false:规划失败； true:规划成功
  bool plan_success;
  /// 从开始运动到当前的时间, 单位:s.只有在plan_success = true时才有意义
  float time_from_start;
  /// geometry_msgs::msg::Pose   arm_pose    # 执行过程中机械臂末端实际位姿。只有在plan_success = true时才有意义
  geometry_msgs__msg__Pose arm_pose;
  /// 机械臂6个关节实际角度
  float arm_joint_angles[6];
} arm_hand_interface__action__ArmVisionPlanning_Feedback;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_Feedback.
typedef struct arm_hand_interface__action__ArmVisionPlanning_Feedback__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arm_hand_interface/action/detail/arm_vision_planning__struct.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arm_hand_interface__action__ArmVisionPlanning_Goal goal;
} arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request.
typedef struct arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response.
typedef struct arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arm_hand_interface__action__ArmVisionPlanning_GetResult_Request;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_GetResult_Request.
typedef struct arm_hand_interface__action__ArmVisionPlanning_GetResult_Request__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arm_hand_interface/action/detail/arm_vision_planning__struct.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_GetResult_Response
{
  int8_t status;
  arm_hand_interface__action__ArmVisionPlanning_Result result;
} arm_hand_interface__action__ArmVisionPlanning_GetResult_Response;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_GetResult_Response.
typedef struct arm_hand_interface__action__ArmVisionPlanning_GetResult_Response__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arm_hand_interface/action/detail/arm_vision_planning__struct.h"

/// Struct defined in action/ArmVisionPlanning in the package arm_hand_interface.
typedef struct arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arm_hand_interface__action__ArmVisionPlanning_Feedback feedback;
} arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage;

// Struct for a sequence of arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage.
typedef struct arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage__Sequence
{
  arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__ArmVisionPlanning_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__STRUCT_H_
