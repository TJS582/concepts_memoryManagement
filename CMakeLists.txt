cmake_minimum_required(VERSION 3.20)
project(MemoeryManagement)

#setting c++ standard;
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#creates a static library, 'memAllocator' with the following source files...
add_library(memAllocator STATIC
    src/allocator/allocator.cpp
    src/allocator/pool_manager.cpp
    #basically anything regarding the allocator should be included in here
)

#adding executable from src/main.cpp;
add_executable(memory_demo 
    src/main.cpp
##    src/allocator.cpp
#// moved to 'add_library(...)', for the purpose of turning it into a static library (for fun)
)

#headers
target_include_dierectories(memory_demo PRIVATE include)



#enabling compiler warnings;
target_compile_options(memory_demo PRIVATE -Wall -Wextra)

