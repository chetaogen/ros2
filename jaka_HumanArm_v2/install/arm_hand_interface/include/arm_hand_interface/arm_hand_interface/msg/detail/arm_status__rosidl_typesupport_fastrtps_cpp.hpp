// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "arm_hand_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "arm_hand_interface/msg/detail/arm_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace arm_hand_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arm_hand_interface
cdr_serialize(
  const arm_hand_interface::msg::ArmStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arm_hand_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arm_hand_interface::msg::ArmStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arm_hand_interface
get_serialized_size(
  const arm_hand_interface::msg::ArmStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arm_hand_interface
max_serialized_size_ArmStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arm_hand_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arm_hand_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arm_hand_interface, msg, ArmStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
