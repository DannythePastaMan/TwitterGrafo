cmake_minimum_required(VERSION 3.9)
project(GrafoTwitter)

set(CMAKE_CXX_STANDARD 11)

add_executable(GrafoTwitter main.cpp Vertice.cpp Vertice.h Arista.cpp Arista.h Graph.cpp Graph.h)