// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_hand_interface:action/ArmVisionPlanning.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__TRAITS_HPP_
#define ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_hand_interface/action/detail/arm_vision_planning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'arm_target_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_no
  {
    out << "arm_no: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_no, out);
    out << ", ";
  }

  // member: arm_target_pose
  {
    out << "arm_target_pose: ";
    to_flow_style_yaml(msg.arm_target_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_Goal & msg,
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

  // member: arm_target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_target_pose:\n";
    to_block_style_yaml(msg.arm_target_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_Goal & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_Goal>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_Goal";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_Goal>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_Goal";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'arm_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_no
  {
    out << "arm_no: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_no, out);
    out << ", ";
  }

  // member: time_from_start
  {
    out << "time_from_start: ";
    rosidl_generator_traits::value_to_yaml(msg.time_from_start, out);
    out << ", ";
  }

  // member: arm_pose
  {
    out << "arm_pose: ";
    to_flow_style_yaml(msg.arm_pose, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_Result & msg,
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

  // member: time_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_from_start: ";
    rosidl_generator_traits::value_to_yaml(msg.time_from_start, out);
    out << "\n";
  }

  // member: arm_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_pose:\n";
    to_block_style_yaml(msg.arm_pose, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_Result & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_Result>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_Result";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_Result>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_Result";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'arm_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_no
  {
    out << "arm_no: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_no, out);
    out << ", ";
  }

  // member: plan_success
  {
    out << "plan_success: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_success, out);
    out << ", ";
  }

  // member: time_from_start
  {
    out << "time_from_start: ";
    rosidl_generator_traits::value_to_yaml(msg.time_from_start, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_Feedback & msg,
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

  // member: plan_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_success: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_success, out);
    out << "\n";
  }

  // member: time_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_from_start: ";
    rosidl_generator_traits::value_to_yaml(msg.time_from_start, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_Feedback & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_Feedback>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_Feedback";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_Feedback>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_Feedback";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "arm_hand_interface/action/detail/arm_vision_planning__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_SendGoal_Request";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_SendGoal_Response";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_SendGoal>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_SendGoal";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_SendGoal>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_SendGoal";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>::value &&
    has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>::value &&
    has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<arm_hand_interface::action::ArmVisionPlanning_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_hand_interface::action::ArmVisionPlanning_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_GetResult_Request & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_GetResult_Request";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_GetResult_Request";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "arm_hand_interface/action/detail/arm_vision_planning__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_GetResult_Response & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_GetResult_Response";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_GetResult_Response";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_Result>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_Result>::value> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_GetResult>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_GetResult";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_GetResult>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_GetResult";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>::value &&
    has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>::value &&
    has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>::value
  >
{
};

template<>
struct is_service<arm_hand_interface::action::ArmVisionPlanning_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<arm_hand_interface::action::ArmVisionPlanning_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_hand_interface::action::ArmVisionPlanning_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "arm_hand_interface/action/detail/arm_vision_planning__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ArmVisionPlanning_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmVisionPlanning_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmVisionPlanning_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_hand_interface

namespace rosidl_generator_traits
{

[[deprecated("use arm_hand_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage>()
{
  return "arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage";
}

template<>
inline const char * name<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage>()
{
  return "arm_hand_interface/action/ArmVisionPlanning_FeedbackMessage";
}

template<>
struct has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<arm_hand_interface::action::ArmVisionPlanning_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<arm_hand_interface::action::ArmVisionPlanning_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_hand_interface::action::ArmVisionPlanning_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<arm_hand_interface::action::ArmVisionPlanning>
  : std::true_type
{
};

template<>
struct is_action_goal<arm_hand_interface::action::ArmVisionPlanning_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<arm_hand_interface::action::ArmVisionPlanning_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<arm_hand_interface::action::ArmVisionPlanning_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ARM_HAND_INTERFACE__ACTION__DETAIL__ARM_VISION_PLANNING__TRAITS_HPP_
