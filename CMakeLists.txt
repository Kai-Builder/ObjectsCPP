cmake_minimum_required(VERSION 3.17)
project(Rebuild_Programming_Interface)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc -static")
add_executable(systemdl org/main/src/sys.cpp)