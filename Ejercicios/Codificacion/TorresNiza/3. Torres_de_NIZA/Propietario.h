#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include "Propiedad.h"

using std::string;

class Propietario
{
private:
    double identificacion;
    string nombre;

public:
    void setIdentificacion(double identificacion);
    void setNombre(string nombre);
    double getIdentificacion();
    void mostrarDatosPropietario();
};

#endif