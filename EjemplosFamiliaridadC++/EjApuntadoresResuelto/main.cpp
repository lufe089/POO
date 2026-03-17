#include <iostream>

#include "robot.h"
#include "controladorrobots.h"
using std::cout;
using std::endl;
using std::cin;

// Se supone que esta función cura al robot
void repararRobot(Robot robotObj) {
    robotObj.incrementarPuntosVida(100);
    cout << "[DENTRO DE LA FUNCION]: Puntos de vida: " << robotObj.getPuntosVida() << endl;
}


void mostrarMenu(){
    ControladorRobots fabricaRobots;

    int opc = 0;

    do{
        cout <<"\n\nOpc1: Agregar robot\n";
        cout <<"Opc2: Agregar vida al robot de una posicion\n";
        cout << "Opc3 MostrarRobots\n";
        cout << "Opc4 DescargarRobot de una posicion\n";
        cout << "-1 salir";
        cout << "Escoja la opcion";
        cin >> opc;

        switch(opc){

            case 1: cout << "Agregando un robot nuevo con vida\n";
                    Robot nuevoRobot;
                    nuevoRobot.setPuntosVida(500);
                    fabricaRobots.agregarRobot(&nuevoRobot);
                    cout << "Descargando el robot creado\n";
                    nuevoRobot.descargar();
                    break;
            case 2: cout << "Recargando 10000 de vida de robot en posicion 0\n";
                    fabricaRobots.ampliarVidaRobotPosicion(1000, 0);
                    break;
            case 3:  cout << "Mostrando robots \n";
                    fabricaRobots.mostrarRobots();
                    break;
            case 4:   cout << "Descargando el robot de la primera posicion\n";
                    fabricaRobots.descargarRobot(0);
                    break;

        }


    }while(opc!=-1);

}

int main()
{
    Robot arturito;

    cout << "[ANTES]: Vida de arturito: " << arturito.getPuntosVida() << endl;

    repararRobot(arturito);

    cout << "[DESPUÉS]: Vida de arturito: " << arturito.getPuntosVida() << endl;
    mostrarMenu();

    return 0;
}
