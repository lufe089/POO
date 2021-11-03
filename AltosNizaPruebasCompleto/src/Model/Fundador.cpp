#include "Fundador.h"

Fundador::Fundador(string nombre, int id, Propiedad propiedad){
    this->nombre = nombre;
    this->id = id;
    this->propiedad = propiedad;
}

void Fundador::mostrarBeneficios(){
    cout << "1. Derecho a usar el salón social de manera gratuita." << endl 
        << "2. Descuento del 1 para la compra de productos en la tienda del edificio." << endl;
}
