// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vizanti_server:msg/PatrolOutput.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__STRUCT_HPP_
#define VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vizanti_server__msg__PatrolOutput __attribute__((deprecated))
#else
# define DEPRECATED__vizanti_server__msg__PatrolOutput __declspec(deprecated)
#endif

namespace vizanti_server
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PatrolOutput_
{
  using Type = PatrolOutput_<ContainerAllocator>;

  explicit PatrolOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->patrol_status = 0;
      this->route_id = 0ul;
    }
  }

  explicit PatrolOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->patrol_status = 0;
      this->route_id = 0ul;
    }
  }

  // field types and members
  using _patrol_status_type =
    uint8_t;
  _patrol_status_type patrol_status;
  using _route_id_type =
    uint32_t;
  _route_id_type route_id;

  // setters for named parameter idiom
  Type & set__patrol_status(
    const uint8_t & _arg)
  {
    this->patrol_status = _arg;
    return *this;
  }
  Type & set__route_id(
    const uint32_t & _arg)
  {
    this->route_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PATROL_STATUS_UN_INITIAL =
    0u;
  static constexpr uint8_t PATROL_STATUS_READY =
    1u;
  static constexpr uint8_t PATROL_STATUS_SETTING_ROUTE =
    2u;
  static constexpr uint8_t PATROL_STATUS_PATROLLING =
    3u;

  // pointer types
  using RawPtr =
    vizanti_server::msg::PatrolOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const vizanti_server::msg::PatrolOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vizanti_server::msg::PatrolOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vizanti_server::msg::PatrolOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vizanti_server__msg__PatrolOutput
    std::shared_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vizanti_server__msg__PatrolOutput
    std::shared_ptr<vizanti_server::msg::PatrolOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrolOutput_ & other) const
  {
    if (this->patrol_status != other.patrol_status) {
      return false;
    }
    if (this->route_id != other.route_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrolOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrolOutput_

// alias to use template instance with default allocator
using PatrolOutput =
  vizanti_server::msg::PatrolOutput_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PatrolOutput_<ContainerAllocator>::PATROL_STATUS_UN_INITIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PatrolOutput_<ContainerAllocator>::PATROL_STATUS_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PatrolOutput_<ContainerAllocator>::PATROL_STATUS_SETTING_ROUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PatrolOutput_<ContainerAllocator>::PATROL_STATUS_PATROLLING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace vizanti_server

#endif  // VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__STRUCT_HPP_
