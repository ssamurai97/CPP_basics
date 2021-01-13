cmake_minimum_required(VERSION 3.16)

project(inserting_element)


set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF )
string(APPEND CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")


add_executable(main insert.cpp)

add_executable(insert insert.cpp)

add_executable(remove_e remove_element.cpp myutil.hpp)

add_executable(sort sorta_vector.cpp )

