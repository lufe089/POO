#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona
{
private:
    float promedioAcumulado;
    string carrera;

public:
    Estudiante();
    Estudiante(string nombreCompleto, string documento, string username, float promedioAcumulado, string carrera);
    void mostrar();
    bool estaEnPrueba();
    float pagarParqueadero();
};

#endif // ESTUDIANTE_H
