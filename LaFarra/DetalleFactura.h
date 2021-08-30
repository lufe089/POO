#ifndef DETALLEFACTURA_H
#define DETALLEFACTURA_H

#include <iostream>
#include <stdlib.h>
#include "Producto.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class DetalleFactura
{
private: //Atributos
	Producto producto;
	int cantUnidVend;
	float valorPagarSinIVA;
	float valorTotalIVA;
	float valorTotal;

public:				  //Metodos
	DetalleFactura(); //Constructor
	DetalleFactura(Producto producto, int cantUnidVend, float valorPagarSinIVA, float valorTotalIVA, float valorTotal);
	void mostrarDetalle();

	// Gets and sets
	Producto getProducto();
	void serProducto(Producto producto);
	float getValorTotal();
	void setValorTotal(float valorTotal);
	float getValorPagarSinIVA();
	void setValorPagarSinIVA(float valorPagarSinIVA);
	float getvalorTotalIVA();
	void setValorTotalIVA(float valorTotalIVA);
	int getCantUnidVend();
	void setCantUnidVend(int cantUnidVend);
};

#endif // DETALLEFACTURA_H
