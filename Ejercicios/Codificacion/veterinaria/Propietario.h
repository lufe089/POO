#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>

using std::cout;
using std::string;

class Propietario {
private:
    long idProp;
    string nombreProp;
    string email;
    string telefono;
public:
    //Constructores
    Propietario();

    //Metodos Programa
    void mostrarDatosPropietario();

    // Gets & Sets
    const string &getNombreProp() const;

    void setNombreProp(const string &nombreProp);

    const string &getEmail() const;

    void setEmail(const string &email);

    const string &getTelefono() const;

    void setTelefono(const string &telefono);

    long getIdProp() const;

    void setIdProp(long idProp);


};

#endif