#include <iostream>
#include "Veterinaria.h"

using std::cout;
using std::cin;
using std::string;

void menu(Veterinaria &veterinaria) {
    int opc = 0;
    do {
        cout << "\n" << "BIENVENIDOS Al parcial de VETERINARIA\n";
        cout << "1. Agregar propietario \n";
        cout << "0. Salir\n";
        cout << "opc: ";
        cin >> opc;
        cout << "\n";
        switch (opc) {
            case 1:
                veterinaria.agregarPropietario();
            default:
                break;
        }
    } while (opc != 0);
    cout << "Muchas Gracias Por Usar Nuestro Veterinaria, Vuelva Pronto!!!\n";
}

int main() {
    Veterinaria veterinaria;
    menu(veterinaria);
    return 0;
}
