#ifndef PROPIEDAD_H // SOLO EN LOS .h
#define PROPIEDAD_H

#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Propiedad
{
private:
    double numIdentificacion;
    int piso;
    float areaProp;
    bool parqueadero;

public:
    Propiedad();                                // El contructor x defecto
    Propiedad(double identificacion);           // El contructor con parametros
    Propiedad(int piso, double identificacion); // El contructor con parametros
    Propiedad(int piso, double identificacion, bool parqueadero, double areaProp);
    bool getParqueadero();
    void setPagarRecargo(float);
    void setnumIdentificacion(double numIdentificacion);
    void setPiso(int piso);
    void setAreaProp(float areaProp);
    void setParqueadero(bool parqueadero);
    void mostrarDatosPropiedad();
};

#endif