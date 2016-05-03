cmake_minimum_required(VERSION 3.0)

project(livogis)

set(SRCS
    entity/fish.cpp
		entity/carnivorous_fish.cpp
    entity/herbivorous_fish.cpp
    entity/seaweed.cpp
		main.cpp
		aquarium.cpp
	  )

set(HEADERS
    entity/entity.hpp
    entity/fish.hpp
    entity/carnivorous_fish.hpp
    entity/herbivorous_fish.hpp
    entity/seaweed.hpp
		aquarium.hpp
	 )

set(CMAKE_CXX_COMPILER g++-5)
set(CMAKE_C_COMPILER   gcc-5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR})
add_executable(livogis ${SRCS} ${HEADERS})
