#include "ClassA.h"

ClassA::ClassA()
    : atributoPepito(100),
      atributo2a(101)
{
    cout << "*** Constructor clase A \n";
}

void ClassA::metodoA()
{
    cout << "Solo clase A: Yo como clase A defini " << atributoPepito << "--"
         << atributo2a << "\n";
}

void ClassA::mostrar() {
    cout << "Soy A \n";
}