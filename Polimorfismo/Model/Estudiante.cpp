#include "Estudiante.h"

Estudiante::Estudiante(string nombreCompleto, string documento, string username, float promedioAcumulado, string carrera)
    : Persona(nombreCompleto, documento, username),
      promedioAcumulado(promedioAcumulado),
      carrera(carrera)
{
}

Estudiante::Estudiante()
    : Persona()
{
}

void Estudiante::mostrar()
{
    cout << "Soy un estudiante \n";
}

bool Estudiante::estaEnPrueba()
{
    // TODO
    return false;
}

float Estudiante::pagarParqueadero()
{
    // TODO
    //   El valor a retornar es 100 pesos
    return 0;
}
