set(CMAKE_CXX_STANDARD 14)

# add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Adds tests for Example Library
add_executable(TemplateTestClass TemplateTestClass.cpp)
target_link_libraries(TemplateTestClass gtest gtest_main pthread)
target_link_libraries(TemplateTestClass TemplateLibrary)   # Links Example Library to its test

add_test(NAME    TemplateTestClass   # Adds test to cmake
        COMMAND TemplateTestClass)