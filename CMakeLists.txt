cmake_minimum_required(VERSION 3.21)
project(PerfectZoo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Groups)

add_executable(PerfectZoo
        Groups/Mammal.h
        Groups/Mammal.cpp
        Groups/Reptile.h
        Groups/Reptile.cpp
        Animal.cpp
        Animal.h
        main.cpp
        Zoo.cpp
        Zoo.h)
