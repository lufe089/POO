#ifndef TIPOPRODUCTO_H
//Guardas
#define TIPOPRODUCTO_H

#include <iostream>
#include <stdlib.h>

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class TipoProducto
{
private: //Atributos
	string nombre;
	float iva;

public:				//Metodos
	TipoProducto(); //Constructor
	TipoProducto(string nombre, float iva);
	// Gets and sets
	float getIva();
	void setIva(float iva);
	string getNombre();
	void setNombre(string nombre);
};
#endif /* !TIPOPRODUCTO_H */