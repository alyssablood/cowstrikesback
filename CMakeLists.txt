cmake_minimum_required(VERSION 3.29)
project(cowstrikesback)

set(CMAKE_CXX_STANDARD 17)

add_executable(cowstrikesback cowsay.cpp
        Dragon.h
        IceDragon.cpp
        Cow.cpp
        Dragon.cpp
        FileCow.cpp
        FileCow.h
)
