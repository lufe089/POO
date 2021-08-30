#ifndef TIENDA_H
//Guardas
#define TIENDA_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iterator>
#include "Producto.h"
#include "Factura.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::getline;
using std::iterator;
using std::map;
using std::string;
using std::vector;

const int CAP = 10;

class Tienda
{
private: //Atributos
	string nombre;
	map<int, Producto> inventario;
	vector<Factura> facturas;
	int contCodFactura;
	void agregarDetalle(float &totalIVA, float &totalSinIVA, float &totalGeneral, Factura &factura);

public:		  //Metodos
	Tienda(); //Constructor
	Tienda(string nombre);
	// Gets and sets
	bool existeProductoPorCod(int cod);
	void agregarProducto();
	void mostrarProductos();
	string getNombre();
	void vender();
	void mostrarFacturas();
};
#endif /* !TIENDA_H */