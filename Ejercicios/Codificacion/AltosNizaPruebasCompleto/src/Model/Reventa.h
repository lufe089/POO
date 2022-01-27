#ifndef REVENTA_H
#define REVENTA_H

#include <iostream>
#include "Propietario.h"

using namespace std;

class Reventa : public Propietario{
    public:
        Reventa();
        Reventa(string nombre, int id, Propiedad &propiedad);

    void mostrarBeneficios();
};

#endif