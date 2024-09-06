# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arm_hand_interface:action/ArmVisionPlanning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmVisionPlanning_Goal(type):
    """Metaclass of message 'ArmVisionPlanning_Goal'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__goal

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmVisionPlanning_Goal(metaclass=Metaclass_ArmVisionPlanning_Goal):
    """Message class 'ArmVisionPlanning_Goal'."""

    __slots__ = [
        '_arm_no',
        '_arm_target_pose',
    ]

    _fields_and_field_types = {
        'arm_no': 'int32',
        'arm_target_pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm_no = kwargs.get('arm_no', int())
        from geometry_msgs.msg import Pose
        self.arm_target_pose = kwargs.get('arm_target_pose', Pose())

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
        if self.arm_no != other.arm_no:
            return False
        if self.arm_target_pose != other.arm_target_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def arm_no(self):
        """Message field 'arm_no'."""
        return self._arm_no

    @arm_no.setter
    def arm_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'arm_no' field must be an integer in [-2147483648, 2147483647]"
        self._arm_no = value

    @builtins.property
    def arm_target_pose(self):
        """Message field 'arm_target_pose'."""
        return self._arm_target_pose

    @arm_target_pose.setter
    def arm_target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'arm_target_pose' field must be a sub message of type 'Pose'"
        self._arm_target_pose = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmVisionPlanning_Result(type):
    """Metaclass of message 'ArmVisionPlanning_Result'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__result

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmVisionPlanning_Result(metaclass=Metaclass_ArmVisionPlanning_Result):
    """Message class 'ArmVisionPlanning_Result'."""

    __slots__ = [
        '_arm_no',
        '_time_from_start',
        '_arm_pose',
        '_success',
        '_info',
    ]

    _fields_and_field_types = {
        'arm_no': 'int32',
        'time_from_start': 'float',
        'arm_pose': 'geometry_msgs/Pose',
        'success': 'boolean',
        'info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm_no = kwargs.get('arm_no', int())
        self.time_from_start = kwargs.get('time_from_start', float())
        from geometry_msgs.msg import Pose
        self.arm_pose = kwargs.get('arm_pose', Pose())
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
        if self.arm_no != other.arm_no:
            return False
        if self.time_from_start != other.time_from_start:
            return False
        if self.arm_pose != other.arm_pose:
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
    def arm_no(self):
        """Message field 'arm_no'."""
        return self._arm_no

    @arm_no.setter
    def arm_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'arm_no' field must be an integer in [-2147483648, 2147483647]"
        self._arm_no = value

    @builtins.property
    def time_from_start(self):
        """Message field 'time_from_start'."""
        return self._time_from_start

    @time_from_start.setter
    def time_from_start(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_from_start' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_from_start' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_from_start = value

    @builtins.property
    def arm_pose(self):
        """Message field 'arm_pose'."""
        return self._arm_pose

    @arm_pose.setter
    def arm_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'arm_pose' field must be a sub message of type 'Pose'"
        self._arm_pose = value

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

# Member 'arm_joint_angles'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmVisionPlanning_Feedback(type):
    """Metaclass of message 'ArmVisionPlanning_Feedback'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__feedback

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmVisionPlanning_Feedback(metaclass=Metaclass_ArmVisionPlanning_Feedback):
    """Message class 'ArmVisionPlanning_Feedback'."""

    __slots__ = [
        '_arm_no',
        '_plan_success',
        '_time_from_start',
        '_arm_pose',
        '_arm_joint_angles',
    ]

    _fields_and_field_types = {
        'arm_no': 'int32',
        'plan_success': 'boolean',
        'time_from_start': 'float',
        'arm_pose': 'geometry_msgs/Pose',
        'arm_joint_angles': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm_no = kwargs.get('arm_no', int())
        self.plan_success = kwargs.get('plan_success', bool())
        self.time_from_start = kwargs.get('time_from_start', float())
        from geometry_msgs.msg import Pose
        self.arm_pose = kwargs.get('arm_pose', Pose())
        if 'arm_joint_angles' not in kwargs:
            self.arm_joint_angles = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.arm_joint_angles = numpy.array(kwargs.get('arm_joint_angles'), dtype=numpy.float32)
            assert self.arm_joint_angles.shape == (6, )

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
        if self.arm_no != other.arm_no:
            return False
        if self.plan_success != other.plan_success:
            return False
        if self.time_from_start != other.time_from_start:
            return False
        if self.arm_pose != other.arm_pose:
            return False
        if all(self.arm_joint_angles != other.arm_joint_angles):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def arm_no(self):
        """Message field 'arm_no'."""
        return self._arm_no

    @arm_no.setter
    def arm_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'arm_no' field must be an integer in [-2147483648, 2147483647]"
        self._arm_no = value

    @builtins.property
    def plan_success(self):
        """Message field 'plan_success'."""
        return self._plan_success

    @plan_success.setter
    def plan_success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plan_success' field must be of type 'bool'"
        self._plan_success = value

    @builtins.property
    def time_from_start(self):
        """Message field 'time_from_start'."""
        return self._time_from_start

    @time_from_start.setter
    def time_from_start(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_from_start' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_from_start' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_from_start = value

    @builtins.property
    def arm_pose(self):
        """Message field 'arm_pose'."""
        return self._arm_pose

    @arm_pose.setter
    def arm_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'arm_pose' field must be a sub message of type 'Pose'"
        self._arm_pose = value

    @builtins.property
    def arm_joint_angles(self):
        """Message field 'arm_joint_angles'."""
        return self._arm_joint_angles

    @arm_joint_angles.setter
    def arm_joint_angles(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'arm_joint_angles' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'arm_joint_angles' numpy.ndarray() must have a size of 6"
            self._arm_joint_angles = value
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
                "The 'arm_joint_angles' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._arm_joint_angles = numpy.array(value, dtype=numpy.float32)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmVisionPlanning_SendGoal_Request(type):
    """Metaclass of message 'ArmVisionPlanning_SendGoal_Request'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__send_goal__request

            from arm_hand_interface.action import ArmVisionPlanning
            if ArmVisionPlanning.Goal.__class__._TYPE_SUPPORT is None:
                ArmVisionPlanning.Goal.__class__.__import_type_support__()

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


class ArmVisionPlanning_SendGoal_Request(metaclass=Metaclass_ArmVisionPlanning_SendGoal_Request):
    """Message class 'ArmVisionPlanning_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'arm_hand_interface/ArmVisionPlanning_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_hand_interface', 'action'], 'ArmVisionPlanning_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Goal
        self.goal = kwargs.get('goal', ArmVisionPlanning_Goal())

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
            from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Goal
            assert \
                isinstance(value, ArmVisionPlanning_Goal), \
                "The 'goal' field must be a sub message of type 'ArmVisionPlanning_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmVisionPlanning_SendGoal_Response(type):
    """Metaclass of message 'ArmVisionPlanning_SendGoal_Response'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__send_goal__response

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


class ArmVisionPlanning_SendGoal_Response(metaclass=Metaclass_ArmVisionPlanning_SendGoal_Response):
    """Message class 'ArmVisionPlanning_SendGoal_Response'."""

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


class Metaclass_ArmVisionPlanning_SendGoal(type):
    """Metaclass of service 'ArmVisionPlanning_SendGoal'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__arm_vision_planning__send_goal

            from arm_hand_interface.action import _arm_vision_planning
            if _arm_vision_planning.Metaclass_ArmVisionPlanning_SendGoal_Request._TYPE_SUPPORT is None:
                _arm_vision_planning.Metaclass_ArmVisionPlanning_SendGoal_Request.__import_type_support__()
            if _arm_vision_planning.Metaclass_ArmVisionPlanning_SendGoal_Response._TYPE_SUPPORT is None:
                _arm_vision_planning.Metaclass_ArmVisionPlanning_SendGoal_Response.__import_type_support__()


class ArmVisionPlanning_SendGoal(metaclass=Metaclass_ArmVisionPlanning_SendGoal):
    from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_SendGoal_Request as Request
    from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmVisionPlanning_GetResult_Request(type):
    """Metaclass of message 'ArmVisionPlanning_GetResult_Request'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__get_result__request

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


class ArmVisionPlanning_GetResult_Request(metaclass=Metaclass_ArmVisionPlanning_GetResult_Request):
    """Message class 'ArmVisionPlanning_GetResult_Request'."""

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


class Metaclass_ArmVisionPlanning_GetResult_Response(type):
    """Metaclass of message 'ArmVisionPlanning_GetResult_Response'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__get_result__response

            from arm_hand_interface.action import ArmVisionPlanning
            if ArmVisionPlanning.Result.__class__._TYPE_SUPPORT is None:
                ArmVisionPlanning.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmVisionPlanning_GetResult_Response(metaclass=Metaclass_ArmVisionPlanning_GetResult_Response):
    """Message class 'ArmVisionPlanning_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'arm_hand_interface/ArmVisionPlanning_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_hand_interface', 'action'], 'ArmVisionPlanning_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Result
        self.result = kwargs.get('result', ArmVisionPlanning_Result())

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
            from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Result
            assert \
                isinstance(value, ArmVisionPlanning_Result), \
                "The 'result' field must be a sub message of type 'ArmVisionPlanning_Result'"
        self._result = value


class Metaclass_ArmVisionPlanning_GetResult(type):
    """Metaclass of service 'ArmVisionPlanning_GetResult'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__arm_vision_planning__get_result

            from arm_hand_interface.action import _arm_vision_planning
            if _arm_vision_planning.Metaclass_ArmVisionPlanning_GetResult_Request._TYPE_SUPPORT is None:
                _arm_vision_planning.Metaclass_ArmVisionPlanning_GetResult_Request.__import_type_support__()
            if _arm_vision_planning.Metaclass_ArmVisionPlanning_GetResult_Response._TYPE_SUPPORT is None:
                _arm_vision_planning.Metaclass_ArmVisionPlanning_GetResult_Response.__import_type_support__()


class ArmVisionPlanning_GetResult(metaclass=Metaclass_ArmVisionPlanning_GetResult):
    from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_GetResult_Request as Request
    from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmVisionPlanning_FeedbackMessage(type):
    """Metaclass of message 'ArmVisionPlanning_FeedbackMessage'."""

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
                'arm_hand_interface.action.ArmVisionPlanning_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arm_vision_planning__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arm_vision_planning__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arm_vision_planning__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__arm_vision_planning__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arm_vision_planning__feedback_message

            from arm_hand_interface.action import ArmVisionPlanning
            if ArmVisionPlanning.Feedback.__class__._TYPE_SUPPORT is None:
                ArmVisionPlanning.Feedback.__class__.__import_type_support__()

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


class ArmVisionPlanning_FeedbackMessage(metaclass=Metaclass_ArmVisionPlanning_FeedbackMessage):
    """Message class 'ArmVisionPlanning_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'arm_hand_interface/ArmVisionPlanning_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_hand_interface', 'action'], 'ArmVisionPlanning_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Feedback
        self.feedback = kwargs.get('feedback', ArmVisionPlanning_Feedback())

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
            from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Feedback
            assert \
                isinstance(value, ArmVisionPlanning_Feedback), \
                "The 'feedback' field must be a sub message of type 'ArmVisionPlanning_Feedback'"
        self._feedback = value


class Metaclass_ArmVisionPlanning(type):
    """Metaclass of action 'ArmVisionPlanning'."""

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
                'arm_hand_interface.action.ArmVisionPlanning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__arm_vision_planning

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from arm_hand_interface.action import _arm_vision_planning
            if _arm_vision_planning.Metaclass_ArmVisionPlanning_SendGoal._TYPE_SUPPORT is None:
                _arm_vision_planning.Metaclass_ArmVisionPlanning_SendGoal.__import_type_support__()
            if _arm_vision_planning.Metaclass_ArmVisionPlanning_GetResult._TYPE_SUPPORT is None:
                _arm_vision_planning.Metaclass_ArmVisionPlanning_GetResult.__import_type_support__()
            if _arm_vision_planning.Metaclass_ArmVisionPlanning_FeedbackMessage._TYPE_SUPPORT is None:
                _arm_vision_planning.Metaclass_ArmVisionPlanning_FeedbackMessage.__import_type_support__()


class ArmVisionPlanning(metaclass=Metaclass_ArmVisionPlanning):

    # The goal message defined in the action definition.
    from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Goal as Goal
    # The result message defined in the action definition.
    from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Result as Result
    # The feedback message defined in the action definition.
    from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from arm_hand_interface.action._arm_vision_planning import ArmVisionPlanning_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
