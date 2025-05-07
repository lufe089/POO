# 📘 Guía de estudio: Sobrecarga de métodos en C++

---

## 🧩 1. ¿Por qué surge la sobrecarga?

En la programación orientada a objetos, una misma acción puede necesitar hacerse de distintas formas según la situación. Por ejemplo, un método llamado `imprimir` podría:

- Imprimir un número
- Imprimir un texto
- Imprimir un objeto completo

Si tuvieras que crear un método con un nombre distinto para cada caso (`imprimirNumero`, `imprimirTexto`, etc.), el código se volvería largo y difícil de mantener.

👉 **La sobrecarga permite reutilizar un mismo nombre para operaciones similares**, variando los parámetros según el caso.

---

## 🧠 2. ¿Qué es la sobrecarga de métodos?

La **sobrecarga de métodos** ocurre cuando una **misma clase** define **varios métodos con el mismo nombre**, pero que tienen **firmas distintas**.

En C++, **la firma de un método** está compuesta por:
- El **nombre del método**
- El **número y tipo de los parámetros**
- El **orden de los parámetros**

❌ El tipo de retorno **no** hace parte de la firma.

---

## 🔗 3. ¿Cómo se relaciona con el polimorfismo?

La sobrecarga de métodos es una forma de **polimorfismo en tiempo de compilación** (o **polimorfismo estático**).

- *Polimorfismo* significa "muchas formas".
- En este caso, el compilador decide **en tiempo de compilación** cuál versión del método usar, según los argumentos que recibe.

### Ejemplo:

```cpp
void imprimir(int x);
void imprimir(string texto);
```
Ambos métodos se llaman igual (imprimir), pero se comportan distinto dependiendo del tipo del parámetro. El compilador decide cuál usar.

## 🛠️ 4. ¿Cuándo se utiliza?
Se usa cuando:

* Queremos definir comportamientos similares con pequeñas variaciones.
* Se busca mantener el mismo nombre lógico para un grupo de acciones relacionadas.
* Queremos que el código sea más claro y legible, evitando nombres diferentes innecesarios.

Ejemplos comunes:
* Operaciones matemáticas (sumar, restar)
* Métodos de entrada/salida (mostrar, leer, guardar)
* Constructores con diferentes parámetros

## 5. Casos válidos
```cpp
class Ejemplo {
public:
    void saludar();                               // Sin parámetros
    void saludar(string nombre);                  // Un parámetro string
    void saludar(string nombre, int edad);        // Dos parámetros
};
```

## 6. Casos inválidos
```cpp
class Ejemplo {
public:
    int calcular();        
    double calcular();      // ❌ Error: solo cambia el tipo de retorno

    void mostrar(int x);
    void mostrar(int y);    // ❌ Error: cambia solo el nombre del parámetro
};
```

## 7. Ejemplo completo
```cpp
#include <iostream>
using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }

    double sumar(double a, double b) {
        return a + b;
    }

    int sumar(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculadora calc;
    cout << calc.sumar(3, 4) << endl;         // 7
    cout << calc.sumar(2.5, 3.1) << endl;     // 5.6
    cout << calc.sumar(1, 2, 3) << endl;      // 6
    return 0;
}
```

## ¿Cuándo es sobrecarga?
| Regla                                    | ¿Permite sobrecarga? |
| ---------------------------------------- | -------------------- |
| Cambiar número de parámetros             | ✅ Sí                 |
| Cambiar tipo de parámetros               | ✅ Sí                 |
| Cambiar orden de parámetros              | ✅ Sí                 |
| Cambiar nombre del parámetro             | ❌ No                 |
| Cambiar tipo de retorno                  | ❌ No                 |
| Cambiar modificador de acceso (`public`) | ❌ No                 |
