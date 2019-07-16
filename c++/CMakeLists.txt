cmake_minimum_required(Version 3.10)

set(CMAKE_CXX_STANDARD 17)

project(modinverse)

set(SRC fermat.cpp
        ./fermat/fermat.cpp
        ./lib/euclid.cpp)

add_executable(modinverse ${SRC})