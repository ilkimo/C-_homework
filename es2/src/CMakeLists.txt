set(CMAKE_CXX_STANDARD 14)

add_subdirectory(MissingNumbers)

add_executable(es2 main.cpp)

link_directories(MissingNumbers)

target_link_libraries(es2 #target in which link
        MissingNumbers #library name
        )