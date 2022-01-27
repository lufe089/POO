#include "Propietario.h"

Propietario::Propietario(){

}

Propietario::Propietario(string nombre, int id, Propiedad &propiedad) : nombre(nombre), id(id),
                                                                                     propiedad(propiedad) {}

float Propietario::calcularPagoAdmin(int valor){
    return this->propiedad.calcPagoAdmin(valor);
}

string Propietario::getNombre(){
    return this->nombre;
}

Propiedad Propietario::getPropiedad(){
    return this->propiedad;
}