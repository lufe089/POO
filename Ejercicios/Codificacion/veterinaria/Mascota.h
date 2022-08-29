#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using std::cout;
using std::string;

//FIXME Agregue todo lo que necesite para dar respuesta a la solicitud del enunciado

class Mascota {
private:
    string nombre;
    string raza;
    string tipo;
    double peso;
    long idMascota;
public:
    long getIdMascota() const;

    void setIdMascota(long idMascota);

public:
    //Constructores
    Mascota(); //Constructor por default
    //Metodos Programa

    const string &getNombreMasc() const;

    void setNombreMasc(const string &nombreMasc);

    const string &getRaza() const;

    void setRaza(const string &raza);

    const string &getTipo() const;

    void setTipo(const string &tipo);

    double getPeso() const;

    void setPeso(double peso);

    double getIdMasc() const;

    void setIdMasc(double idMasc);

    void mostrarDatosMascota();
};

#endif