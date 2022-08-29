#include <iostream>
#include "Propietario.h"

//FIXME Agregue todo lo que necesite para dar respuesta a la solicitud del enunciado

Propietario::Propietario() {
    this->idProp = 0;
    this->nombreProp = "";
    this->email = "";
    this->telefono = "";
}


void Propietario::mostrarDatosPropietario() {
    //TODO completar
}


const string &Propietario::getNombreProp() const {
    return nombreProp;
}

void Propietario::setNombreProp(const string &nombreProp) {
    Propietario::nombreProp = nombreProp;
}

const string &Propietario::getEmail() const {
    return email;
}

void Propietario::setEmail(const string &email) {
    Propietario::email = email;
}


long Propietario::getIdProp() const {
    return idProp;
}

void Propietario::setIdProp(long idProp) {
    Propietario::idProp = idProp;
}

const string &Propietario::getTelefono() const {
    return telefono;
}

void Propietario::setTelefono(const string &telefono) {
    Propietario::telefono = telefono;
}
