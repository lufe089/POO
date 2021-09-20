#ifndef VIEW_H
#define VIEW_H
// Guardas

/* Mostrar menua y validar datos de entrada */
#include "../Model/Universidad.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class View
{
private:
    Universidad universidadObj;

public:
    int mostrarMenu();
    void verPrincipal();
    void mostrarUsuarios();
    void recaudarParqueadero();
};
#endif
//#define