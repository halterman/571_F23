cmake_minimum_required(VERSION 3.22.0)
project(addnumbers)

set(CMAKE_CXX_STANDARD 20)

if (MSVC)   # For Microsoft Visual C++
    add_compile_options(/W4 /EHsc)
else()   # For macOS and Linux
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(addnumbers mainprog.cpp add.cpp add.h)
