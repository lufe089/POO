#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include <iostream>
#include "Propietario.h"
#include "Propiedad.h"
#include "PropiedadxPropietario.h"
#include <vector>

using std::string;
using std::vector;

class Administracion
{
private:
    int cobroAscensor;
    int cobroBase;
    float recargo;
    int contIds;
    vector<Propietario> propietarios;
    vector<Propiedad> propiedades;
    vector<PropiedadxPropietario> propiedadesxPropietarios;

public:
    Administracion();
    void inicializarDatos();
    void imprimirPropietariosConParqueadero(); 
    void imprimirUnPropietario(double id);
    void imprimirPropietarios();
    void recaudarAdministracion();
    void llenarPropiedades();
};

#endif