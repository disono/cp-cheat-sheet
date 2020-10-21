cmake_minimum_required(VERSION 3.10)

# set the project name
project(cpp-cheat-sheet VERSION 1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# add the executable
set(SOURCE_FILES main.cpp)
add_executable(cpp-cheat-sheet ${SOURCE_FILES})