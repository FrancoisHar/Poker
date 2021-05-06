cmake_minimum_required(VERSION 3.17)
project(Poker)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Poker
        include/Card.h
        src/Card.cpp
        main.cpp)
