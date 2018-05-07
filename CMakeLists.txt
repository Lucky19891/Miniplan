cmake_minimum_required(VERSION 3.10)
project(Miniplan_cp)

set(CMAKE_CXX_STANDARD 11)

add_executable(Miniplan_cp main.cpp Datum.h Datum.cpp Dienst.h Dienst.cpp Ministrant.h Ministrant.cpp)