#include <iostream>
#include "Propiedad.h"

void Propiedad::setPagarRecargo(float)
{
}

void Propiedad::setPiso(int piso)
{
    this->piso = piso;
}

void Propiedad::setnumIdentificacion(double numIdentifiacion)
{
    this->numIdentificacion = numIdentifiacion;
}

void Propiedad::setAreaProp(float areaProp)
{
    this->areaProp = areaProp;
}

void Propiedad::setParqueadero(bool parqueadero)
{
    this->parqueadero = parqueadero;
}

void Propiedad::mostrarDatosPropiedad()
{ // Para mostrar los datos
    cout << "El piso es: " << piso << "\n";
    cout << "El area es: " << areaProp << "\n";
    cout << "El numero de identificacion es: " << numIdentificacion << "\n";
    cout << "Tiene parqueadero? -> " << parqueadero << "\n";
    cout << "\n";
}