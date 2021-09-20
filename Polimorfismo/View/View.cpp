#include "View.h"

//FUNCIONES DEL PROGRAMA

int View::mostrarMenu()
{
    int opcion;
    cout << "Menu\n"
         << std::endl;
    cout << "1. MostrarUsuarios" << std::endl;
    cout << "2. RecaudarCobro Parqueadero" << std::endl;
    cout << "0. Salir\n"
         << std::endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

void View::verPrincipal()
{
    int opcion;
    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
        case 1:
            universidadObj.mostrarUsuarios();
            break;
        case 2:
            universidadObj.calcularRecaudoParqueadero();
            break;
        }
    } while (opcion != 0);
}