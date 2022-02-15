#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include <iostream>
#include "Propietario.h"
#include "Propiedad.h"
#include <vector>

using std::string;
using std::vector;

class Administracion
{
private:
    int cobroAscensor;
    int cobroBase;
    float recargo;
    vector<Propietario> propietarios;

public:
    void inicializarDatos();
    void imprimirPropietariosConParqueadero(); // TO-DO
    void imprimirUnPropietario();
    void imprimirPropietarios();
    void recaudarAdministracion();
};

#endif