cmake_minimum_required(VERSION 3.8)
project(Pixels)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Pixel.cpp Pixel.h MyClass.h MyClass.cpp)
add_executable(Pixels ${SOURCE_FILES})