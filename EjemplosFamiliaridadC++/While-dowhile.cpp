/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// Recibir un entero que representa el dia de la semana e imprime que dia es 


void decidirDiaSemana(int dia){
    if (dia <1 || dia > 7) {
        std::cout << "ERROR: el día esta por fuera del rango \n";
    }
    else{
        switch (dia){
            case 1: std::cout << "Es lunes \n";
                    break;
                    
            case 2: std::cout << "Es Martes\n"; 
                    break; 
            case 3: std::cout << "Es miercoles\n";
                    break; 
            default: std::cout << "Es de jueves para arriba \n";
        }
    }    
}

void ejemploDoWhile(){
    bool usuarioRegistrado = false;
    do{
        std::cout << "Muestro contenido \n"; 
    } while (usuarioRegistrado);
    std::cout << "sali \n";
}

void ejemploWhile(){
    bool usuarioRegistrado = false;
    while(usuarioRegistrado){
        std::cout << "Muestro contenido \n"; 
    } 
    std::cout << "sali \n";
}

void mostrarOpciones(){
    int opcion;
    
    do{
        std::cout << "Bienvenido ... \n";
        std:: cout <<" Caso 1: Mostrar dia de la semana \n";
        std:: cout << "Caso 2: Sumar numeros pares\n";
        std:: cout << "Case 3: Ejemplo do while \n";
        std:: cout << "Case 4: Ejemplo while \n";
        std:: cout << "Escriba -1 para salir \n";
        std:: cout << "Ingresa una opcion\n";
        std:: cin >> opcion;
        
        switch (opcion){
            case 1: decidirDiaSemana(1);
                    break;
            case 2: std::cout << "NO esta todavia, lo siento \n";
                    break; 
            case 3: ejemploDoWhile();
                    break;
            case 4: ejemploWhile();
                    break;
            case -1: std::cout << "Hasta pronto \n"; break;
        }
    }
    while (opcion != -1); //Quiero que cuando sea menos uno se salga ---> mientras que NO sea menos uno quedese 
}


int main()
{
    int variable;
    int diaSemana = 2; 
    
    // std::cout << "Ingresa el dia de la semana\n";
    // std::cin >> diaSemana;
    mostrarOpciones();

    std::cout<<"Hello World";

    return 0;
}