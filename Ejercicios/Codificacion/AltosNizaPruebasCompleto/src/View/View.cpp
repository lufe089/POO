#include "View.h"

View::View(){
    
}

void View::mostrarMenu(){
    int opcion, id;
    do{
        cout << "Menu:" << endl
            << "1. Imprimir Recaudo Admin." << endl
            << "2. Imprimir Beneficios." << endl
            << "3. Imprimir propietarios con parqueadero." << endl
            << "4. Cambiar tipo de propietario." << endl
            << "0. Salir." << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
                edificio.recaudarAdmin();
                break;
            case 2:
                cout << "Escriba la id del propietario: ";
                cin >> id;
                edificio.mostrarBeneficios(id);
                break;
            case 3:
                edificio.mostrarPropParqueadero();
                break;
            case 4:
                int idFundador, idReventa;
                string nombrePropReventa;
                cout << "Escriba la id del propietario que va a vender: ";
                cin >> idFundador;
                cout << "Escriba la id del nuevo propietario: ";
                cin >> idReventa;
                cout << "Escriba el nombre del nuevo propietario: ";
                // cin.getline(nombrePropReventa);
                edificio.cambiarTipoPropietario(idFundador, idReventa,nombrePropReventa);
                break;
        }
    }while(opcion);
}