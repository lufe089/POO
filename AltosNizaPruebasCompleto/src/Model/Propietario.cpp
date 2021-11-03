#include "Propietario.h"

Propietario::Propietario(){

}

float Propietario::calcularPagoAdmin(int valor){
    return this->propiedad.calcPagoAdmin(valor);
}

string Propietario::getNombre(){
    return this->nombre;
}

Propiedad Propietario::getPropiedad(){
    return this->propiedad;
}