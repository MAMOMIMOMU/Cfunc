cmake_minimum_required(VERSION 3.0.0)

project(my_project VERSION 1.0.0)
set(CMAKE_C_FLAGS "-O0 -g3")

add_subdirectory(str_func)

add_executable(top
main.c
func_table.c
)

target_include_directories(top PUBLIC ${PROJECT_SOURCE_DIR}/str_func)

target_link_libraries(top str_func)