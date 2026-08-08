from setuptools import find_packages
from setuptools import setup

setup(
    name='vizanti_server',
    version='0.1.1',
    packages=find_packages(
        include=('vizanti_server', 'vizanti_server.*')),
)
