set(CMAKE_CXX_STANDARD 14)

add_subdirectory(CipCiop)

add_executable(es1 main.cpp)

link_directories(CipCiop)

target_link_libraries(es1 #target in which link
        CipCiop #library name
        )