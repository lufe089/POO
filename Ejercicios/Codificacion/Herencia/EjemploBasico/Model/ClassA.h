#ifndef ClassA_H
#define ClassA_H

#include <iostream>

using std::cout;

class ClassA
{
private:
    int atributoPepito;

protected:
    int atributo2a;

public:
    ClassA();
    void metodoA();
    virtual void mostrar();
};
#endif // ClassA_H
