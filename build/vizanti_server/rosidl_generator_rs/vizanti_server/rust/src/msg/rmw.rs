#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "vizanti_server__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vizanti_server__msg__PatrolOutput() -> *const std::ffi::c_void;
}

#[link(name = "vizanti_server__rosidl_generator_c")]
extern "C" {
    fn vizanti_server__msg__PatrolOutput__init(msg: *mut PatrolOutput) -> bool;
    fn vizanti_server__msg__PatrolOutput__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PatrolOutput>, size: usize) -> bool;
    fn vizanti_server__msg__PatrolOutput__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PatrolOutput>);
    fn vizanti_server__msg__PatrolOutput__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PatrolOutput>, out_seq: *mut rosidl_runtime_rs::Sequence<PatrolOutput>) -> bool;
}

// Corresponds to vizanti_server__msg__PatrolOutput
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PatrolOutput {

    // This member is not documented.
    #[allow(missing_docs)]
    pub patrol_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub route_id: u32,

}

impl PatrolOutput {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATROL_STATUS_UN_INITIAL: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATROL_STATUS_READY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATROL_STATUS_SETTING_ROUTE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATROL_STATUS_PATROLLING: u8 = 3;

}


impl Default for PatrolOutput {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vizanti_server__msg__PatrolOutput__init(&mut msg as *mut _) {
        panic!("Call to vizanti_server__msg__PatrolOutput__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PatrolOutput {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_server__msg__PatrolOutput__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_server__msg__PatrolOutput__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vizanti_server__msg__PatrolOutput__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PatrolOutput {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PatrolOutput where Self: Sized {
  const TYPE_NAME: &'static str = "vizanti_server/msg/PatrolOutput";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vizanti_server__msg__PatrolOutput() }
  }
}


