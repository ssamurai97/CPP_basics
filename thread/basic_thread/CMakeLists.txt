cmake_minimum_required(VERSION 3.13)
project(basic)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Threads REQUIRED ON)

add_executable(main main.cpp)

target_link_libraries( main Threads::Threads)