cmake_minimum_required(VERSION 3.0)
project(Staticl_lib_Homework)

add_library(${PROJECT_NAME} STATIC func_add.c func_div.c func_mul.c func_sub.c)

add_executable(base main.c)

target_link_libraries(base PRIVATE ${PROJECT_NAME})