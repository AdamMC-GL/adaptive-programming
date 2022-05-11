cmake_minimum_required(VERSION 3.21)
project(gameshop)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(gameshop
        gameshop.cpp
        gameshop.hpp
        main.cpp)
