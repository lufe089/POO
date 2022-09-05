#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include "Propiedad.h"

using std::string;

class Propietario {
private:
    long identificacion;
    string nombre;
    Propiedad *propiedad;

public:
    Propietario();

    virtual ~Propietario(); // Destructor
    long getIdentificacion() const;

    const string &getNombre() const;

    Propiedad *getPropiedad() const;

    void setNombre(const string &nombre);

    void setPropiedad(Propiedad *propiedad);

    void setIdentificacion(long identificacion);

    void mostrarDatos();
};

#endif