// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "arm_hand_interface/msg/detail/arm_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arm_hand_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arm_hand_interface::msg::ArmStatus(_init);
}

void ArmStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arm_hand_interface::msg::ArmStatus *>(message_memory);
  typed_message->~ArmStatus();
}

size_t size_function__ArmStatus__arm_joint_angles(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmStatus__arm_joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmStatus__arm_joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmStatus__arm_joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ArmStatus__arm_joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ArmStatus__arm_joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ArmStatus__arm_joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__ArmStatus__hand_angles(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmStatus__hand_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmStatus__hand_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmStatus__hand_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ArmStatus__hand_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ArmStatus__hand_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ArmStatus__hand_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__ArmStatus__hand_forces(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmStatus__hand_forces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmStatus__hand_forces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmStatus__hand_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ArmStatus__hand_forces(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ArmStatus__hand_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ArmStatus__hand_forces(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmStatus_message_member_array[8] = {
  {
    "arm_no",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, arm_no),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, arm_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, arm_joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmStatus__arm_joint_angles,  // size() function pointer
    get_const_function__ArmStatus__arm_joint_angles,  // get_const(index) function pointer
    get_function__ArmStatus__arm_joint_angles,  // get(index) function pointer
    fetch_function__ArmStatus__arm_joint_angles,  // fetch(index, &value) function pointer
    assign_function__ArmStatus__arm_joint_angles,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_motion_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, arm_motion_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_collision_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, arm_collision_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hand_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, hand_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmStatus__hand_angles,  // size() function pointer
    get_const_function__ArmStatus__hand_angles,  // get_const(index) function pointer
    get_function__ArmStatus__hand_angles,  // get(index) function pointer
    fetch_function__ArmStatus__hand_angles,  // fetch(index, &value) function pointer
    assign_function__ArmStatus__hand_angles,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hand_forces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(arm_hand_interface::msg::ArmStatus, hand_forces),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmStatus__hand_forces,  // size() function pointer
    get_const_function__ArmStatus__hand_forces,  // get_const(index) function pointer
    get_function__ArmStatus__hand_forces,  // get(index) function pointer
    fetch_function__ArmStatus__hand_forces,  // fetch(index, &value) function pointer
    assign_function__ArmStatus__hand_forces,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmStatus_message_members = {
  "arm_hand_interface::msg",  // message namespace
  "ArmStatus",  // message name
  8,  // number of fields
  sizeof(arm_hand_interface::msg::ArmStatus),
  ArmStatus_message_member_array,  // message members
  ArmStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace arm_hand_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arm_hand_interface::msg::ArmStatus>()
{
  return &::arm_hand_interface::msg::rosidl_typesupport_introspection_cpp::ArmStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arm_hand_interface, msg, ArmStatus)() {
  return &::arm_hand_interface::msg::rosidl_typesupport_introspection_cpp::ArmStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
