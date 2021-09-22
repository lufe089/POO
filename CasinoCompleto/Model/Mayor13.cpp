//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = 1+rand()%13;// numeros de 1 a 13
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;
    if(opcion == 1)
    {
        return 0.5 * gonzosApostar;
    }
    numeroCasino = 1+rand()%13;// numeros de 1 a 13
    cout << "Numero casino: " << numeroCasino << endl;
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}


float Mayor13::calcularResultado(float gonzosApostar) {
    if(numeroJugador > numeroCasino)
    {
        return 2 * gonzosApostar;
    }
    else
    {
        return 0;
    }
}

Mayor13::~Mayor13() {

}
