/*
Objetivo de la Clase:Presentar el medio por el cual se procedera a realizar las operaciones relacionadas al directorio de Propietarios y Mascotas
                     
Proposito Comun Metodos: Es la clase que facilita las acciones y metodos para desarrollar los metodos solicitados para completar
                         lo dispuesto en peticiones de acciones y metodos a realizar.
*/
#ifndef SISTEMA_H
#define SISTEMA_H

//Inclusion librerias a utilizar y archivos .h a utilizar
#include <iostream>
#include <vector> //Usado por vector

#include "Propietario.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;

class Veterinaria {
private:
    vector<Propietario *> propietarios;

    void inicializarDatos(); // Útil para iniciar el sistema con datos de prueba
public:
    //Constructores
    Veterinaria();

//Constructor por default
    //Metodos Programa
    void agregarPropietario();

    void agregarMascotaAPropietario();

    const vector<Propietario *> &getPropietarios() const;

    void setPropietarios(const vector<Propietario *> &propietarios);


};

#endif