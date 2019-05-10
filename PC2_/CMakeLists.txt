cmake_minimum_required(VERSION 3.10.3)
project(PC2)

set(CMAKE_CXX_STANDARD 14)

add_executable(PC2 main.cpp Arena.cpp Arena.h Fighter.cpp Fighter.h Defense.cpp Defense.h Attack.cpp Attack.h Fight.cpp Fight.h)