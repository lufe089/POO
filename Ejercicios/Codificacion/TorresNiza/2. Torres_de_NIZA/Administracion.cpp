#include <iostream>
#include "Administracion.h"

void Administracion::inicializarDatos()
{
    Propietario propiet1, propiet2, propiet3, propiet4;
    Propiedad prop1, prop2, prop3, prop4;

    propiet1.setNombre("Debora Vilar");
    propiet1.setIdentificacion(20202492);
    propiet2.setNombre("Ignacio Rodríguez");
    propiet2.setIdentificacion(30458452);
    propiet3.setNombre("Erika Muñoz");
    propiet3.setIdentificacion(1058845781);
    propiet4.setNombre("Modesto Villaverde");
    propiet4.setIdentificacion(31321432);

    prop1.setnumIdentificacion(101);
    prop1.setAreaProp(160);
    prop1.setParqueadero(true);
    prop1.setPiso(10);
    propiet1.setPropiedad(prop1); // Aun no estamos usando Apuntadores

    prop2.setnumIdentificacion(901);
    prop2.setAreaProp(30);
    prop2.setParqueadero(false);
    prop2.setPiso(9);
    propiet2.setPropiedad(prop2);

    prop3.setnumIdentificacion(701);
    prop3.setAreaProp(45);
    prop3.setParqueadero(true);
    prop3.setPiso(7);
    propiet3.setPropiedad(prop3);

    prop4.setnumIdentificacion(502);
    prop4.setAreaProp(60);
    prop4.setParqueadero(false);
    prop4.setPiso(5);
    propiet4.setPropiedad(prop4);

    // Incluir los propietarios en el vector
    propietarios.push_back(propiet1);
    propietarios.push_back(propiet2);
    propietarios.push_back(propiet3);
    propietarios.push_back(propiet4);
}

void Administracion::imprimirUnPropietario()
{
}

void Administracion::imprimirPropietarios()
{
    // Recorrer el arreglo e imprimir todos los propietarios
    for (int i = 0; i < propietarios.size(); i++)
    {
        propietarios[i].mostrarDatosPropietario();
    }
}

void Administracion::imprimirPropietariosConParqueadero()
{
    // Recorrer el arreglo e imprimir todos los propietarios que tienen parqueadero.
}

void Administracion::recaudarAdministracion()
{
}
