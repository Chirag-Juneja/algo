cmake_minimum_required(VERSION 3.29.2)

set(PROJECT "app")
set(PROJECT_LIB "algo")

project(${PROJECT})

add_library(${PROJECT_LIB} SHARED src/stack.cpp)
target_include_directories(${PROJECT_LIB} PRIVATE include)

add_executable(${PROJECT} main.cpp)
target_include_directories(${PROJECT} PRIVATE include)

target_link_libraries(${PROJECT} ${PROJECT_LIB}) 
