#include "robot.h"


int Robot::getPuntosVida()
{
   return puntosVida;
}

void Robot:: setPuntosVida(int puntos){
    this->puntosVida = puntos;
}


void Robot:: incrementarPuntosVida(int puntos){
    this->puntosVida = this->puntosVida + puntos;
}


void Robot::descargar(){

    puntosVida = 0;
}
