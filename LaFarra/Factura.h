#ifndef FACTURA_H
//Guardas
#define FACTURA_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "DetalleFactura.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Factura
{
private: //Atributos
	int cod;
	string fecha;
	float valorPagarSinIVA;
	float valorTotalIVA;
	float valorTotal;
	vector<DetalleFactura> detalles;

public:		   //Metodos
	Factura(); //Constructor

	// Adiciona información que detalla un producto vendido, su cantidad y valor a pagar
	void agregarDetalle(DetalleFactura detalle);

	/* Presenta toda la información de la factura de forma grafica */
	void mostrarFactura();

	// Gets and sets
	float getValorTotal();
	void setValorTotal(float valorTotal);
	float getValorPagarSinIVA();
	void setValorPagarSinIVA(float valorPagarSinIVA);
	float getvalorTotalIVA();
	void setValorTotalIVA(float valorTotalIVA);
	int getCod();
	void setCod(int cod);
	string getFecha();
	void setFecha(string fecha);

	vector<DetalleFactura> getDetalles() const { return detalles; }
};
#endif /* !FACTURA_H */
