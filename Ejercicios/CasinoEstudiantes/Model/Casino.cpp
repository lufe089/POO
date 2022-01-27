//
// Created by lufe0 on 7/05/2021.
//

#include "Casino.h"

// Constructor que inicializa las ganancias y perdidas en cero
Casino::Casino() {
    cout << "Inicialice casino";
    // Inicia un jugador en el mapa para comenzar
    jugadoresMap.insert({1,new Jugador(1,"Pedro rodriguez", 500)});

    // Inicia  los juegos disponibles y los agrega al mapa de juegos
    Mayor13 * juego1 = new Mayor13();
    juegosDisponibles.push_back(juego1);
    DosColores * juego2 = new DosColores();
    juegosDisponibles.push_back(juego2);

    // Agregar aqui los demas juegos
}

void Casino::agregarJugador(long id, string nombreJugador, double dinero) {
    // Se agrega jugador solo si no existe con anticipacion

    // Se convierte el dinero a Gonzos

    // Se agrega el jugador al mapa de jugadores del casino
    // Se lanza una excepcion de tipo domain-error si el usuario con ese id ya existe
    throw std::logic_error("Metodo por implementar");
}

bool Casino::jugar(int idJuego, long idJugador, float gonzosApostar) {
    if (gonzosApostar < 1 ){
        throw std::domain_error("Debe apostar al menos 1 gonzo\n");
    }

    if (verExisteJugador(idJugador) == false){
        throw std::domain_error("El jugador con la identificacion recibida NO existe, no es posible jugar\n");
    }
    if (idJuego > juegosDisponibles.size()){
        throw std::domain_error("NO existe el juego que desea jugar\n");
    }
    if (verPuedeContinuar(idJugador, gonzosApostar)== false){
        throw std::domain_error("No tienes saldo suficiente para jugar\n");
    }

    throw std::logic_error("Metodo incompleto");
    // Retorna verdadero si el jugador ganó y false si el jugador perdio
    return false;
}

void Casino::verInfoJugador(long idJugador){
    throw std::logic_error("Metodo por implementar");
}

bool Casino::verPuedeContinuar(int idJugador, float gonzosApostar) {
    throw std::logic_error("Metodo por implementar");

}

void Casino::retirarJugador(long idJugador) {
    throw std::logic_error("Metodo por implementar");

}

void Casino::recargarGonzos(long idJugador) {
    throw std::logic_error("Metodo por implementar");
}



bool Casino::verExisteJugador(long id) {

    throw std::logic_error("Metodo por implementar");
}

double Casino::convertirPesosAGonzos(double dinero) {
    return (dinero / 100);
}


Casino::~Casino() {
    cout << "Llame al destructor de casino \n";
    // Se libera la memoria del jugadores y de juegos
    for(map<long, Jugador*>::iterator it = jugadoresMap.begin(); it != jugadoresMap.end(); it++)
    {
        Jugador * jugadorTemp = jugadoresMap[it->first];
        delete jugadorTemp;
    }

    for(int i=0; i< juegosDisponibles.size(); i++)
    {
        Juego * juegoTemp = juegosDisponibles.at(i);
        delete juegoTemp;
    }
}