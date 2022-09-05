#ifndef PROPIEDAD_H // SOLO EN LOS .h
#define PROPIEDAD_H

#include <iostream>
#include "CuartoUtil.h"

using std::cin;
using std::cout;
using std::string;

class Propiedad {
private:
    double numIdentificacion;
    int piso;
    float areaPropiedad;
    bool hayParqueadero;
    CuartoUtil *cuartoUtil;

public:
    Propiedad();                                // El contructor x defecto
    Propiedad(double numIdentificacion, int piso, float areaPropiedad, bool hayParqueadero, CuartoUtil *cuartoUtil);

    virtual ~Propiedad(); // Destructor


    float calcularRecargo(float cobroAscensor, float costoBase, float recargo);

    void mostrarDatos();

    double getNumIdentificacion() const;

    void setNumIdentificacion(double numIdentificacion);

    int getPiso() const;

    void setPiso(int piso);

    float getAreaPropiedad() const;

    void setAreaPropiedad(float areaPropiedad);

    bool isHayParqueadero() const;

    void setHayParqueadero(bool hayParqueadero);

    CuartoUtil *getCuartoUtil() const;

    void setCuartoUtil(CuartoUtil *cuartoUtil);


};

#endif