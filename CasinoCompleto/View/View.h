//
// Created by lufe0 on 7/05/2021.
//  Updated: Sept 22 - 2021
//

#ifndef CASINO_VIEW_H
#define CASINO_VIEW_H
#include "../Model/Casino.h"

class View
{
private:
    // Objeto de que se enlaza con la vista del casino
    Casino casino;
    // Privado pues son de uso interno
    int mostrarMenu();
    void jugarView();
    void agregarJugador();
    void retirarJugador();
    void mostrarJugador();
    void recargarGonzos();
public:
    View();
    void verPrincipal();
};

#endif //CASINO_VIEW_H
