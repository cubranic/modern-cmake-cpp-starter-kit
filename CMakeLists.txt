cmake_minimum_required(VERSION 3.11)
project(
    Calc 
    DESCRIPTION "A CMake tutorial"
    VERSION 0.1.0
    LANGUAGES CXX
)

# Require C++17 support from the compiler
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# Make sure we use -std=c++17, not -std=gnu++17
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(src)

include(CTest)
add_subdirectory(test)