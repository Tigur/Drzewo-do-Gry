cmake_minimum_required(VERSION 3.7)
project(List4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp headers/priorQueue.h)
add_executable(List4 ${SOURCE_FILES})