# Práctica integradora: construyendo soluciones con C++

Hasta ahora se han trabajado diferentes herramientas de programación: condicionales, ciclos, arreglos, funciones y procedimientos. Cada una permite resolver una parte de un problema.

En esta práctica el reto cambia: tendrás que **decidir cómo combinar esas herramientas para construir una solución completa**.

Programar implica comprender qué ocurre durante la ejecución de un programa. Frente a un problema necesitas reconocer qué información debes guardar, qué procesos deben repetirse, cuándo deben terminar, qué decisiones debe tomar el programa y qué partes de la solución pueden separarse.

Por eso los ejercicios aumentan gradualmente su dificultad. Al comienzo tendrás código para analizar y modificar. Más adelante recibirás cada vez menos indicaciones sobre cómo construir la solución.

## Antes de comenzar

Realiza los ejercicios **en papel antes de llevarlos al computador**.

Parte del aprendizaje de programación ocurre cuando intentas construir una solución, encuentras dificultades, haces una prueba de escritorio, descubres que algo no funciona como esperabas y necesitas revisar tu razonamiento.

Que un ejercicio no salga a la primera es parte normal del proceso de aprender a programar. Si siempre encuentras inmediatamente la solución, estás practicando principalmente aquello que ya sabes hacer. Los ejercicios que te obligan a detenerte, probar alternativas y corregir decisiones son los que pueden ayudarte a fortalecer tu lógica de programación.

Antes de escribir código para un problema, intenta responder:

1. **¿Qué información necesita almacenar el programa?**
2. **¿Qué procesos deben repetirse y qué determina cuándo terminan?**
3. **¿Qué tareas pueden separarse en funciones o procedimientos?**

Durante esta práctica también utilizarás una herramienta que te ayudará a comprender y revisar tus programas: la **tabla de seguimiento**.

---

# ¿Cómo hacer una tabla de seguimiento?

Cuando lees un programa en C++, puedes intentar ejecutar mentalmente cada instrucción. Esto funciona en programas pequeños, pero se vuelve más difícil cuando aparecen ciclos, condicionales y variables cuyos valores cambian varias veces.

Una **tabla de seguimiento** permite registrar en papel cómo cambian los valores mientras se ejecuta un fragmento de código.

También puede ayudarte cuando un programa produce un resultado diferente del esperado: puedes seguir su ejecución paso a paso hasta encontrar el momento en que su comportamiento comienza a diferir de lo que habías pensado.

Veamos un ejemplo.

```cpp
int numeros[4] = {5, 8, 3, 9};
int contador = 0;

for (int i = 0; i < 4; i++) {
    if (numeros[i] > 5) {
        contador++;
    }
}
```

Antes de seguir el código, identifica qué información puede cambiar o qué información necesitas observar.

En este caso interesa seguir:

* `i`, porque indica la posición que se está recorriendo;
* `numeros[i]`, porque muestra el elemento que se está examinando;
* el resultado de `numeros[i] > 5`, porque determina si se ejecuta `contador++`;
* `contador`, porque su valor puede cambiar durante las iteraciones.

Estas partes se convierten en las columnas de la tabla:

| `i` | `numeros[i]` | ¿`numeros[i] > 5`? | `contador` |
| --: | -----------: | ------------------ | ---------: |
|     |              |                    |            |

Ahora puedes **simular la ejecución del ciclo una iteración a la vez**.

## Primera iteración

El ciclo comienza con:

```cpp
i = 0
```

Por tanto:

```cpp
numeros[i]
```

corresponde a:

```cpp
numeros[0]
```

y su valor es `5`.

Se evalúa:

```cpp
5 > 5
```

La condición es falsa, así que `contador++` no se ejecuta.

`contador` continúa valiendo `0`.

La primera fila queda:

| `i` | `numeros[i]` | ¿`numeros[i] > 5`? | `contador` |
| --: | -----------: | ------------------ | ---------: |
|   0 |            5 | Falso              |          0 |

## Segunda iteración

Ahora:

```cpp
i = 1
```

El elemento consultado es:

```cpp
numeros[1]
```

que contiene `8`.

La condición:

```cpp
8 > 5
```

es verdadera.

Por eso se ejecuta:

```cpp
contador++;
```

y `contador` pasa de `0` a `1`.

| `i` | `numeros[i]` | ¿`numeros[i] > 5`? | `contador` |
| --: | -----------: | ------------------ | ---------: |
|   0 |            5 | Falso              |          0 |
|   1 |            8 | Verdadero          |          1 |

## Continúa hasta terminar

El mismo razonamiento se aplica a las demás iteraciones:

| `i` | `numeros[i]` | ¿`numeros[i] > 5`? | `contador` |
| --: | -----------: | ------------------ | ---------: |
|   0 |            5 | Falso              |          0 |
|   1 |            8 | Verdadero          |          1 |
|   2 |            3 | Falso              |          1 |
|   3 |            9 | Verdadero          |          2 |

Al terminar el ciclo:

```cpp
contador == 2
```

La tabla permite ver **cómo se llegó a ese resultado**, no solamente conocer que el resultado es `2`.

---

## ¿Qué columnas debes poner?

No todas las tablas de seguimiento tienen las mismas columnas.

Las columnas dependen del código que quieras analizar.

Por ejemplo, si encuentras:

```cpp
suma += numeros[i];
```

probablemente será útil tener una columna para `suma`.

Si encuentras:

```cpp
if (numeros[i] > mayor)
```

puede ser útil registrar tanto `numeros[i]` como `mayor`.

Si aparece:

```cpp
i++;
```

necesitas observar cómo cambia `i`.

Una buena pregunta para decidir qué incluir es:

> **¿Qué valores necesito observar para explicar por qué el programa tomó esta decisión o produjo este resultado?**

No necesitas registrar variables que no aporten información para entender el fragmento que estás analizando.

---

## El momento en que registras un valor importa

Observa:

```cpp
contador++;
```

Si `contador` valía `2` antes de ejecutar esa instrucción, después valdrá `3`.

En nuestras tablas registraremos, salvo que se indique algo diferente, **el valor que tienen las variables al terminar cada iteración**.

Por eso es necesario seguir las instrucciones en el mismo orden en que las ejecutaría el programa.

---

## Una tabla también sirve para encontrar errores

Supón que esperabas que un programa produjera:

```text
3
```

pero produjo:

```text
2
```

En lugar de modificar instrucciones al azar, puedes construir una tabla de seguimiento.

Compara en cada iteración:

> ¿Qué esperaba que ocurriera aquí?

con:

> ¿Qué indican las instrucciones que ocurrirá?

El punto donde estas dos respuestas dejan de coincidir puede darte una pista sobre dónde se encuentra el problema.

---

## Mini práctica

Sin ejecutar el siguiente código:

```cpp
int datos[5] = {7, 2, 10, 4, 8};
int suma = 0;

for (int i = 0; i < 5; i++) {
    if (datos[i] >= 7) {
        suma += datos[i];
    }
}
```

### Paso 1

Decide qué columnas necesita tu tabla.

No continúes hasta haberlas escrito en papel.

### Paso 2

Completa una fila por cada iteración del ciclo.

### Paso 3

Predice el valor final de `suma`.

### Paso 4

Explica con una frase qué está calculando este fragmento.

Después de terminar los cuatro pasos puedes ejecutar el código para comprobar tu predicción.

Si el resultado es diferente, **no borres inmediatamente tu tabla**. Busca la primera fila en la que tu seguimiento fue diferente de la ejecución del programa y trata de explicar por qué.

---

# Ejercicio 1. Sigue la ejecución

Ahora utiliza la misma estrategia con un programa un poco más completo.

Observa:

```cpp
#include <iostream>
using namespace std;

int contarMayores(int valores[], int cantidad, int limite) {
    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (valores[i] > limite) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int temperaturas[7] = {24, 31, 28, 33, 26, 35, 29};

    int resultado = contarMayores(temperaturas, 7, 30);

    cout << "Resultado: " << resultado << endl;

    return 0;
}
```

## 1.1 Predice

Sin ejecutar el programa, escribe exactamente qué crees que aparecerá en pantalla.

## 1.2 Diseña la tabla

Antes de completarla, responde:

**¿Qué valores necesitas observar para explicar cómo `contarMayores()` obtiene su resultado?**

Propón las columnas que tendría tu tabla de seguimiento.

Después compara tu propuesta con estas columnas:

| `i` | `valores[i]` | ¿`valores[i] > limite`? | `contador` |
| --: | -----------: | ----------------------- | ---------: |
|     |              |                         |            |

Si elegiste columnas diferentes, no significa necesariamente que estén incorrectas. Revisa si las columnas que propusiste permiten seguir las decisiones y los cambios que ocurren durante el ciclo.

## 1.3 Haz el seguimiento

Completa una fila por cada iteración.

Recuerda registrar en `contador` el valor que tiene **después de ejecutar las instrucciones correspondientes a esa iteración**.

## 1.4 Explica

Responde con tus propias palabras:

**a.** ¿Qué representa `i` durante la ejecución del ciclo?

**b.** ¿Por qué este problema utiliza un ciclo de repetición definida?

**c.** ¿Para qué se necesita el condicional dentro del ciclo?

**d.** ¿Qué información recibe `contarMayores()`?

**e.** ¿Qué información retorna?

**f.** ¿Qué cambiaría si la llamada fuera?

```cpp
contarMayores(temperaturas, 7, 28);
```

No hagas todavía una nueva tabla completa. Observa los datos y predice qué resultado obtendrías.

## 1.5 Comprueba

Ahora sí lleva el programa al computador.

Ejecuta primero la versión original y después realiza el cambio anterior.

Si alguna predicción fue incorrecta, vuelve a la tabla y busca **la primera iteración en la que tu razonamiento fue diferente de lo que hizo el programa**.
