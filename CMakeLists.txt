cmake_minimum_required(VERSION 3.21)
project(PerfectZoo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Groups)

add_executable(PerfectZoo
        main.cpp
        Groups/Mammal.h
        Groups/Mammal.cpp
        Groups/Reptile.h
        Groups/Reptile.cpp
        Groups/Amphibian.h
        Groups/Amphibian.cpp
        Groups/Bird.h
        Groups/Bird.cpp
        Groups/Fish.h
        Groups/Fish.cpp
        notmain/Animal.cpp
        notmain/Animal.h
        #Zoo.cpp
        notmain/Zoo.h
        notmain/Breeder.h
        #Breeder.cpp
        )
