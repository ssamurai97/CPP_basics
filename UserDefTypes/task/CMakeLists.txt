cmake_minimum_required(VERSION 3.5)

project(task)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)
add_library(task-objs
  OBJECT
  TimeStamp.hpp
  TimeStamp.cpp
  Task.hpp
  Task.cpp
)

add_library(task-static
    STATIC
    $<TARGET_OBJECTS:task-objs>
  
)
set_target_properties(task-static
    PROPERTIES 
    OUTPUT_NAME  "MESSAGE"

)

add_library(task-shared
    SHARED 
    $<TARGET_OBJECTS:task-objs>
)

add_executable(make_task test.cpp )

set_target_properties(task-shared
    PROPERTIES 
    OUTPUT_NAME  "MESSAGE"

)


target_link_libraries(make_task task-static)