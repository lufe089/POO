//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

float DosColores::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = 1+rand()%6;// numeros de 1 a 13
    numeroCasino = 1+rand()%6;// numeros de 1 a 13
    colorCasino = rand()%2; // Numero entre 0 y 1
    cout << "Tu numero aleatorio es: "<< numeroJugador << endl;
    cout << "Elije un color: " << endl;
    cout << "1. Blanco" << endl;
    cout << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador; // Se ajusta el valor del color
    cout << "Numero casino: "<< numeroCasino << endl;
    cout << "Color casino: ";
    if(colorCasino == 0)
    {
        cout << "Blanco." << endl;
    }
    else
    {
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if(numeroJugador == numeroCasino && colorJugador == colorCasino)
    {
        return 4 * gonzosApostar;
    }
    // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if(numeroJugador == numeroCasino)
    {
        return 1.5 * gonzosApostar;
    }
    // no gana ni pierde
    else if(colorJugador == colorCasino)
    {
        return gonzosApostar;
    }
     // pierde todo lo apostado
    else
    {
        return 0;
    }
}

DosColores::~DosColores() {

}
