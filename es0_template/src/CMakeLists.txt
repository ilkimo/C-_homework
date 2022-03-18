set(CMAKE_CXX_STANDARD 14)

add_subdirectory(TemplateLibrary)

add_executable(es0_template main.cpp)

link_directories(TemplateLibrary)

target_link_libraries(es0_template #target in which link
        TemplateLibrary #library name
        )