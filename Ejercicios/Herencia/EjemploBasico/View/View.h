#ifndef VIEW_H
#define VIEW_H
// Guardas

/* Mostrar menua y validar datos de entrada */
#include "../Model/ClassA.h"
#include "../Model/ClassB.h"
#include "../Model/ClassC.h"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class View
{
private:
public:
    int mostrarMenu();
    void verPrincipal();
    void probarPolimorfimo();

    void probarClassB();

    void probarClassA();

    void probarClassC();

    void combinarReferencias();
};
#endif
//#define