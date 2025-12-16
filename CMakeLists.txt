cmake_minimum_required(VERSION 3.20)
project(MemoeryManagement)

#setting c++ standard;
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#adding executable from src/main.cpp;
add_executable(memory_demo src/main.cpp)

#enabling compiler warnings;
target_compile_options(memory_demo PRIVATE -Wall -Wextra)

