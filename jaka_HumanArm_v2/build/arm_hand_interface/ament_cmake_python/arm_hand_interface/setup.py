from setuptools import find_packages
from setuptools import setup

setup(
    name='arm_hand_interface',
    version='0.0.0',
    packages=find_packages(
        include=('arm_hand_interface', 'arm_hand_interface.*')),
)
