cmake_minimum_required(VERSION 3.29)
project(cv3)

set(CMAKE_CXX_STANDARD 20)

add_executable(cv3 main.cpp Account/Account.h Account/Account.cpp
        Log/Logger.cpp
        Log/Logger.h)
