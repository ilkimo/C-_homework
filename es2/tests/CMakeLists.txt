set(CMAKE_CXX_STANDARD 14)

# add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Adds tests for Example Library
add_executable(TestMissingNumbers TestMissingNumbers.cpp)
target_link_libraries(TestMissingNumbers gtest gtest_main pthread)
target_link_libraries(TestMissingNumbers MissingNumbers)   # Links Example Library to its test

add_test(NAME    TestMissingNumbers   # Adds test to cmake
        COMMAND TestMissingNumbers)