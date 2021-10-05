#include "View.h"

//FUNCIONES DEL PROGRAMA

void View ::combinarReferencias()
{
    // Objeto derivado asignado a objeto de tipo padre
    ClassA classAObj;
    ClassB classBObj;
    ClassC classCObj;

    // Apuntadores
    ClassB *pPadre;
    ClassC *pHijo;

    pPadre = &classBObj;
    pPadre->metodoA(); // Funciona pero llama la del padre

    // NO funciona-> solo se pueden acceder a métodos
    // de la misma referencia
    // pPadre = &hijoObj;
    // pPadre->probarHijo();

    // Objeto padre asignado a objeto de tipo hijo
    /* Error: a value of type "ClassA *" cannot be used 
    to initialize an entity of type "Hijo *"C/C++(144) */
    // pHijo = padreObj;
}

void View::probarPolimorfimo(){

    vector<ClassA*> miVector;
    miVector.push_back(new ClassA());
    miVector.push_back(new ClassB());
    miVector.push_back(new ClassC());

    for (int i=0; i<miVector.size(); i++){
        miVector[i]->mostrar();
    }

};

void View::probarClassC()
{
}

void View::probarClassB()
{
}

void View::probarClassA()
{
}

int View::mostrarMenu()
{
    int opcion;
    cout << "Menu\n"
         << std::endl;
    cout << "1. Probar class A" << std::endl;
    cout << "2. Probar class B" << std::endl;
    cout << "3. Probar class C" << std::endl;
    cout << "4. Pruebas combinadas" << std::endl;
    cout << "5. Probar polimorfimo \n";
    cout << "0. Salir\n"
         << std::endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

void View::verPrincipal()
{
    int opcion;
    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
        case 1:
            probarClassA();
            break;
        case 2:
            probarClassB();
            break;
        case 3:
            probarClassC();
            break;
        case 4:
            combinarReferencias();
            break;
            case 5:
                probarPolimorfimo();
                break;
        }
    } while (opcion != 0);
}