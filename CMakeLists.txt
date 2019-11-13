cmake_minimum_required(VERSION 3.15)
project(DragonNodeExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(DragonNodeExample main.cpp Dragon.cpp Dragon.h DragonNode.cpp DragonNode.h)