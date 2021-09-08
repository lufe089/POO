#include "ClassB.h"

ClassB::ClassB()
    : ClassA(),
      atributo1b(20)
{
    cout << "*** Constructor class B \n";
}

void ClassB::metodoB()
{
    cout << "Yo como claseB defini " << atributo1b << "\n";
    cout << "Yo como claseB herede" << atributo2a << "\n";
}
