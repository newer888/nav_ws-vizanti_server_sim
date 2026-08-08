// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vizanti_server:msg/PatrolOutput.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__TRAITS_HPP_
#define VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vizanti_server/msg/detail/patrol_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vizanti_server
{

namespace msg
{

inline void to_flow_style_yaml(
  const PatrolOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: patrol_status
  {
    out << "patrol_status: ";
    rosidl_generator_traits::value_to_yaml(msg.patrol_status, out);
    out << ", ";
  }

  // member: route_id
  {
    out << "route_id: ";
    rosidl_generator_traits::value_to_yaml(msg.route_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PatrolOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: patrol_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "patrol_status: ";
    rosidl_generator_traits::value_to_yaml(msg.patrol_status, out);
    out << "\n";
  }

  // member: route_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_id: ";
    rosidl_generator_traits::value_to_yaml(msg.route_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PatrolOutput & msg, bool use_flow_style = false)
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

}  // namespace vizanti_server

namespace rosidl_generator_traits
{

[[deprecated("use vizanti_server::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vizanti_server::msg::PatrolOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  vizanti_server::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vizanti_server::msg::to_yaml() instead")]]
inline std::string to_yaml(const vizanti_server::msg::PatrolOutput & msg)
{
  return vizanti_server::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vizanti_server::msg::PatrolOutput>()
{
  return "vizanti_server::msg::PatrolOutput";
}

template<>
inline const char * name<vizanti_server::msg::PatrolOutput>()
{
  return "vizanti_server/msg/PatrolOutput";
}

template<>
struct has_fixed_size<vizanti_server::msg::PatrolOutput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vizanti_server::msg::PatrolOutput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vizanti_server::msg::PatrolOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__TRAITS_HPP_
