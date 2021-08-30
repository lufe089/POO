#ifndef VIEW_H
//Guardas
#define VIEW_H

#include <iostream>
#include <stdlib.h>
#include "Tienda.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class View
{
private: //Atributos
	Tienda laFarra;
	void mostrarMenuReportes(); // Se accede desde el menu, por eso es privado

public:		//Metodos
	View(); //Constructor
	void mostrarMenu();
};
#endif /* !VIEW_H */