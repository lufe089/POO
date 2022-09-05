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
    CuartoUtil(string & numeracion, int piso, bool estaTerminado);

    void mostrarDatos();

    const string &getNumeracion() const;

    void setNumeracion(const string &numeracion);

    int getPiso() const;

    void setPiso(int piso);

    bool isEstaTerminado() const;

    void setEstaTerminado(bool estaTerminado);

};


#endif //TORRESCLION_CUARTOUTIL_H
