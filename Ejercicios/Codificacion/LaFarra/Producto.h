#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <stdlib.h>
#include "TipoProducto.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Producto
{
private: //Atributos
	TipoProducto tipoProducto;
	string nombre;
	float precioVenta;
	float costo;
	int codigo;
	int cantUnidades;

public:																												  //Metodos
	Producto();																										  //Constructor
	Producto(TipoProducto tipoProducto, string nombre, float precioVenta, float costo, int codigo, int cantUnidades); // Gets and sets
	TipoProducto getTipoProducto();
	void mostrarProducto();
	void setTipoProducto(TipoProducto tipoProducto);
	float getPrecio();
	void setPrecio(float precio);
	float getCosto();
	void setCosto(float costo);
	int getCodigo();
	void setCodigo(int codigo);
	string getNombre();
	void setNombre(string nombre);
	int getCantUnidades();
	void setCantUnidades(int cantUnidades);
};

#endif // PRODUCTO_H
