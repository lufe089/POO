#include "controladorrobots.h"

ControladorRobots::ControladorRobots()
{
    //ctor
}
void ControladorRobots::agregarRobot(Robot nuevoRobot){
    this->inventarioRobots.push_back(nuevoRobot);

}
void ControladorRobots::ampliarVidaRobotPosicion(int cantidadVida, int posicion){
    if (this->inventarioRobots.size() > posicion){ // Existe la posicion
        this->inventarioRobots.at(posicion).incrementarPuntosVida(cantidadVida);
    }else{
        cout << "No existe esa posicion\n";
    }
}

void ControladorRobots::descargarRobot(int posicion){

    if (this->inventarioRobots.size() > posicion){ // Existe la posicion
        this->inventarioRobots.at(posicion).descargar();
    }else{
        cout << "No existe esa posicion\n";
    }

}

void ControladorRobots::mostrarRobots(){
    for(int i =0; i<this->inventarioRobots.size();i++){
        cout << "Robot en posicion " << i << "  vida: " << inventarioRobots.at(i).getPuntosVida() << endl;
    }
}
