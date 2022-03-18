cmake_minimum_required(VERSION 3.0)
project(es1)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

include(CTest) # this adds a BUILD_TESTING which defaults to ON
if(BUILD_TESTING)
    add_subdirectory(tests)
endif()