from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_common_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('robot_common_interfaces', 'robot_common_interfaces.*')),
)
