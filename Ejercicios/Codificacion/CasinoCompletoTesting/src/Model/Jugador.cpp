//
// Created by lufe0 on 7/05/2021.
//

#include "Jugador.h"

Jugador::Jugador()
          :cantJuegos(0)
{
}
// Hace llamada delegada al constructor por defecto
Jugador::Jugador(long id, string nombre, float cantGonzos): Jugador() {
    this->id = id;
    this->nombre = nombre;
    this->cantGonzos = cantGonzos;
}


/* Destructor*/
Jugador::~Jugador()
{
 cout << "llame al destructor del jugador " << id << "\n";
}

void Jugador::mostrarInfo() {

    // Muestra el nombre , la cantidad de gonzos,  la cantidad de juegos jugados
    cout << "Nombre del jugador: " << this->nombre << endl;
    cout << "Gonzos: " << this->cantGonzos << endl;
    cout << "Juegos jugados: " << this->cantJuegos << endl;
}

void Jugador::aumentarJuegos() {
    // Incrementa la cantidad de juegos que ha jugado el jugador
    ++this->cantJuegos;
}

void Jugador::actualizarGonzos(float nuevosGonzos) {
   // Le aumenta a los gonzos existentes los gonzos que se reciben
    this->cantGonzos += nuevosGonzos;
}

const string &Jugador::getNombre() const {
    return nombre;
}

float Jugador::getCantGonzos() const {
    return cantGonzos;
}

long Jugador::getId() const {
    return id;
}






