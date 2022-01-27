#include <iostream>
#include "Producto.h"

// Constructor por defecto
Producto::Producto()
{
	this->precioVenta = 0; // Valores por defecto para iniciar las variables de instancia
	this->costo = 0;
	this->codigo = 0;
}

Producto::Producto(TipoProducto tipoProducto, string nombre, float precioVenta, float costo, int codigo, int cantUnidades)
{
	this->tipoProducto = tipoProducto;
	this->nombre = nombre;
	this->precioVenta = precioVenta;
	this->codigo = codigo;

	// TODO completar
	// FIXME
}

TipoProducto Producto::getTipoProducto()
{
	return tipoProducto;
}

void Producto::mostrarProducto()
{
	cout << "nombre " << nombre << "\n";
	cout << "codigo " << codigo << "\n";
}

void Producto::setTipoProducto(TipoProducto tipo)
{
	this->tipoProducto = tipo;
}

float Producto::getPrecio()
{
	return precioVenta;
}

void Producto::setPrecio(float precio)
{
	this->precioVenta = precio;
}

float Producto::getCosto()
{
	return costo;
}

void Producto::setCosto(float costo)
{
	this->costo = costo;
}

int Producto::getCodigo()
{
	return codigo;
}

void Producto::setCodigo(int codigo)
{
	this->codigo = codigo;
}

string Producto::getNombre()
{
	return nombre;
}

void Producto::setNombre(string nombre)
{
	this->nombre = nombre;
}

int Producto::getCantUnidades()
{
	return cantUnidades;
}

void Producto::setCantUnidades(int cantUnidades)
{
	this->cantUnidades = cantUnidades;
}