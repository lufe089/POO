#include "ClassA.h"

ClassA::ClassA()
    : atributo1a(100),
      atributo2a(101)
{
    cout << "*** Constructor clase A \n";
}

void ClassA::metodoA()
{
    cout << "Solo clase A: Yo como clase A defini " << atributo1a << "--"
         << atributo2a << "\n";
}
