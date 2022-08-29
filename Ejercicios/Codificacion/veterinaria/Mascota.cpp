#include "Mascota.h"


Mascota::Mascota() {
    this->nombre = "";
    this->idMasc = 0;
    this->raza = "";
    this->edad = 0;
    this->tipo = "";
    this->peso = 0;
}

void Mascota::mostrarDatosMascota() {
    //TODO Implementarlo
}


const string &Mascota::getNombreMasc() const {
    return nombre;
}

void Mascota::setNombreMasc(const string &nombreMasc) {
    Mascota::nombre = nombreMasc;
}

const string &Mascota::getRaza() const {
    return raza;
}

void Mascota::setRaza(const string &raza) {
    Mascota::raza = raza;
}

const string &Mascota::getTipo() const {
    return tipo;
}

void Mascota::setTipo(const string &tipo) {
    Mascota::tipo = tipo;
}

double Mascota::getPeso() const {
    return peso;
}

void Mascota::setPeso(double peso) {
    Mascota::peso = peso;
}

long Mascota::getIdMascota() const {
    return idMascota;
}

void Mascota::setIdMascota(long idMascota) {
    Mascota::idMascota = idMascota;
}
