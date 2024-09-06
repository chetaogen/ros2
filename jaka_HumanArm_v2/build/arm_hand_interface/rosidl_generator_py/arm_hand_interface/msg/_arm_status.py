# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arm_hand_interface:msg/ArmStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'arm_joint_angles'
# Member 'hand_angles'
# Member 'hand_forces'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmStatus(type):
    """Metaclass of message 'ArmStatus'."""

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
                'arm_hand_interface.msg.ArmStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

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


class ArmStatus(metaclass=Metaclass_ArmStatus):
    """Message class 'ArmStatus'."""

    __slots__ = [
        '_arm_no',
        '_time',
        '_arm_pose',
        '_arm_joint_angles',
        '_arm_motion_status',
        '_arm_collision_status',
        '_hand_angles',
        '_hand_forces',
    ]

    _fields_and_field_types = {
        'arm_no': 'int32',
        'time': 'builtin_interfaces/Time',
        'arm_pose': 'geometry_msgs/Pose',
        'arm_joint_angles': 'float[6]',
        'arm_motion_status': 'int32',
        'arm_collision_status': 'boolean',
        'hand_angles': 'float[6]',
        'hand_forces': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm_no = kwargs.get('arm_no', int())
        from builtin_interfaces.msg import Time
        self.time = kwargs.get('time', Time())
        from geometry_msgs.msg import Pose
        self.arm_pose = kwargs.get('arm_pose', Pose())
        if 'arm_joint_angles' not in kwargs:
            self.arm_joint_angles = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.arm_joint_angles = numpy.array(kwargs.get('arm_joint_angles'), dtype=numpy.float32)
            assert self.arm_joint_angles.shape == (6, )
        self.arm_motion_status = kwargs.get('arm_motion_status', int())
        self.arm_collision_status = kwargs.get('arm_collision_status', bool())
        if 'hand_angles' not in kwargs:
            self.hand_angles = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.hand_angles = numpy.array(kwargs.get('hand_angles'), dtype=numpy.float32)
            assert self.hand_angles.shape == (6, )
        if 'hand_forces' not in kwargs:
            self.hand_forces = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.hand_forces = numpy.array(kwargs.get('hand_forces'), dtype=numpy.float32)
            assert self.hand_forces.shape == (6, )

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
        if self.time != other.time:
            return False
        if self.arm_pose != other.arm_pose:
            return False
        if all(self.arm_joint_angles != other.arm_joint_angles):
            return False
        if self.arm_motion_status != other.arm_motion_status:
            return False
        if self.arm_collision_status != other.arm_collision_status:
            return False
        if all(self.hand_angles != other.hand_angles):
            return False
        if all(self.hand_forces != other.hand_forces):
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
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time' field must be a sub message of type 'Time'"
        self._time = value

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

    @builtins.property
    def arm_motion_status(self):
        """Message field 'arm_motion_status'."""
        return self._arm_motion_status

    @arm_motion_status.setter
    def arm_motion_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_motion_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'arm_motion_status' field must be an integer in [-2147483648, 2147483647]"
        self._arm_motion_status = value

    @builtins.property
    def arm_collision_status(self):
        """Message field 'arm_collision_status'."""
        return self._arm_collision_status

    @arm_collision_status.setter
    def arm_collision_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arm_collision_status' field must be of type 'bool'"
        self._arm_collision_status = value

    @builtins.property
    def hand_angles(self):
        """Message field 'hand_angles'."""
        return self._hand_angles

    @hand_angles.setter
    def hand_angles(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'hand_angles' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'hand_angles' numpy.ndarray() must have a size of 6"
            self._hand_angles = value
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
                "The 'hand_angles' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._hand_angles = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def hand_forces(self):
        """Message field 'hand_forces'."""
        return self._hand_forces

    @hand_forces.setter
    def hand_forces(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'hand_forces' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'hand_forces' numpy.ndarray() must have a size of 6"
            self._hand_forces = value
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
                "The 'hand_forces' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._hand_forces = numpy.array(value, dtype=numpy.float32)
