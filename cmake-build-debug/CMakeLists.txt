cmake_minimum_required(VERSION 3.24)
project(Space_Battle)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(Space_Battle ../src/main.cpp ../src/Player.cpp ../src/Player.h ../src/PlayState.cpp ../src/PlayState.h ../src/Enemy.cpp
        ../src/Enemy.h ../src/DataStructures/LinkedList.cpp ../src/DataStructures/LinkedList.h ../src/DataStructures/Node.cpp
        ../src/DataStructures/Node.cpp ../src/Pagination.cpp ../src/Pagination.h ../src/Bullet.cpp ../src/Bullet.h ../src/BulletCollector.cpp ../src/BulletCollector.h)
        #../src/libserial/SerialPort.h ../src/libserial/SerialPort.cpp ../src/libserial/SerialStream.h ../src/libserial/SerialStream.cpp ../src/libserial/SerialStreamBuf.cpp ../src/libserial/SerialStreamBuf.h)

target_link_libraries(Space_Battle sfml-graphics sfml-audio)
