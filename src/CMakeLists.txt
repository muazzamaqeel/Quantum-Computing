cmake_minimum_required(VERSION 3.25)
project(src)

set(CMAKE_CXX_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/libs/qpp/include)
include_directories(${PROJECT_SOURCE_DIR}/libs/qpp/include/qpp)
include_directories(${PROJECT_SOURCE_DIR}/libs/eigen-3.4.0)

add_executable(src main.cpp)
