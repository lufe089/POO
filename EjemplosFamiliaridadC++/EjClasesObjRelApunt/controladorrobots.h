#ifndef CONTROLADORROBOTS_H
#define CONTROLADORROBOTS_H

#include "robot.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

class ControladorRobots
{
    public:
        /** Default constructor */
        ControladorRobots();
        void agregarRobot(Robot nuevoRobot);
        void ampliarVidaRobotPosicion(int cantidadVida, int posicion);
        void descargarRobot(int posicion);
        void mostrarRobots();

    private:
        vector<Robot> inventarioRobots;
};

#endif // CONTROLADORROBOTS_H
