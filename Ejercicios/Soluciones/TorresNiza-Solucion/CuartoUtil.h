//
// Created by maria jose pava on 25/08/22.
//

#ifndef TORRESCLION_CUARTOUTIL_H
#define TORRESCLION_CUARTOUTIL_H

#include <iostream>

using std::cin;
using std::cout;
using std::string;


class CuartoUtil {
private:
    string numeracion;
    int piso;
    bool estaTerminado;

    string imprimirInfoEstadoCuarto(); // Privado pq es de uso interno de la clase

public:
    CuartoUtil();                                // El contructor x defecto
    CuartoUtil(string numeracion, int piso, bool estaTerminado);

    void mostrarDatos();

    string getNumeracion() const;

    void setNumeracion(string numeracion);

    int getPiso() const;

    void setPiso(int piso);

    bool getEstaTerminado() const;

    void setEstaTerminado(bool estaTerminado);
};


#endif //TORRESCLION_CUARTOUTIL_H
