cmake_minimum_required(VERSION 3.6 )

project(boost_t LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.71 COMPONENTS regex)
if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})

endif()

add_executable(expr reMatch.cpp)


target_link_libraries(expr
	PRIVATE
	Boost::regex
	)

add_executable(valid validExpr.cpp)
target_link_libraries(valid
	PRIVATE
	Boost::regex
	)


