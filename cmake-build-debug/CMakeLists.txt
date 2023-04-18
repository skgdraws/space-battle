cmake_minimum_required(VERSION 3.24)
project(Space_Battle)

set(CMAKE_CXX_STANDARD 14)

include_directories(third-party/include)

set(serial_SRCS third-party/src/serial.cc third-party/include/serial/serial.h 
    third-party/include/serial/v8stdint.h third-party/src/impl/list_ports/list_ports_linux.cc)
list(APPEND serial_SRCS third-party/src/impl/unix.cc)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(Space_Battle ../src/main.cpp ../src/Player.cpp ../src/Player.h ../src/PlayState.cpp ../src/PlayState.h ../src/Enemy.cpp
        ../src/Enemy.h ../src/DataStructures/LinkedList.cpp ../src/DataStructures/LinkedList.h ../src/DataStructures/Node.cpp
        ../src/DataStructures/Node.cpp ../src/Pagination.cpp ../src/Pagination.h ../src/Bullet.cpp ../src/Bullet.h ../src/BulletCollector.cpp ../src/BulletCollector.h)

target_link_libraries(Space_Battle sfml-graphics sfml-audio)
