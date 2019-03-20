cmake_minimum_required(VERSION 3.13)
project(VentaBoletos)

set(CMAKE_CXX_STANDARD 14)

add_executable(VentaBoletos main.cpp logica/estructuras/ListaAsientos.cpp logica/estructuras/ListaAsientos.h logica/nodos/NodoAsiento.cpp logica/nodos/NodoAsiento.h logica/Teatro.cpp logica/Teatro.h logica/estructuras/PilaAsientos.cpp logica/estructuras/PilaAsientos.h logica/estructuras/ListaPilaAsientos.cpp logica/estructuras/ListaPilaAsientos.h logica/nodos/NodoPilaAsiento.cpp logica/nodos/NodoPilaAsiento.h)