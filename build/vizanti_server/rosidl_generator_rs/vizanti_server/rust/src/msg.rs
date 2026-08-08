#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to vizanti_server__msg__PatrolOutput

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PatrolOutput::default())
  }
}

impl rosidl_runtime_rs::Message for PatrolOutput {
  type RmwMsg = super::msg::rmw::PatrolOutput;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        patrol_status: msg.patrol_status,
        route_id: msg.route_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      patrol_status: msg.patrol_status,
      route_id: msg.route_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      patrol_status: msg.patrol_status,
      route_id: msg.route_id,
    }
  }
}


