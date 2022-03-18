set(CMAKE_CXX_STANDARD 14)

add_library(TemplateLibrary #name
        TemplateObject.cpp #files
        TemplateObject.h)

target_include_directories(TemplateLibrary PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR})
