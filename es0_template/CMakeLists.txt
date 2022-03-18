cmake_minimum_required(VERSION 3.0)
project(es0_template)

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(src)

include(CTest) # this adds a BUILD_TESTING which defaults to ON
if(BUILD_TESTING)
    add_subdirectory(tests)
endif()