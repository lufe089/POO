#include "PropiedadxPropietario.h"

PropiedadxPropietario::PropiedadxPropietario()
    : id(0)
{
}

PropiedadxPropietario::PropiedadxPropietario(Propietario propietario, Propiedad propiedad, double id)
{

    this->propietario = propietario;
    this->propiedad = propiedad;
    this->id = id;
}

Propiedad PropiedadxPropietario::getPropiedad()
{
    return this->propiedad;
}

Propietario PropiedadxPropietario::getPropietario()
{
    return this->propietario;
}

double PropiedadxPropietario::getId()
{
    return this->id;
}
