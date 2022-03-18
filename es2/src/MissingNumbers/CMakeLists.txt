set(CMAKE_CXX_STANDARD 14)

add_library(MissingNumbers #name
        MissingNumbers.cpp #files
        MissingNumbers.h)

target_include_directories(MissingNumbers PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR})
