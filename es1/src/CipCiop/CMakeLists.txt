set(CMAKE_CXX_STANDARD 14)

add_library(CipCiop #name
        CipCiop.cpp #files
        CipCiop.h)

target_include_directories(CipCiop PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR})

#target_link_libraries(CipCiop)