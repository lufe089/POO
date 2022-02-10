#include <iostream>
#include "Propiedad.h"

using std::string;

class Propietario
{
private:
    double identificacion;
    string nombre;
    Propiedad propiedad;

public:
    void setIdentificacion(double identificacion);
    double getIdentificacion();
};