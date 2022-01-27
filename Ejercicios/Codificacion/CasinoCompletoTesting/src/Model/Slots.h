#ifndef CASINO_SLOTS_H
#define CASINO_SLOTS_H

/*
Slots es un juego en el que una maquina escoge aleatoriamente 3 simbolos (en algunos
modelos son 5). Si caen los 3 simbolos iguales o alguna combinación especial el jugador
ganará cierta cantidad, de lo contrario perdera todo lo apostado.

En esta versión de Slots se generaran 3 numeros entre 1 y 7. Si caen los 3 numeros
iguales el jugador ganará el doble de lo apostado, si consigue una escalera (numeros
sucesivos sea ascendente o descendente) ganará la mitad de lo apostado. Si llega
a conseguir el triple 7 ganará 7 veces lo apostado. Si no consigue ninguna perderá 
todo lo apostado.
*/
#include "Juego.h"
#include<cstdlib>
#include<ctime>

class Slots : public Juego {

protected:
    virtual float calcularResultado(float gonzosApostar) override;
    int slot1, slot2, slot3;
public:
    virtual ~Slots();
    virtual float jugar(float gonzosApostar) override;

};


#endif //CASINO_SLOTS_H
