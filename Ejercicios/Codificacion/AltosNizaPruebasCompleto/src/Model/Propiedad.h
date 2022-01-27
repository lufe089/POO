#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include <iostream>

using namespace std;

class Propiedad{
    private:
        int id, piso;
        float area;
        bool parqueadero;
    public:
        Propiedad();
        Propiedad(int id, int piso, float area, bool parqueadero);

    float calcPagoAdmin(int valor);
        int getId();
        void setId(int id);
        int getPiso();
        void setPiso(int piso);
        float getArea();
        void setArea(float area);
        bool getParqueadero();
        void setParqueadero(bool parqueadero);
};

#endif