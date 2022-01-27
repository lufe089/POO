#ifndef FUNDADOR_H
#define FUNDADOR_H

#include <iostream>
#include "Propietario.h"

using namespace std;

class Fundador : public Propietario{
    public:
        Fundador();
        Fundador(string nombre, int id, Propiedad &propiedad);

    void mostrarBeneficios();
};

#endif