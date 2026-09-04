#include <iostream>
#include <vector>

void mostrarMatriz(std::vector<std::vector<int>> matriz){
    
    int tamFila = matriz.size();
    int tamCol = matriz.at(0).size();

    for(int i=0; i <tamFila; i++){
        for(int j=0; j < tamCol; j++){
            // std::cout << "Fila: " << i << ", Columna: " << j << " Valor: " << matriz.at(i).at(j);
            std::cout << matriz.at(i).at(j) << " ";
        }
        std::cout << "\n";
    }

}

int sumarMatriz(std::vector<std::vector<int>> matriz){
    int tamFila = matriz.size();
    int tamCol = matriz.at(0).size();
    int suma = 0; 
    for ( int i =0; i< tamFila; i++){
        for( int j= 0; j< tamCol; j++){
            suma = suma + matriz.at(i).at(j);
        }
    }
    return suma; 
}



void sumarMatrizXFila(std::vector<std::vector<int>> matriz){
    int tamFila = matriz.size();
    int tamCol = matriz.at(0).size();
    std::vector<int> resultadoSumas; 
    int suma = 0; 
    for ( int i =0; i< tamFila; i++){
        suma  = 0; 
        for( int j= 0; j< tamCol; j++){
            suma = suma + matriz.at(i).at(j);
        }
        
        // Guardo el resutado de la suma de la fila
        resultadoSumas.push_back(suma);
    }
    
    
    // Imprimo la suma por fila
    for (int i = 0; i< resultadoSumas.size(); i++){
        std::cout << "Para la fila " << i << "La suma es: " << resultadoSumas.at(i)<< "\n";
    }
    
}



void llenarMatriz(int tamFilas, int tamCols){
    
    std::vector<std::vector<int>> matriz;
    int valor; 
    
    // Creando el vector que controla las filas

    for(int i=0; i < tamFilas; i++){
        matriz.push_back(std::vector<int>());
        for(int j=0; j < tamCols; j++){
           std::cout << "Ingresa un numero en la fila [" << i << "] y columna [" << j << "]\n"; 
           std::cin >> valor;
           
           matriz.at(i).push_back(valor);
        }
        std::cout << "\n";
    }

    std::cout << "La matriz quedo asi\n"; 
    mostrarMatriz(matriz);
    
    std::cout << "La suma de la matriz es\n"; 
    int resultadoSuma = sumarMatriz(matriz);
    std::cout << "El resultado de la suma es " << resultadoSuma;
    
    
    std::cout << "Sumando x filas \n";
    sumarMatrizXFila(matriz);
    
}

void mostraReves(){

    // Este codigo inicializa la matriz;
    std::vector<std::vector<double>> matriz = {{-1,-10,-1000},{-5,-50,-5000}, {-6,-60,-6000}};
    
    int maxFilas =  matriz.size();
    int maxCols = matriz.at(0).size();
    
    for( int i = maxFilas-1; i>=0; i--){
        for(int j = maxCols-1; j>=0; j--){
            // std::cout << "Fila: " << i << ", Columna: " << j << " Valor: " << matriz.at(i).at(j);
            std::cout << matriz.at(i).at(j) << " ";
        }
        std::cout << "\n";
    }

}

int main(){
   
    std::cout << "Llenando matriz \n";
    int filas = 3;
    int cols = 2; 
    llenarMatriz(filas, cols);
    
    return 0;
}

