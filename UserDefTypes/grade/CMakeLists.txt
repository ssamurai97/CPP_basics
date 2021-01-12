#set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

#Project name and language

project(GradeBook )

set(CMAKE_CXX_STANDARD 14)


#generate a library from sources

add_library(gradebook

	STATIC
	Grade.h
	Grade.cpp
	)


add_executable(grade main.cpp)

target_link_libraries(grade gradebook)


