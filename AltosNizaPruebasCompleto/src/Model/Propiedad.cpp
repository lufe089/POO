#include "Propiedad.h"

Propiedad::Propiedad(){

}

Propiedad::Propiedad(int id, int piso, float area, bool parqueadero){
    this->id = id;
    this->piso = piso;
    this->area = area;
    this->parqueadero = parqueadero;
}

float Propiedad::calcPagoAdmin(int valorAdministracion){
    return (2000 * this->piso) + (valorAdministracion * 0,05 * (this->area > 150 ? 1 : 0)) + valorAdministracion;
}


bool Propiedad::getParqueadero(){
    return this->parqueadero;
}

void Propiedad::setParqueadero(bool parqueadero){}
int Propiedad::getId(){}

void Propiedad::setId(int id){}

int Propiedad::getPiso(){}

void Propiedad::setPiso(int piso){}

float Propiedad::getArea(){}

void Propiedad::setArea(float area){}