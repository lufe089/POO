#ifndef VIEW_H
// Guardas

/* Mostrar menua y validar datos de entrada */
#include "../Model/ClassA.h"
#include "../Model/ClassB.h"
#include "../Model/ClassC.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class View
{
private:
public:
    int mostrarMenu();
    void verPrincipal();

    void probarClassB();

    void probarClassA();

    void probarClassC();

    void combinarReferencias();
};
#endif
//#define