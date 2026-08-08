// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_server:msg/PatrolOutput.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__BUILDER_HPP_
#define VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_server/msg/detail/patrol_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_server
{

namespace msg
{

namespace builder
{

class Init_PatrolOutput_route_id
{
public:
  explicit Init_PatrolOutput_route_id(::vizanti_server::msg::PatrolOutput & msg)
  : msg_(msg)
  {}
  ::vizanti_server::msg::PatrolOutput route_id(::vizanti_server::msg::PatrolOutput::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_server::msg::PatrolOutput msg_;
};

class Init_PatrolOutput_patrol_status
{
public:
  Init_PatrolOutput_patrol_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolOutput_route_id patrol_status(::vizanti_server::msg::PatrolOutput::_patrol_status_type arg)
  {
    msg_.patrol_status = std::move(arg);
    return Init_PatrolOutput_route_id(msg_);
  }

private:
  ::vizanti_server::msg::PatrolOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_server::msg::PatrolOutput>()
{
  return vizanti_server::msg::builder::Init_PatrolOutput_patrol_status();
}

}  // namespace vizanti_server

#endif  // VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__BUILDER_HPP_
