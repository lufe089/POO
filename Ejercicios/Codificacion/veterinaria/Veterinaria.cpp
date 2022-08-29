
#include <vector>
#include "Veterinaria.h"

Veterinaria::Veterinaria() {}

void Veterinaria::inicializarDatos() {
    // TODO Ponga aqui datos de prueba

}

void Veterinaria::agregarPropietario() {
    cout << "Agregare un propietario \n";
    //FIXME
}

void Veterinaria::agregarMascotaAPropietario() {
    //ToDO
}

const std::vector<Propietario *> &Veterinaria::getPropietarios() const {
    return propietarios;
}

void Veterinaria::setPropietarios(const std::vector<Propietario *> &propietarios) {
    Veterinaria::propietarios = propietarios;
}
