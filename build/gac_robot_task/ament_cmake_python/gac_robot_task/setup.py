from setuptools import find_packages
from setuptools import setup

setup(
    name='gac_robot_task',
    version='1.0.3',
    packages=find_packages(
        include=('gac_robot_task', 'gac_robot_task.*')),
)
