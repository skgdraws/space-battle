cmake_minimum_required(VERSION 3.24)
project(Space_Battle)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(Space_Battle src/main.cpp src/Player.cpp src/PlayState.cpp src/DataStructures/LinkedList.cpp src/Enemies/Enemy.h src/Enemies/Enemy.cpp src/DataStructures/Node.cpp src/Enemies/Enemy_1.h src/Enemies/Enemy_1.cpp src/Enemies/Enemy_2.cpp src/Enemies/Enemy_3.h src/Enemies/Enemy_3.cpp src/Enemies/Enemy_4.cpp src/Enemies/Enemy_5.h src/Enemies/Enemy_5.cpp src/DTO/Wave.h src/DTO/Wave.cpp src/Enemy.cpp)
target_link_libraries(Space_Battle sfml-graphics sfml-audio)
