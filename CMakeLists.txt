cmake_minimum_required(VERSION 3.26)
project(valami2)

set(CMAKE_CXX_STANDARD 17)

add_executable(valami2 main.cpp
        Board.cpp
        Figure.h
        Figure.cpp
        Pawn.cpp)
