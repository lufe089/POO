#include "Slots.h"

float Slots::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    slot1 = 1+rand()%7;// numeros de 1 a 7
    slot2 = 1+rand()%7;// numeros de 1 a 7
    slot3 = 1+rand()%7;// numeros de 1 a 7
    cout << "Resultado slots: " << slot1 << " " << slot2 << " " << slot3 << endl;
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}


float Slots::calcularResultado(float gonzosApostar) {
    if(slot1 == slot2 && slot2 == slot3)
    {
        return 2 * gonzosApostar;
    }
    else if(slot1 == slot2 + 1 && slot2 == slot3 + 1)
    {
        return 1.5 * gonzosApostar;
    }
    else if(slot1 == slot2 - 1 && slot2 == slot3 - 1)
    {
        return 1.5 * gonzosApostar;
    }
    else if(slot1 == 7 && slot2 == 7 && slot3 == 7)
    {
        return 7 * gonzosApostar;
    }
    else
    {
        return 0;
    }
}

Slots::~Slots() {

}
