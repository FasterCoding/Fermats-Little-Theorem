cmake_minimum_required(VERSION 3.10)

project(modinverse)

set(CMAKE_CXX_STANDARD 17)

set(SRC main.cpp
        ./fermat/fermat.cpp
        ./lib/euclid.cpp)

add_executable(modinverse ${SRC})