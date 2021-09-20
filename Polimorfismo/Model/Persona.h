#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Persona
{
protected:
    string nombreCompleto;
    string documento;
    string username;

public:
    Persona();
    Persona(string nombreCompleto, string documento, string username);
    void mostrar();
    float pagarParqueadero();
};

#endif // PERSONA_H
