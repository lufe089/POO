#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include <vector>
#include "Persona.h"
#include "Colaborador.h"
#include "Estudiante.h"

using std::vector;

class Universidad
{
private:
    vector<Persona> personas;

public:
    Universidad();
    void calcularRecaudoParqueadero();
    void mostrarUsuarios();
};

#endif // UNIVERSIDAD_H
