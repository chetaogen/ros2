// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_hand_interface:action/DexterousHand.idl
// generated code does not contain a copyright notice

#ifndef ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__TRAITS_HPP_
#define ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_hand_interface/action/detail/dexterous_hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const DexterousHand_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand_no
  {
    out << "hand_no: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_no, out);
    out << ", ";
  }

  // member: hand
  {
    if (msg.hand.size() == 0) {
      out << "hand: []";
    } else {
      out << "hand: [";
      size_t pending_items = msg.hand.size();
      for (auto item : msg.hand) {
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
  const DexterousHand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_no: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_no, out);
    out << "\n";
  }

  // member: hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand.size() == 0) {
      out << "hand: []\n";
    } else {
      out << "hand:\n";
      for (auto item : msg.hand) {
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

inline std::string to_yaml(const DexterousHand_Goal & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_Goal & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_Goal>()
{
  return "arm_hand_interface::action::DexterousHand_Goal";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_Goal>()
{
  return "arm_hand_interface/action/DexterousHand_Goal";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const DexterousHand_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand_no
  {
    out << "hand_no: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_no, out);
    out << ", ";
  }

  // member: hand_pose
  {
    if (msg.hand_pose.size() == 0) {
      out << "hand_pose: []";
    } else {
      out << "hand_pose: [";
      size_t pending_items = msg.hand_pose.size();
      for (auto item : msg.hand_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const DexterousHand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_no: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_no, out);
    out << "\n";
  }

  // member: hand_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_pose.size() == 0) {
      out << "hand_pose: []\n";
    } else {
      out << "hand_pose:\n";
      for (auto item : msg.hand_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const DexterousHand_Result & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_Result & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_Result>()
{
  return "arm_hand_interface::action::DexterousHand_Result";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_Result>()
{
  return "arm_hand_interface/action/DexterousHand_Result";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const DexterousHand_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand_no
  {
    out << "hand_no: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_no, out);
    out << ", ";
  }

  // member: hand_pose
  {
    if (msg.hand_pose.size() == 0) {
      out << "hand_pose: []";
    } else {
      out << "hand_pose: [";
      size_t pending_items = msg.hand_pose.size();
      for (auto item : msg.hand_pose) {
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
  const DexterousHand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_no: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_no, out);
    out << "\n";
  }

  // member: hand_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_pose.size() == 0) {
      out << "hand_pose: []\n";
    } else {
      out << "hand_pose:\n";
      for (auto item : msg.hand_pose) {
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

inline std::string to_yaml(const DexterousHand_Feedback & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_Feedback & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_Feedback>()
{
  return "arm_hand_interface::action::DexterousHand_Feedback";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_Feedback>()
{
  return "arm_hand_interface/action/DexterousHand_Feedback";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "arm_hand_interface/action/detail/dexterous_hand__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const DexterousHand_SendGoal_Request & msg,
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
  const DexterousHand_SendGoal_Request & msg,
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

inline std::string to_yaml(const DexterousHand_SendGoal_Request & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_SendGoal_Request & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_SendGoal_Request>()
{
  return "arm_hand_interface::action::DexterousHand_SendGoal_Request";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_SendGoal_Request>()
{
  return "arm_hand_interface/action/DexterousHand_SendGoal_Request";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<arm_hand_interface::action::DexterousHand_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<arm_hand_interface::action::DexterousHand_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_SendGoal_Request>
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
  const DexterousHand_SendGoal_Response & msg,
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
  const DexterousHand_SendGoal_Response & msg,
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

inline std::string to_yaml(const DexterousHand_SendGoal_Response & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_SendGoal_Response & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_SendGoal_Response>()
{
  return "arm_hand_interface::action::DexterousHand_SendGoal_Response";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_SendGoal_Response>()
{
  return "arm_hand_interface/action/DexterousHand_SendGoal_Response";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_SendGoal>()
{
  return "arm_hand_interface::action::DexterousHand_SendGoal";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_SendGoal>()
{
  return "arm_hand_interface/action/DexterousHand_SendGoal";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_hand_interface::action::DexterousHand_SendGoal_Request>::value &&
    has_fixed_size<arm_hand_interface::action::DexterousHand_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_hand_interface::action::DexterousHand_SendGoal_Request>::value &&
    has_bounded_size<arm_hand_interface::action::DexterousHand_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<arm_hand_interface::action::DexterousHand_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<arm_hand_interface::action::DexterousHand_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_hand_interface::action::DexterousHand_SendGoal_Response>
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
  const DexterousHand_GetResult_Request & msg,
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
  const DexterousHand_GetResult_Request & msg,
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

inline std::string to_yaml(const DexterousHand_GetResult_Request & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_GetResult_Request & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_GetResult_Request>()
{
  return "arm_hand_interface::action::DexterousHand_GetResult_Request";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_GetResult_Request>()
{
  return "arm_hand_interface/action/DexterousHand_GetResult_Request";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "arm_hand_interface/action/detail/dexterous_hand__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const DexterousHand_GetResult_Response & msg,
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
  const DexterousHand_GetResult_Response & msg,
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

inline std::string to_yaml(const DexterousHand_GetResult_Response & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_GetResult_Response & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_GetResult_Response>()
{
  return "arm_hand_interface::action::DexterousHand_GetResult_Response";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_GetResult_Response>()
{
  return "arm_hand_interface/action/DexterousHand_GetResult_Response";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<arm_hand_interface::action::DexterousHand_Result>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<arm_hand_interface::action::DexterousHand_Result>::value> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_GetResult>()
{
  return "arm_hand_interface::action::DexterousHand_GetResult";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_GetResult>()
{
  return "arm_hand_interface/action/DexterousHand_GetResult";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_hand_interface::action::DexterousHand_GetResult_Request>::value &&
    has_fixed_size<arm_hand_interface::action::DexterousHand_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_hand_interface::action::DexterousHand_GetResult_Request>::value &&
    has_bounded_size<arm_hand_interface::action::DexterousHand_GetResult_Response>::value
  >
{
};

template<>
struct is_service<arm_hand_interface::action::DexterousHand_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<arm_hand_interface::action::DexterousHand_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_hand_interface::action::DexterousHand_GetResult_Response>
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
// #include "arm_hand_interface/action/detail/dexterous_hand__traits.hpp"

namespace arm_hand_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const DexterousHand_FeedbackMessage & msg,
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
  const DexterousHand_FeedbackMessage & msg,
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

inline std::string to_yaml(const DexterousHand_FeedbackMessage & msg, bool use_flow_style = false)
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
  const arm_hand_interface::action::DexterousHand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_hand_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_hand_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_hand_interface::action::DexterousHand_FeedbackMessage & msg)
{
  return arm_hand_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_hand_interface::action::DexterousHand_FeedbackMessage>()
{
  return "arm_hand_interface::action::DexterousHand_FeedbackMessage";
}

template<>
inline const char * name<arm_hand_interface::action::DexterousHand_FeedbackMessage>()
{
  return "arm_hand_interface/action/DexterousHand_FeedbackMessage";
}

template<>
struct has_fixed_size<arm_hand_interface::action::DexterousHand_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<arm_hand_interface::action::DexterousHand_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_hand_interface::action::DexterousHand_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<arm_hand_interface::action::DexterousHand_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_hand_interface::action::DexterousHand_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<arm_hand_interface::action::DexterousHand>
  : std::true_type
{
};

template<>
struct is_action_goal<arm_hand_interface::action::DexterousHand_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<arm_hand_interface::action::DexterousHand_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<arm_hand_interface::action::DexterousHand_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ARM_HAND_INTERFACE__ACTION__DETAIL__DEXTEROUS_HAND__TRAITS_HPP_
