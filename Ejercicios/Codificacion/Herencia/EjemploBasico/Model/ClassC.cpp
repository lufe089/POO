#include "ClassC.h"

ClassC::ClassC()
    : atributo1c(1000)
{
    cout << "*** Constructor C \n";
}

void ClassC::metodoC()
{

    cout << "METODOC: Yo como clase C defini " << atributo1c << " --"
         << "Herede de clase A"
         << "--"
         << atributo2a << "\n";
}