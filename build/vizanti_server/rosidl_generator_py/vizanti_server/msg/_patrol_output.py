# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vizanti_server:msg/PatrolOutput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PatrolOutput(type):
    """Metaclass of message 'PatrolOutput'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PATROL_STATUS_UN_INITIAL': 0,
        'PATROL_STATUS_READY': 1,
        'PATROL_STATUS_SETTING_ROUTE': 2,
        'PATROL_STATUS_PATROLLING': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vizanti_server')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vizanti_server.msg.PatrolOutput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__patrol_output
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__patrol_output
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__patrol_output
            cls._TYPE_SUPPORT = module.type_support_msg__msg__patrol_output
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__patrol_output

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PATROL_STATUS_UN_INITIAL': cls.__constants['PATROL_STATUS_UN_INITIAL'],
            'PATROL_STATUS_READY': cls.__constants['PATROL_STATUS_READY'],
            'PATROL_STATUS_SETTING_ROUTE': cls.__constants['PATROL_STATUS_SETTING_ROUTE'],
            'PATROL_STATUS_PATROLLING': cls.__constants['PATROL_STATUS_PATROLLING'],
        }

    @property
    def PATROL_STATUS_UN_INITIAL(self):
        """Message constant 'PATROL_STATUS_UN_INITIAL'."""
        return Metaclass_PatrolOutput.__constants['PATROL_STATUS_UN_INITIAL']

    @property
    def PATROL_STATUS_READY(self):
        """Message constant 'PATROL_STATUS_READY'."""
        return Metaclass_PatrolOutput.__constants['PATROL_STATUS_READY']

    @property
    def PATROL_STATUS_SETTING_ROUTE(self):
        """Message constant 'PATROL_STATUS_SETTING_ROUTE'."""
        return Metaclass_PatrolOutput.__constants['PATROL_STATUS_SETTING_ROUTE']

    @property
    def PATROL_STATUS_PATROLLING(self):
        """Message constant 'PATROL_STATUS_PATROLLING'."""
        return Metaclass_PatrolOutput.__constants['PATROL_STATUS_PATROLLING']


class PatrolOutput(metaclass=Metaclass_PatrolOutput):
    """
    Message class 'PatrolOutput'.

    Constants:
      PATROL_STATUS_UN_INITIAL
      PATROL_STATUS_READY
      PATROL_STATUS_SETTING_ROUTE
      PATROL_STATUS_PATROLLING
    """

    __slots__ = [
        '_patrol_status',
        '_route_id',
    ]

    _fields_and_field_types = {
        'patrol_status': 'uint8',
        'route_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.patrol_status = kwargs.get('patrol_status', int())
        self.route_id = kwargs.get('route_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.patrol_status != other.patrol_status:
            return False
        if self.route_id != other.route_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def patrol_status(self):
        """Message field 'patrol_status'."""
        return self._patrol_status

    @patrol_status.setter
    def patrol_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'patrol_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'patrol_status' field must be an unsigned integer in [0, 255]"
        self._patrol_status = value

    @builtins.property
    def route_id(self):
        """Message field 'route_id'."""
        return self._route_id

    @route_id.setter
    def route_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'route_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'route_id' field must be an unsigned integer in [0, 4294967295]"
        self._route_id = value
