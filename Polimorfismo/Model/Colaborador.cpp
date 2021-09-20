#include "Colaborador.h"

Colaborador::Colaborador(string nombreCompleto, string documento, string username, string cargo, float salarioActual)
    : Persona(nombreCompleto, documento, username),
      cargo(cargo),
      salarioActual(salarioActual)
{
}

void Colaborador::mostrar()
{
    cout << "Soy un colaborador \n";
}

void Colaborador::incrementarSalario(float porcentaje)
{
    // Incrementa el salario en
}

float Colaborador::pagarParqueadero()
{
    // TODO
    return 0;
}
