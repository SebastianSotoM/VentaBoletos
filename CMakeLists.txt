cmake_minimum_required(VERSION 3.13)
project(VentaBoletos)

set(CMAKE_CXX_STANDARD 14)

add_executable(VentaBoletos main.cpp logica/estructuras/EstructuraBase.cpp logica/estructuras/EstructuraBase.h logica/nodos/Nodo.cpp logica/nodos/Nodo.h)