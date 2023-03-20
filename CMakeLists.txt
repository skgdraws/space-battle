cmake_minimum_required(VERSION 3.24)
project(Space_Battle)

set(CMAKE_CXX_STANDARD 14)

add_executable(Space_Battle
        src/main.cpp DataStructures/Node.cpp DataStructures/List.cpp)
