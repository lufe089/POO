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
}

void Casino::agregarJugador(long id, string nombreJugador, double dinero)
{
    // Se agrega jugador solo si no existe con anticipacion
    if (!verExisteJugador(id)){
        // Se convierte el dinero a Gonzos
        float cantGonzos = convertirPesosAGonzos(dinero);
        Jugador * pJugador = new Jugador (id, nombreJugador, cantGonzos);
        // Se agrega el jugador al mapa de jugadores del casino
        jugadoresMap.insert({pJugador->getId(), pJugador});

    }else {
        throw std::invalid_argument("El jugador con la identificacion recibida ya existe\n");
    }
}

bool Casino::jugar(int idJuego, long idJugador, float gonzosApostar) {
    if (gonzosApostar < 1 ){
        throw std::domain_error("Debe apostar al menos 1 gonzo\n");
    }

    if (!verExisteJugador(idJugador)){
        throw std::domain_error("El jugador con la identificacion recibida NO existe, no es posible jugar\n");
    }
    if (idJuego > juegosDisponibles.size()){
        throw std::domain_error("NO existe el juego que desea jugar\n");
    }
    if (verPuedeContinuar(idJugador, gonzosApostar)== false){
        throw std::domain_error("No tienes saldo suficiente para jugar\n");
    }
    // Si no hay errores se inicia el juego
    int posJuego = idJuego -1; // Se corrige la posicion para acceder al juego
    Juego * pJuegoAJugar = juegosDisponibles.at(idJuego-1);

    // Consulta al jugador, consulta los gonzos iniciales, juega y obtiene el resultado
    Jugador * pJugador = jugadoresMap[idJugador];
    float gonzosGanados = pJuegoAJugar->jugar(gonzosApostar) - gonzosApostar;
    // Actualiza el saldo del jugador con el resultado
    pJugador->actualizarGonzos(gonzosGanados);

    // Actualiza la cantidad de juegos jugados
    pJugador->aumentarJuegos();

    // Retorna verdadero si el jugador ganó y false si el jugador perdio
    return(gonzosGanados >= 0);
}

void Casino::verInfoJugador(long idJugador){
    // En teoría esta excepción no debería salir nunca pero se pone como táctica de programación segura.
    if (verExisteJugador(idJugador) == false){
        throw std::domain_error("El jugador con la identificacion recibida NO existe\n");
    }
    Jugador * pJugador = jugadoresMap[idJugador];
    pJugador->mostrarInfo();
}

bool Casino::verPuedeContinuar(int idJugador, float gonzosApostar) {
    // En teoría esta excepción no debería salir nunca pero se pone como táctica de programación segura.
    if (verExisteJugador(idJugador) == false) {
        throw std::domain_error("El jugador con la identificacion recibida NO existe");
    }
    Jugador *pJugador = jugadoresMap[idJugador];
    if (pJugador->getCantGonzos() < gonzosApostar) {
        return false;
    }
    return true;
}

void Casino::retirarJugador(long idJugador) {
    // Se obtiene el jugador
    Jugador * pJugador = jugadoresMap[idJugador];

    // Se limpia la memoria
    delete pJugador;
    // Se borra el apuntador del mapa
    jugadoresMap.erase(idJugador);

}

void Casino::recargarGonzos(long idJugador) {
    if (verExisteJugador(idJugador) == false){
        throw std::domain_error("El jugador con la identificacion recibida NO existe\n");
    }
    float dinero;
    Jugador * pJugador = jugadoresMap[idJugador];
    do{
        cout << "Ingrese la cantidad de dinero  a recargar: ";
        cin >> dinero;
    } while(dinero < 0);
    // Se convierte el dinero a gonzos
    float gonzos = convertirPesosAGonzos(dinero);

    pJugador->actualizarGonzos(gonzos);
}



bool Casino::verExisteJugador(long id) {

    // Si el jugador se encuentra en el mapa retorna true, de lo contrario retorna false
    for(map<long, Jugador*>::iterator it = jugadoresMap.begin(); it != jugadoresMap.end(); it++)
    {
        if(it->first == id)
        {
            return true;
        }
    }
    return false;
}

double Casino::convertirPesosAGonzos(double dinero) {
    return (dinero / 100);
}


Casino::~Casino() {
    // Se libera la memoria del jugadores y de juegos
    for(map<long, Jugador*>::iterator it = jugadoresMap.begin();
        it != jugadoresMap.end(); it++)
    {
        Jugador * jugadorTemp = jugadoresMap[it->first];
        delete jugadorTemp;
    }

    for(int i=0; i< juegosDisponibles.size(); i++)
    {
        Juego * juegoTemp = juegosDisponibles.at(i);
        delete juegoTemp;
    }
    cout << "Termine de llamar destructor de casino \n";
}