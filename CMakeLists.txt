cmake_minimum_required(VERSION 3.7)
project(Tree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TreeStructure.h treeNode.h Tree.h)
add_executable(Tree ${SOURCE_FILES})