add_library(mem_func
my_memcpy.c
my_malloc.c)

target_include_directories(mem_func PUBLIC ${PROJECT_SOURCE_DIR})