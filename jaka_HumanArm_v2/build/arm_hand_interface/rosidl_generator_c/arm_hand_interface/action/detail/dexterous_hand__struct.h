// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_hand_interface:action/DexterousHand.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__STRUCT_H_
#define ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_Goal
{
  /// hand_no=1, 表示左手；hand_no=2, 表示右手
  int32_t hand_no;
  /// hand[0]: 取还是放的动作，0： 拾取，1：放。              hand[1]:动作序列编号
  int32_t hand[2];
} arm_hand_interface__action__DexterousHand_Goal;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_Goal.
typedef struct arm_hand_interface__action__DexterousHand_Goal__Sequence
{
  arm_hand_interface__action__DexterousHand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_Result
{
  /// hand_no=1, 表示左手；hand_no=2, 表示右手
  int32_t hand_no;
  /// int32      command_no                        # 当前指令的编号，从1开始。代表第几条指令
  /// 手的6自由度关节实际角度
  float hand_pose[6];
  bool success;
  /// error_info if success is false else is empty
  rosidl_runtime_c__String info;
} arm_hand_interface__action__DexterousHand_Result;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_Result.
typedef struct arm_hand_interface__action__DexterousHand_Result__Sequence
{
  arm_hand_interface__action__DexterousHand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_Feedback
{
  /// hand_no=1, 表示左手；hand_no=2, 表示右手
  int32_t hand_no;
  /// int32      command_no                        # 当前指令的编号，从1开始。代表第几条指令
  ///  手的6自由度关节实际角度
  float hand_pose[6];
} arm_hand_interface__action__DexterousHand_Feedback;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_Feedback.
typedef struct arm_hand_interface__action__DexterousHand_Feedback__Sequence
{
  arm_hand_interface__action__DexterousHand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arm_hand_interface/action/detail/dexterous_hand__struct.h"

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arm_hand_interface__action__DexterousHand_Goal goal;
} arm_hand_interface__action__DexterousHand_SendGoal_Request;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_SendGoal_Request.
typedef struct arm_hand_interface__action__DexterousHand_SendGoal_Request__Sequence
{
  arm_hand_interface__action__DexterousHand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arm_hand_interface__action__DexterousHand_SendGoal_Response;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_SendGoal_Response.
typedef struct arm_hand_interface__action__DexterousHand_SendGoal_Response__Sequence
{
  arm_hand_interface__action__DexterousHand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arm_hand_interface__action__DexterousHand_GetResult_Request;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_GetResult_Request.
typedef struct arm_hand_interface__action__DexterousHand_GetResult_Request__Sequence
{
  arm_hand_interface__action__DexterousHand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arm_hand_interface/action/detail/dexterous_hand__struct.h"

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_GetResult_Response
{
  int8_t status;
  arm_hand_interface__action__DexterousHand_Result result;
} arm_hand_interface__action__DexterousHand_GetResult_Response;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_GetResult_Response.
typedef struct arm_hand_interface__action__DexterousHand_GetResult_Response__Sequence
{
  arm_hand_interface__action__DexterousHand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arm_hand_interface/action/detail/dexterous_hand__struct.h"

/// Struct defined in action/DexterousHand in the package arm_hand_interface.
typedef struct arm_hand_interface__action__DexterousHand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arm_hand_interface__action__DexterousHand_Feedback feedback;
} arm_hand_interface__action__DexterousHand_FeedbackMessage;

// Struct for a sequence of arm_hand_interface__action__DexterousHand_FeedbackMessage.
typedef struct arm_hand_interface__action__DexterousHand_FeedbackMessage__Sequence
{
  arm_hand_interface__action__DexterousHand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_hand_interface__action__DexterousHand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__STRUCT_H_
