cmake_minimum_required(VERSION 3.19)
project(Herencia)

set(CMAKE_CXX_STANDARD 14)

include_directories(EjemploBasico/Model)
include_directories(EjemploBasico/View)

add_executable(Herencia
        EjemploBasico/Model/ClassA.cpp
        EjemploBasico/Model/ClassA.h
        EjemploBasico/Model/ClassB.cpp
        EjemploBasico/Model/ClassB.h
        EjemploBasico/Model/ClassC.cpp
        EjemploBasico/Model/ClassC.h
        EjemploBasico/View/View.cpp
        EjemploBasico/View/View.h
        EjemploBasico/Main.cpp)
