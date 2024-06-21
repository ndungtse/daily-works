cmake_minimum_required(VERSION 3.28)
project(NE_2023)

set(CMAKE_CXX_STANDARD 17)

add_executable(NE_2023 main.cpp
        Item.h
        item.service.h
        utils.h)
