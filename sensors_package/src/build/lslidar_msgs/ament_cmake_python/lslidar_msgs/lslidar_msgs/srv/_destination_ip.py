# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lslidar_msgs:srv/DestinationIp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DestinationIp_Request(type):
    """Metaclass of message 'DestinationIp_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lslidar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lslidar_msgs.srv.DestinationIp_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__destination_ip__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__destination_ip__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__destination_ip__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__destination_ip__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__destination_ip__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DestinationIp_Request(metaclass=Metaclass_DestinationIp_Request):
    """Message class 'DestinationIp_Request'."""

    __slots__ = [
        '_destination_ip',
    ]

    _fields_and_field_types = {
        'destination_ip': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.destination_ip = kwargs.get('destination_ip', str())

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
        if self.destination_ip != other.destination_ip:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def destination_ip(self):
        """Message field 'destination_ip'."""
        return self._destination_ip

    @destination_ip.setter
    def destination_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'destination_ip' field must be of type 'str'"
        self._destination_ip = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DestinationIp_Response(type):
    """Metaclass of message 'DestinationIp_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lslidar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lslidar_msgs.srv.DestinationIp_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__destination_ip__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__destination_ip__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__destination_ip__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__destination_ip__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__destination_ip__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DestinationIp_Response(metaclass=Metaclass_DestinationIp_Response):
    """Message class 'DestinationIp_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_DestinationIp(type):
    """Metaclass of service 'DestinationIp'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lslidar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lslidar_msgs.srv.DestinationIp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__destination_ip

            from lslidar_msgs.srv import _destination_ip
            if _destination_ip.Metaclass_DestinationIp_Request._TYPE_SUPPORT is None:
                _destination_ip.Metaclass_DestinationIp_Request.__import_type_support__()
            if _destination_ip.Metaclass_DestinationIp_Response._TYPE_SUPPORT is None:
                _destination_ip.Metaclass_DestinationIp_Response.__import_type_support__()


class DestinationIp(metaclass=Metaclass_DestinationIp):
    from lslidar_msgs.srv._destination_ip import DestinationIp_Request as Request
    from lslidar_msgs.srv._destination_ip import DestinationIp_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
