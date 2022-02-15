#include <iostream>
#include "Propietario.h"

void Propietario::setIdentificacion(double identificacion)
{
    this->identificacion = identificacion; // Variable de instancia (Global = Local)
}

double Propietario::getIdentificacion()
{
    return this->identificacion;
}

void Propietario::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Propietario::setPropiedad(Propiedad propiedad)
{
    this->propiedad = propiedad;
}

void Propietario::mostrarDatosPropietario()
{ // Para mostrar los datos
    cout << "El nombre es: " << nombre << "\n";
    cout << "La identificacion es: " << identificacion << "\n";
    cout << "Los datos de su propiedad son: ";
    propiedad.mostrarDatosPropiedad();
}