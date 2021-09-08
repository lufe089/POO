#ifndef ClassB_H
#define ClassB_H

#include <iostream>

using std::cout;

class ClassB : public ClassA
{
private:
    int atributo1b;

public:
    ClassB();
    void metodoB();
};

#endif // ClassB_H
