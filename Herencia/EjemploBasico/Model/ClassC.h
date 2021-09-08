#ifndef ClassC_H
#define ClassC_H

#include <iostream>
#include "ClassB.h"

using std::cout;

class ClassC : public ClassB
{
private:
    int atributo1c;

public:
    ClassC();
    void metodoC();
};

#endif // ClassC_H
