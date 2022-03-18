set(CMAKE_CXX_STANDARD 14)

# add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Adds tests for Example Library
add_executable(TestCipCiop TestCipCiop.cpp)
target_link_libraries(TestCipCiop gtest gtest_main pthread)
target_link_libraries(TestCipCiop CipCiop)   # Links Example Library to its test

add_test(NAME    TestCipCiop   # Adds test to cmake
        COMMAND TestCipCiop)