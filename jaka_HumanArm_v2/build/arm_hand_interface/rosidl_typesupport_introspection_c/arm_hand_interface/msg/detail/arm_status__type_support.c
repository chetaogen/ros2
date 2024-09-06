// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arm_hand_interface/msg/detail/arm_status__rosidl_typesupport_introspection_c.h"
#include "arm_hand_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arm_hand_interface/msg/detail/arm_status__functions.h"
#include "arm_hand_interface/msg/detail/arm_status__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `arm_pose`
#include "geometry_msgs/msg/pose.h"
// Member `arm_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arm_hand_interface__msg__ArmStatus__init(message_memory);
}

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_fini_function(void * message_memory)
{
  arm_hand_interface__msg__ArmStatus__fini(message_memory);
}

size_t arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__arm_joint_angles(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__arm_joint_angles(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__arm_joint_angles(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__arm_joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__arm_joint_angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__arm_joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__arm_joint_angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__hand_angles(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__hand_angles(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__hand_angles(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__hand_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__hand_angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__hand_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__hand_angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__hand_forces(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__hand_forces(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__hand_forces(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__hand_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__hand_forces(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__hand_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__hand_forces(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_member_array[8] = {
  {
    "arm_no",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, arm_no),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, arm_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, arm_joint_angles),  // bytes offset in struct
    NULL,  // default value
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__arm_joint_angles,  // size() function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__arm_joint_angles,  // get_const(index) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__arm_joint_angles,  // get(index) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__arm_joint_angles,  // fetch(index, &value) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__arm_joint_angles,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_motion_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, arm_motion_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_collision_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, arm_collision_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, hand_angles),  // bytes offset in struct
    NULL,  // default value
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__hand_angles,  // size() function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__hand_angles,  // get_const(index) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__hand_angles,  // get(index) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__hand_angles,  // fetch(index, &value) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__hand_angles,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_forces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface__msg__ArmStatus, hand_forces),  // bytes offset in struct
    NULL,  // default value
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__size_function__ArmStatus__hand_forces,  // size() function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_const_function__ArmStatus__hand_forces,  // get_const(index) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__get_function__ArmStatus__hand_forces,  // get(index) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__fetch_function__ArmStatus__hand_forces,  // fetch(index, &value) function pointer
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__assign_function__ArmStatus__hand_forces,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_members = {
  "arm_hand_interface__msg",  // message namespace
  "ArmStatus",  // message name
  8,  // number of fields
  sizeof(arm_hand_interface__msg__ArmStatus),
  arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_member_array,  // message members
  arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle = {
  0,
  &arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_hand_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_hand_interface, msg, ArmStatus)() {
  arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle.typesupport_identifier) {
    arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_hand_interface__msg__ArmStatus__rosidl_typesupport_introspection_c__ArmStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
