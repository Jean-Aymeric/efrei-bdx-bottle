cmake_minimum_required(VERSION 3.25)
project(bottle C)

set(CMAKE_C_STANDARD 11)

add_executable(bottle main.c
        bottle.c
        bottle.h
        color.h
        castle.h
        color.c)
