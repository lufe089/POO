#include "Propiedad.h"


Propiedad::Propiedad() {
    numIdentificacion = 0;
    piso = 0;
    areaPropiedad = 0;
    hayParqueadero = false; // Toda propiedad x defecto no tenga parqueadero
    cuartoUtil = NULL;

}

Propiedad::Propiedad(double numIdentificacion, int piso, float areaPropiedad, bool hayParqueadero,
                     CuartoUtil *cuartoUtil) : numIdentificacion(numIdentificacion), piso(piso),
                                               areaPropiedad(areaPropiedad), hayParqueadero(hayParqueadero),
                                               cuartoUtil(cuartoUtil) {}


void Propiedad::mostrarDatos() { // Para mostrar los datos
    cout << "El piso es: " << piso << "\n";
    cout << "El area es: " << areaPropiedad << "\n";
    cout << "El numero de identificacion es: " << numIdentificacion << "\n";
    cout << "Tiene parqueadero: " << hayParqueadero << "\n";
    if (cuartoUtil != NULL) {
        cout << "Cuarto util:  " << "\n";
        cuartoUtil->mostrarDatos();
    } else {
        cout << "No tiene cuarto util:  " << "\n";
    }
    cout << "***************************\n";
}

float Propiedad::calcularRecargo(float cobroAscensor, float costoBase, float recargo) {
    int total;

    if (areaPropiedad >
        150) { //FIXME el 150 y e. 0.01 son números quemados en código. Esto se llama números mágicos y en general se deben evitar.
        total = (cobroAscensor * piso) + ((costoBase * recargo) + costoBase);
    } else {
        total = (cobroAscensor * piso) + costoBase;
    }

    //Descuento por cuarto util
    if (cuartoUtil != NULL) {

        if (!cuartoUtil->isEstaTerminado()) {
            total = total - (total * 0.01);
        }
    }

    return total;
}


double Propiedad::getNumIdentificacion() const {
    return numIdentificacion;
}

void Propiedad::setNumIdentificacion(double numIdentificacion) {
    Propiedad::numIdentificacion = numIdentificacion;
}

int Propiedad::getPiso() const {
    return piso;
}

void Propiedad::setPiso(int piso) {
    Propiedad::piso = piso;
}

float Propiedad::getAreaPropiedad() const {
    return areaPropiedad;
}

void Propiedad::setAreaPropiedad(float areaPropiedad) {
    Propiedad::areaPropiedad = areaPropiedad;
}

bool Propiedad::isHayParqueadero() const {
    return hayParqueadero;
}

void Propiedad::setHayParqueadero(bool hayParqueadero) {
    Propiedad::hayParqueadero = hayParqueadero;
}

void Propiedad::setCuartoUtil(CuartoUtil *cuartoUtil) {
    Propiedad::cuartoUtil = cuartoUtil;
}

CuartoUtil *Propiedad::getCuartoUtil() const {
    return cuartoUtil;
}

Propiedad::~Propiedad() {
    // Elimina la referencia al apuntador
    if (cuartoUtil != nullptr) {
        delete cuartoUtil;
    }
}


