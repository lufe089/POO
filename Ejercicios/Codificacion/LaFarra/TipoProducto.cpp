#include <iostream>
#include "TipoProducto.h"

// Constructor por defecto
TipoProducto::TipoProducto()
{
	this->iva = 0; // Valores por defecto para iniciar las variables de instancia
	this->nombre = "vacio";
}

TipoProducto::TipoProducto(string nombre, float iva)
{
	this->nombre = nombre;
	this->iva = iva;
}

float TipoProducto::getIva()
{
	return iva;
}

void TipoProducto::setIva(float iva)
{
	this->iva = iva;
}

string TipoProducto::getNombre()
{
	return nombre;
}

void TipoProducto::setNombre(string nombre)
{
	this->nombre = nombre;
}