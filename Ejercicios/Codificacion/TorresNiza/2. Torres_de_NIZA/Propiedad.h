#ifndef PROPIEDAD_H     //SOLO EN LOS .h
#define PROPIEDAD_H 

#include <iostream>

using std::cout;
using std::cin;
using std::string;

class Propiedad{
    private:
        double numIdentificacion;
        int piso;
        float areaProp;
        bool parqueadero;

    public:
        void setPagarRecargo(float);
        void setnumIdentificacion(double numIdentificacion);
        void setPiso(int piso);
        void setAreaProp(float areaProp);
        void setParqueadero(bool parqueadero);
        void mostrarDatosPropiedad();
};

#endif