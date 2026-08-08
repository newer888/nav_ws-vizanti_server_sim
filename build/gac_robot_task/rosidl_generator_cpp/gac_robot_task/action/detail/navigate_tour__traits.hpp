// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gac_robot_task:action/NavigateTour.idl
// generated code does not contain a copyright notice

#ifndef GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__TRAITS_HPP_
#define GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gac_robot_task/action/detail/navigate_tour__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateTour_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateTour_Goal & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_Goal & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_Goal>()
{
  return "gac_robot_task::action::NavigateTour_Goal";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_Goal>()
{
  return "gac_robot_task/action/NavigateTour_Goal";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: completed_waypoints
  {
    out << "completed_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateTour_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: completed_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completed_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_waypoints, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateTour_Result & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_Result & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_Result>()
{
  return "gac_robot_task::action::NavigateTour_Result";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_Result>()
{
  return "gac_robot_task/action/NavigateTour_Result";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_waypoint_index
  {
    out << "current_waypoint_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint_index, out);
    out << ", ";
  }

  // member: total_waypoints
  {
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << ", ";
  }

  // member: current_action
  {
    out << "current_action: ";
    rosidl_generator_traits::value_to_yaml(msg.current_action, out);
    out << ", ";
  }

  // member: progress_percentage
  {
    out << "progress_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateTour_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_waypoint_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_waypoint_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint_index, out);
    out << "\n";
  }

  // member: total_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << "\n";
  }

  // member: current_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_action: ";
    rosidl_generator_traits::value_to_yaml(msg.current_action, out);
    out << "\n";
  }

  // member: progress_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateTour_Feedback & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_Feedback & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_Feedback>()
{
  return "gac_robot_task::action::NavigateTour_Feedback";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_Feedback>()
{
  return "gac_robot_task/action/NavigateTour_Feedback";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "gac_robot_task/action/detail/navigate_tour__traits.hpp"

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_SendGoal_Request & msg,
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
  const NavigateTour_SendGoal_Request & msg,
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

inline std::string to_yaml(const NavigateTour_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_SendGoal_Request & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_SendGoal_Request>()
{
  return "gac_robot_task::action::NavigateTour_SendGoal_Request";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_SendGoal_Request>()
{
  return "gac_robot_task/action/NavigateTour_SendGoal_Request";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<gac_robot_task::action::NavigateTour_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<gac_robot_task::action::NavigateTour_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_SendGoal_Response & msg,
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
  const NavigateTour_SendGoal_Response & msg,
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

inline std::string to_yaml(const NavigateTour_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_SendGoal_Response & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_SendGoal_Response>()
{
  return "gac_robot_task::action::NavigateTour_SendGoal_Response";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_SendGoal_Response>()
{
  return "gac_robot_task/action/NavigateTour_SendGoal_Response";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_SendGoal>()
{
  return "gac_robot_task::action::NavigateTour_SendGoal";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_SendGoal>()
{
  return "gac_robot_task/action/NavigateTour_SendGoal";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<gac_robot_task::action::NavigateTour_SendGoal_Request>::value &&
    has_fixed_size<gac_robot_task::action::NavigateTour_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<gac_robot_task::action::NavigateTour_SendGoal_Request>::value &&
    has_bounded_size<gac_robot_task::action::NavigateTour_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<gac_robot_task::action::NavigateTour_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<gac_robot_task::action::NavigateTour_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gac_robot_task::action::NavigateTour_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_GetResult_Request & msg,
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
  const NavigateTour_GetResult_Request & msg,
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

inline std::string to_yaml(const NavigateTour_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_GetResult_Request & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_GetResult_Request>()
{
  return "gac_robot_task::action::NavigateTour_GetResult_Request";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_GetResult_Request>()
{
  return "gac_robot_task/action/NavigateTour_GetResult_Request";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "gac_robot_task/action/detail/navigate_tour__traits.hpp"

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_GetResult_Response & msg,
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
  const NavigateTour_GetResult_Response & msg,
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

inline std::string to_yaml(const NavigateTour_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_GetResult_Response & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_GetResult_Response>()
{
  return "gac_robot_task::action::NavigateTour_GetResult_Response";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_GetResult_Response>()
{
  return "gac_robot_task/action/NavigateTour_GetResult_Response";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<gac_robot_task::action::NavigateTour_Result>::value> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<gac_robot_task::action::NavigateTour_Result>::value> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_GetResult>()
{
  return "gac_robot_task::action::NavigateTour_GetResult";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_GetResult>()
{
  return "gac_robot_task/action/NavigateTour_GetResult";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<gac_robot_task::action::NavigateTour_GetResult_Request>::value &&
    has_fixed_size<gac_robot_task::action::NavigateTour_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<gac_robot_task::action::NavigateTour_GetResult_Request>::value &&
    has_bounded_size<gac_robot_task::action::NavigateTour_GetResult_Response>::value
  >
{
};

template<>
struct is_service<gac_robot_task::action::NavigateTour_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<gac_robot_task::action::NavigateTour_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gac_robot_task::action::NavigateTour_GetResult_Response>
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
// #include "gac_robot_task/action/detail/navigate_tour__traits.hpp"

namespace gac_robot_task
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateTour_FeedbackMessage & msg,
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
  const NavigateTour_FeedbackMessage & msg,
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

inline std::string to_yaml(const NavigateTour_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace gac_robot_task

namespace rosidl_generator_traits
{

[[deprecated("use gac_robot_task::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gac_robot_task::action::NavigateTour_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  gac_robot_task::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gac_robot_task::action::to_yaml() instead")]]
inline std::string to_yaml(const gac_robot_task::action::NavigateTour_FeedbackMessage & msg)
{
  return gac_robot_task::action::to_yaml(msg);
}

template<>
inline const char * data_type<gac_robot_task::action::NavigateTour_FeedbackMessage>()
{
  return "gac_robot_task::action::NavigateTour_FeedbackMessage";
}

template<>
inline const char * name<gac_robot_task::action::NavigateTour_FeedbackMessage>()
{
  return "gac_robot_task/action/NavigateTour_FeedbackMessage";
}

template<>
struct has_fixed_size<gac_robot_task::action::NavigateTour_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<gac_robot_task::action::NavigateTour_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<gac_robot_task::action::NavigateTour_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<gac_robot_task::action::NavigateTour_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<gac_robot_task::action::NavigateTour_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<gac_robot_task::action::NavigateTour>
  : std::true_type
{
};

template<>
struct is_action_goal<gac_robot_task::action::NavigateTour_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<gac_robot_task::action::NavigateTour_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<gac_robot_task::action::NavigateTour_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // GAC_ROBOT_TASK__ACTION__DETAIL__NAVIGATE_TOUR__TRAITS_HPP_
