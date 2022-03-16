#include <iostream>
#include "Administracion.h"

Administracion::Administracion()
{

    cout << "Entre al constructor de administracion \n";
    cobroAscensor = 2000;
    cobroBase = 50000;
    recargo = 0.05;
    contIds = 1; // Un incremental automatico de ids de propiedades
    inicializarDatos();

    cout << "Terminé la inicializacion \n";
}

void Administracion::inicializarDatos()
{
    Propietario propiet1, propiet2, propiet3, propiet4;
    Propiedad prop1, prop2, prop3, prop4; // Automaticamente al constructor x defecto

    Propiedad prop5(contIds++); // Llamo al constructor con parametros

    // Inicializo propietarios
    propiet1.setNombre("Debora Vilar");
    propiet1.setIdentificacion(20202492);
    propiet2.setNombre("Ignacio Rodríguez");
    propiet2.setIdentificacion(30458452);
    propiet3.setNombre("Erika Muñoz");
    propiet3.setIdentificacion(1058845781);
    propiet4.setNombre("Modesto Villaverde");
    propiet4.setIdentificacion(31321432);

    // Inicializo propiedades
    prop1.setnumIdentificacion(contIds++);
    prop1.setAreaProp(160);
    prop1.setParqueadero(true);
    prop1.setPiso(10);

    prop2.setnumIdentificacion(contIds++);
    prop2.setAreaProp(30);
    prop2.setParqueadero(false);
    prop2.setPiso(9);

    prop3.setnumIdentificacion(contIds++);
    prop3.setAreaProp(45);
    prop3.setParqueadero(true);
    prop3.setPiso(7);

    prop4.setnumIdentificacion(contIds++);
    prop4.setAreaProp(60);
    prop4.setParqueadero(false);
    prop4.setPiso(5);

    // Incluir los propietarios en el vector
    propietarios.push_back(propiet1);
    propietarios.push_back(propiet2);
    propietarios.push_back(propiet3);
    propietarios.push_back(propiet4);

    // Incluir propiedes en el vector
    propiedades.push_back(prop1);
    propiedades.push_back(prop2);
    propiedades.push_back(prop3);
    propiedades.push_back(prop4);
    propiedades.push_back(prop5);

    // Unir propiedades con propietarios
    // AL propietario 1 con la propiedad 1 y 2
    PropiedadxPropietario obje1(propiet1, prop1, 1);
    PropiedadxPropietario obje2(propiet1, prop2, 2);
    propiedadesxPropietarios.push_back(obje1);
    propiedadesxPropietarios.push_back(obje2);
}

void Administracion::llenarPropiedades()
{
    /*int piso;
    float area;
    bool parquadero
            cout
        << "INDique el piso \n";
    cin >> piso;
    cout << "INDique el area \n";
    cin >> area;
    cout << "INDique 1 parqueadero 0 no parqueadero\n";
    cin >> parquadero;
    Propiedad propTemp(piso, contIds++, parquadero, area);
    propTemp.mostrarDatosPropiedad();
    propiedades.push_back(propTemp);
    return propTemp;*/
}

/* Cambia pq necesita el id del propietario a consultar */
/* Se debe ajustar el .h y el diagrama de clase */
void Administracion::imprimirUnPropietario(double id)
{
    // Vamos a buscar si un propietario dado esta o no esta en el vector primero
    for (int i = 0; i < propietarios.size(); i++)
    {
        if (propietarios[i].getIdentificacion() == id)
        {
            propietarios[i].mostrarDatosPropietario();
        }
    }
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
    for (int i = 0; i < propiedadesxPropietarios.size(); i++)
    {
        // Se puede escribir también así:
        // propiedadesxPropietarios[i].getPropiedad().getParqueadero()
        if (propiedadesxPropietarios[i].getPropiedad().getParqueadero() == true)
        {
            propiedadesxPropietarios[i].getPropietario().mostrarDatosPropietario();
            propiedadesxPropietarios[i].getPropiedad().mostrarDatosPropiedad();
        }
    }
}

void Administracion::recaudarAdministracion()
{
    for (int i = 0; i < propiedadesxPropietarios.size(); i++)
    {
        // Recorre la union de las propieades x propietarios y
        if (propiedadesxPropietarios[i].getPropiedad().getParqueadero() == true)
        {
            propiedadesxPropietarios[i].getPropietario().mostrarDatosPropietario();
            propiedadesxPropietarios[i].getPropiedad().mostrarDatosPropiedad();
        }
    }
}
