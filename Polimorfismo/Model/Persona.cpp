#include "Persona.h"

Persona::Persona()
{
}

Persona::Persona(string nombreCompleto, string documento, string username)
    : nombreCompleto(nombreCompleto),
      documento(documento),
      username(username)
{
}

void Persona::mostrar()
{
    cout << "Soy una persona \n";
}

float Persona::pagarParqueadero()
{
    // TODO
    return 0;
}
