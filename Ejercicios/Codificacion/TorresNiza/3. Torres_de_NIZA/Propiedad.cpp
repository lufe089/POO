#include "Propiedad.h"

Propiedad::Propiedad()
{
    cout << "Entre al constructor por defecto \n";
    parqueadero = false; // Toda propiedad x defecto no tenga parqueadero
    numIdentificacion = 0;
    piso = 0;
    areaProp = 0;
}

Propiedad::Propiedad(double identificacion) : Propiedad()
{
    cout << "Entre al constructor con un parametro";
    this->numIdentificacion = identificacion;
}

Propiedad::Propiedad(int piso, double identificacion) : Propiedad() // Voy a mandarle valores x defecto
{
    cout << "Entre al constructor con dos parametros";
    this->piso = piso;
    this->numIdentificacion = identificacion;
}

Propiedad::Propiedad(int piso, double identificacion, bool parqueadero, double areaProp) // Voy a mandarle valores x defecto
{
    cout << "Entre al constructor con todos los parametros";
    this->piso = piso;
    this->numIdentificacion = identificacion;
    this->parqueadero = parqueadero;
    this->areaProp = areaProp;
}

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

bool Propiedad::getParqueadero()
{
    return this->parqueadero;
}

void Propiedad::mostrarDatosPropiedad()
{ // Para mostrar los datos
    cout << "El piso es: " << piso << "\n";
    cout << "El area es: " << areaProp << "\n";
    cout << "El numero de identificacion es: " << numIdentificacion << "\n";
    cout << "Tiene parqueadero? -> " << parqueadero << "\n";
    cout << "\n";
}