cmake_minimum_required(VERSION 3.29)
project(cv2)

set(CMAKE_CXX_STANDARD 20)

add_executable(cv2 main.cpp Package/package.hpp Package/package.cpp)
