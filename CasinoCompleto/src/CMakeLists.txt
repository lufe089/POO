cmake_minimum_required(VERSION 3.19)
project(casino)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        #Nombre del ejecutable
        casino
        #Lista de archivos a compilar en este target
        main.cpp src/Model/Jugador.cpp src/View/View.cpp src/View/View.h src/Model/Casino.cpp src/Model/Casino.h src/Model/Juego.cpp src/Model/Juego.h src/Model/Mayor13.cpp src/Model/Mayor13.h src/Model/DosColores.cpp src/Model/DosColores.h src/Model/Slots.cpp src/Model/Slots.h)