#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include "Propiedad.h"

using namespace std;

class Propietario{
    protected:
        string nombre;
        int id;
        Propiedad propiedad;
    public:
        Propietario();
        Propietario(string nombre, int id, Propiedad& propiedad);

    float calcularPagoAdmin(int valor);
        virtual void mostrarBeneficios() = 0;
        string getNombre();
        Propiedad getPropiedad();
};

#endif