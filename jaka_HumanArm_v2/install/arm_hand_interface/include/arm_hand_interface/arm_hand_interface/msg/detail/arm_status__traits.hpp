// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
#define ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_hand_interface/msg/detail/arm_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'arm_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace arm_hand_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_no
  {
    out << "arm_no: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_no, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: arm_pose
  {
    out << "arm_pose: ";
    to_flow_style_yaml(msg.arm_pose, out);
    out << ", ";
  }

  // member: arm_joint_angles
  {
    if (msg.arm_joint_angles.size() == 0) {
      out << "arm_joint_angles: []";
    } else {
      out << "arm_joint_angles: [";
      size_t pending_items = msg.arm_joint_angles.size();
      for (auto item : msg.arm_joint_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arm_motion_status
  {
    out << "arm_motion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_motion_status, out);
    out << ", ";
  }

  // member: arm_collision_status
  {
    out << "arm_collision_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_collision_status, out);
    out << ", ";
  }

  // member: hand_angles
  {
    if (msg.hand_angles.size() == 0) {
      out << "hand_angles: []";
    } else {
      out << "hand_angles: [";
      size_t pending_items = msg.hand_angles.size();
      for (auto item : msg.hand_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hand_forces
  {
    if (msg.hand_forces.size() == 0) {
      out << "hand_forces: []";
    } else {
      out << "hand_forces: [";
      size_t pending_items = msg.hand_forces.size();
      for (auto item : msg.hand_forces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_no: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_no, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }

  // member: arm_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_pose:\n";
    to_block_style_yaml(msg.arm_pose, out, indentation + 2);
  }

  // member: arm_joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arm_joint_angles.size() == 0) {
      out << "arm_joint_angles: []\n";
    } else {
      out << "arm_joint_angles:\n";
      for (auto item : msg.arm_joint_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arm_motion_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_motion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_motion_status, out);
    out << "\n";
  }

  // member: arm_collision_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_collision_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_collision_status, out);
    out << "\n";
  }

  // member: hand_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_angles.size() == 0) {
      out << "hand_angles: []\n";
    } else {
      out << "hand_angles:\n";
      for (auto item : msg.hand_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hand_forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_forces.size() == 0) {
      out << "hand_forces: []\n";
    } else {
      out << "hand_forces:\n";
      for (auto item : msg.hand_forces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::msg::ArmStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::msg::ArmStatus & msg)
{
  return arm_hand_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::msg::ArmStatus>()
{
  return "arm_hand_interface::msg::ArmStatus";
}

template<>
inline const char * name<arm_hand_interface::msg::ArmStatus>()
{
  return "arm_hand_interface/msg/ArmStatus";
}

template<>
struct has_fixed_size<arm_hand_interface::msg::ArmStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::msg::ArmStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<arm_hand_interface::msg::ArmStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARM_HAND_INTERFACE__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
