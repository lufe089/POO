cmake_minimum_required(VERSION 3.19)
project(veterinaria)

set(CMAKE_CXX_STANDARD 14)

add_executable(veterinaria Mascota.cpp Mascota.h Propietario.cpp Propietario.h Veterinaria.cpp Veterinaria.h Main.cpp)