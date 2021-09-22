//
// Created by lufe0 on 7/05/2021.
//

#ifndef CASINO_JUGADOR_H
#define CASINO_JUGADOR_H
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Jugador
{
private: //atributos
    string nombre;
    long id;
    float cantGonzos;
    int cantJuegos;

public:
    Jugador();
    Jugador(long id, string nombre, float cantGonzos);
    ~Jugador(); // Destructor
    void aumentarJuegos();
    void mostrarInfo(); // Presenta información del diner, los gonzos, cantidad de juegos ganados y perdidos
    void actualizarGonzos(float nuevosGonzos);
    long getId() const;
    const string &getNombre() const;
    float getCantGonzos() const;
};
#endif //CASINO_JUGADOR_H
