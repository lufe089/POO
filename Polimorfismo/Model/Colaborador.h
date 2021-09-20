#ifndef COLABORADOR_H
#define COLABORADOR_H

#include "Persona.h"

class Colaborador : public Persona
{

private:
    string cargo;
    float salarioActual;

public:
    Colaborador();
    Colaborador(string nombreCompleto, string documento, string username, string cargo, float salarioActual);
    void mostrar();
    void incrementarSalario(float porcentaje);
    float pagarParqueadero();
};

#endif // COLABORADOR_H
