cmake_minimum_required(VERSION 3.24)
project(Space_Battle)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(Space_Battle src/main.cpp src/Player.cpp src/PlayState.cpp
        libserial/SerialPort.h libserial/SerialStream.h libserial/SerialStreamBuf.h)
target_link_libraries(Space_Battle sfml-graphics sfml-audio)
