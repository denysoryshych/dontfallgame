cmake_minimum_required(VERSION 3.15)
project(MyGame)

set(CMAKE_CXX_STANDARD 17)

find_package(raylib REQUIRED)

add_executable(untitled2 main.cpp
        Platform.cpp
        Platform.h
        Hero.cpp
        Hero.h)

target_link_libraries(untitled2 raylib)