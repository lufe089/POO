#include "Universidad.h"

Universidad::Universidad()
{
    personas.push_back(Colaborador("Luisa Rincon", "1112245", "lfrincon", "Profesora", 10000));
    personas.push_back(Colaborador("Gerado Sarria", "222222", "lfrincon", "Profesora", 20000));
    personas.push_back(Estudiante("Manuel zapata", "5555", "mzapata", 4.5, "Ing civil"));
}

void Universidad::calcularRecaudoParqueadero()
{
    // TODO Itera el vector de personas y suma el valor a pagar del parqueadero. Al final muestra el mensaje del valor a pagar.
}

void Universidad::mostrarUsuarios()
{
    for (vector<Persona>::iterator pPersona = personas.begin();
         pPersona != personas.end(); pPersona++)
    {
        pPersona->mostrar();
    }
}
