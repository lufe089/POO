#include <iostream>
#include "Administracion.h"

using std::cin;
using std::cout;
using std::string;

void menu(Administracion administracion)
{
    int opc = 0;
    do
    {
        cout << "Bienvenidos°°°°°    \n";
        cout << "1. Mostrar informacion \n";
        cout << "0. Salir \n";

        cin >> opc;

        switch (opc)
        {
        case 1:
            administracion.imprimirPropietarios();
            break;

        default:
            break;
        }
    } while (opc != 0);
}

int main()
{
    /*string nombre;
    cout << "Funciono, escribe tu nombre: ";
    cin >> nombre;
    cout << "Tu nombre es: " << nombre;*/
    Administracion administracion;

    // Inicializar datos
    administracion.inicializarDatos();
    menu(administracion);

    // TODO: Imprimir la informción de los propietarios que tengan parqueadero solamente
    // Decir cuantos propietarios tienen propiedades con parqueadero.
    return 0;
}