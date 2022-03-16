#ifndef PROPIEDADXPROPIETARIO_H
#define PROPIEDADXPROPIETARIO_H

#include "Propiedad.h"
#include "Propietario.h"

class PropiedadxPropietario
{
private:
    Propiedad propiedad;
    Propietario propietario;
    double id;

public:
    PropiedadxPropietario();
    PropiedadxPropietario(Propietario propietario, Propiedad propiedad, double id);
    Propiedad getPropiedad();
    Propietario getPropietario();
    double getId();
};

#endif // PROPIEDADXPROPIETARIO_H
