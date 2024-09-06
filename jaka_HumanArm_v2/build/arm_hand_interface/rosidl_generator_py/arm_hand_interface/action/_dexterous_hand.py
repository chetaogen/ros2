# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arm_hand_interface:action/DexterousHand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'hand'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DexterousHand_Goal(type):
    """Metaclass of message 'DexterousHand_Goal'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_Goal(metaclass=Metaclass_DexterousHand_Goal):
    """Message class 'DexterousHand_Goal'."""

    __slots__ = [
        '_hand_no',
        '_hand',
    ]

    _fields_and_field_types = {
        'hand_no': 'int32',
        'hand': 'int32[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hand_no = kwargs.get('hand_no', int())
        if 'hand' not in kwargs:
            self.hand = numpy.zeros(2, dtype=numpy.int32)
        else:
            self.hand = numpy.array(kwargs.get('hand'), dtype=numpy.int32)
            assert self.hand.shape == (2, )

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
        if self.hand_no != other.hand_no:
            return False
        if all(self.hand != other.hand):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hand_no(self):
        """Message field 'hand_no'."""
        return self._hand_no

    @hand_no.setter
    def hand_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hand_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hand_no' field must be an integer in [-2147483648, 2147483647]"
        self._hand_no = value

    @builtins.property
    def hand(self):
        """Message field 'hand'."""
        return self._hand

    @hand.setter
    def hand(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'hand' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'hand' numpy.ndarray() must have a size of 2"
            self._hand = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'hand' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._hand = numpy.array(value, dtype=numpy.int32)


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# Member 'hand_pose'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_DexterousHand_Result(type):
    """Metaclass of message 'DexterousHand_Result'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_Result(metaclass=Metaclass_DexterousHand_Result):
    """Message class 'DexterousHand_Result'."""

    __slots__ = [
        '_hand_no',
        '_hand_pose',
        '_success',
        '_info',
    ]

    _fields_and_field_types = {
        'hand_no': 'int32',
        'hand_pose': 'float[6]',
        'success': 'boolean',
        'info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hand_no = kwargs.get('hand_no', int())
        if 'hand_pose' not in kwargs:
            self.hand_pose = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.hand_pose = numpy.array(kwargs.get('hand_pose'), dtype=numpy.float32)
            assert self.hand_pose.shape == (6, )
        self.success = kwargs.get('success', bool())
        self.info = kwargs.get('info', str())

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
        if self.hand_no != other.hand_no:
            return False
        if all(self.hand_pose != other.hand_pose):
            return False
        if self.success != other.success:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hand_no(self):
        """Message field 'hand_no'."""
        return self._hand_no

    @hand_no.setter
    def hand_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hand_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hand_no' field must be an integer in [-2147483648, 2147483647]"
        self._hand_no = value

    @builtins.property
    def hand_pose(self):
        """Message field 'hand_pose'."""
        return self._hand_pose

    @hand_pose.setter
    def hand_pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'hand_pose' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'hand_pose' numpy.ndarray() must have a size of 6"
            self._hand_pose = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'hand_pose' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._hand_pose = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# Member 'hand_pose'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_DexterousHand_Feedback(type):
    """Metaclass of message 'DexterousHand_Feedback'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_Feedback(metaclass=Metaclass_DexterousHand_Feedback):
    """Message class 'DexterousHand_Feedback'."""

    __slots__ = [
        '_hand_no',
        '_hand_pose',
    ]

    _fields_and_field_types = {
        'hand_no': 'int32',
        'hand_pose': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hand_no = kwargs.get('hand_no', int())
        if 'hand_pose' not in kwargs:
            self.hand_pose = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.hand_pose = numpy.array(kwargs.get('hand_pose'), dtype=numpy.float32)
            assert self.hand_pose.shape == (6, )

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
        if self.hand_no != other.hand_no:
            return False
        if all(self.hand_pose != other.hand_pose):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hand_no(self):
        """Message field 'hand_no'."""
        return self._hand_no

    @hand_no.setter
    def hand_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hand_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hand_no' field must be an integer in [-2147483648, 2147483647]"
        self._hand_no = value

    @builtins.property
    def hand_pose(self):
        """Message field 'hand_pose'."""
        return self._hand_pose

    @hand_pose.setter
    def hand_pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'hand_pose' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'hand_pose' numpy.ndarray() must have a size of 6"
            self._hand_pose = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'hand_pose' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._hand_pose = numpy.array(value, dtype=numpy.float32)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DexterousHand_SendGoal_Request(type):
    """Metaclass of message 'DexterousHand_SendGoal_Request'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__send_goal__request

            from arm_hand_interface.action import DexterousHand
            if DexterousHand.Goal.__class__._TYPE_SUPPORT is None:
                DexterousHand.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_SendGoal_Request(metaclass=Metaclass_DexterousHand_SendGoal_Request):
    """Message class 'DexterousHand_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'arm_hand_interface/DexterousHand_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_hand_interface', 'action'], 'DexterousHand_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from arm_hand_interface.action._dexterous_hand import DexterousHand_Goal
        self.goal = kwargs.get('goal', DexterousHand_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from arm_hand_interface.action._dexterous_hand import DexterousHand_Goal
            assert \
                isinstance(value, DexterousHand_Goal), \
                "The 'goal' field must be a sub message of type 'DexterousHand_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DexterousHand_SendGoal_Response(type):
    """Metaclass of message 'DexterousHand_SendGoal_Response'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_SendGoal_Response(metaclass=Metaclass_DexterousHand_SendGoal_Response):
    """Message class 'DexterousHand_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_DexterousHand_SendGoal(type):
    """Metaclass of service 'DexterousHand_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__dexterous_hand__send_goal

            from arm_hand_interface.action import _dexterous_hand
            if _dexterous_hand.Metaclass_DexterousHand_SendGoal_Request._TYPE_SUPPORT is None:
                _dexterous_hand.Metaclass_DexterousHand_SendGoal_Request.__import_type_support__()
            if _dexterous_hand.Metaclass_DexterousHand_SendGoal_Response._TYPE_SUPPORT is None:
                _dexterous_hand.Metaclass_DexterousHand_SendGoal_Response.__import_type_support__()


class DexterousHand_SendGoal(metaclass=Metaclass_DexterousHand_SendGoal):
    from arm_hand_interface.action._dexterous_hand import DexterousHand_SendGoal_Request as Request
    from arm_hand_interface.action._dexterous_hand import DexterousHand_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DexterousHand_GetResult_Request(type):
    """Metaclass of message 'DexterousHand_GetResult_Request'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_GetResult_Request(metaclass=Metaclass_DexterousHand_GetResult_Request):
    """Message class 'DexterousHand_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DexterousHand_GetResult_Response(type):
    """Metaclass of message 'DexterousHand_GetResult_Response'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__get_result__response

            from arm_hand_interface.action import DexterousHand
            if DexterousHand.Result.__class__._TYPE_SUPPORT is None:
                DexterousHand.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_GetResult_Response(metaclass=Metaclass_DexterousHand_GetResult_Response):
    """Message class 'DexterousHand_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'arm_hand_interface/DexterousHand_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_hand_interface', 'action'], 'DexterousHand_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from arm_hand_interface.action._dexterous_hand import DexterousHand_Result
        self.result = kwargs.get('result', DexterousHand_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from arm_hand_interface.action._dexterous_hand import DexterousHand_Result
            assert \
                isinstance(value, DexterousHand_Result), \
                "The 'result' field must be a sub message of type 'DexterousHand_Result'"
        self._result = value


class Metaclass_DexterousHand_GetResult(type):
    """Metaclass of service 'DexterousHand_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__dexterous_hand__get_result

            from arm_hand_interface.action import _dexterous_hand
            if _dexterous_hand.Metaclass_DexterousHand_GetResult_Request._TYPE_SUPPORT is None:
                _dexterous_hand.Metaclass_DexterousHand_GetResult_Request.__import_type_support__()
            if _dexterous_hand.Metaclass_DexterousHand_GetResult_Response._TYPE_SUPPORT is None:
                _dexterous_hand.Metaclass_DexterousHand_GetResult_Response.__import_type_support__()


class DexterousHand_GetResult(metaclass=Metaclass_DexterousHand_GetResult):
    from arm_hand_interface.action._dexterous_hand import DexterousHand_GetResult_Request as Request
    from arm_hand_interface.action._dexterous_hand import DexterousHand_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DexterousHand_FeedbackMessage(type):
    """Metaclass of message 'DexterousHand_FeedbackMessage'."""

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
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dexterous_hand__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dexterous_hand__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dexterous_hand__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__dexterous_hand__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dexterous_hand__feedback_message

            from arm_hand_interface.action import DexterousHand
            if DexterousHand.Feedback.__class__._TYPE_SUPPORT is None:
                DexterousHand.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DexterousHand_FeedbackMessage(metaclass=Metaclass_DexterousHand_FeedbackMessage):
    """Message class 'DexterousHand_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'arm_hand_interface/DexterousHand_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_hand_interface', 'action'], 'DexterousHand_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from arm_hand_interface.action._dexterous_hand import DexterousHand_Feedback
        self.feedback = kwargs.get('feedback', DexterousHand_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from arm_hand_interface.action._dexterous_hand import DexterousHand_Feedback
            assert \
                isinstance(value, DexterousHand_Feedback), \
                "The 'feedback' field must be a sub message of type 'DexterousHand_Feedback'"
        self._feedback = value


class Metaclass_DexterousHand(type):
    """Metaclass of action 'DexterousHand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_hand_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_hand_interface.action.DexterousHand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__dexterous_hand

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from arm_hand_interface.action import _dexterous_hand
            if _dexterous_hand.Metaclass_DexterousHand_SendGoal._TYPE_SUPPORT is None:
                _dexterous_hand.Metaclass_DexterousHand_SendGoal.__import_type_support__()
            if _dexterous_hand.Metaclass_DexterousHand_GetResult._TYPE_SUPPORT is None:
                _dexterous_hand.Metaclass_DexterousHand_GetResult.__import_type_support__()
            if _dexterous_hand.Metaclass_DexterousHand_FeedbackMessage._TYPE_SUPPORT is None:
                _dexterous_hand.Metaclass_DexterousHand_FeedbackMessage.__import_type_support__()


class DexterousHand(metaclass=Metaclass_DexterousHand):

    # The goal message defined in the action definition.
    from arm_hand_interface.action._dexterous_hand import DexterousHand_Goal as Goal
    # The result message defined in the action definition.
    from arm_hand_interface.action._dexterous_hand import DexterousHand_Result as Result
    # The feedback message defined in the action definition.
    from arm_hand_interface.action._dexterous_hand import DexterousHand_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from arm_hand_interface.action._dexterous_hand import DexterousHand_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from arm_hand_interface.action._dexterous_hand import DexterousHand_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from arm_hand_interface.action._dexterous_hand import DexterousHand_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
