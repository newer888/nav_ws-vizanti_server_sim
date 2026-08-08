// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_server:srv/SpeachText.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_SERVER__SRV__DETAIL__SPEACH_TEXT__BUILDER_HPP_
#define VIZANTI_SERVER__SRV__DETAIL__SPEACH_TEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_server/srv/detail/speach_text__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_server
{

namespace srv
{

namespace builder
{

class Init_SpeachText_Request_text
{
public:
  Init_SpeachText_Request_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_server::srv::SpeachText_Request text(::vizanti_server::srv::SpeachText_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_server::srv::SpeachText_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_server::srv::SpeachText_Request>()
{
  return vizanti_server::srv::builder::Init_SpeachText_Request_text();
}

}  // namespace vizanti_server


namespace vizanti_server
{

namespace srv
{

namespace builder
{

class Init_SpeachText_Response_result
{
public:
  Init_SpeachText_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_server::srv::SpeachText_Response result(::vizanti_server::srv::SpeachText_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_server::srv::SpeachText_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_server::srv::SpeachText_Response>()
{
  return vizanti_server::srv::builder::Init_SpeachText_Response_result();
}

}  // namespace vizanti_server

#endif  // VIZANTI_SERVER__SRV__DETAIL__SPEACH_TEXT__BUILDER_HPP_
