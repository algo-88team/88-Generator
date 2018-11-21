# cmake_minimum_required(VERSION <specify CMake version here>)
project(88-Generator)

set(CMAKE_CXX_STANDARD 14)

add_executable(88-Generator main.cpp create_puzzle.cpp create_blank.cpp)