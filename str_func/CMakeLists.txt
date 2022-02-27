add_library(str_func
my_strtok.c
my_strcpy.c)

target_include_directories(str_func PUBLIC ${PROJECT_SOURCE_DIR})