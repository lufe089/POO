# 🧩 Práctica integradora: lógica de programación en C++

> **Objetivo:** combinar condicionales, arreglos, ciclos de repetición definida e indefinida, funciones y procedimientos para resolver problemas cada vez más completos.

Hasta ahora has trabajado diferentes herramientas de programación. En esta práctica tendrás que **decidir cómo combinarlas**.

Programar requiere comprender qué ocurre durante la ejecución de un programa. Frente a un problema necesitas reconocer:

* qué información debes almacenar;
* qué decisiones debe tomar el programa;
* qué procesos deben repetirse;
* qué determina que una repetición termine;
* qué tareas pueden separarse en funciones o procedimientos.

Los ejercicios aumentan gradualmente su dificultad. Al comienzo tendrás código para analizar y modificar. Después recibirás menos indicaciones hasta llegar a problemas en los que tendrás que tomar tus propias decisiones.

---

## 📝 Antes de comenzar

Realiza los ejercicios **primero en papel**.

Parte del aprendizaje de programación ocurre cuando intentas construir una solución, encuentras dificultades, haces una prueba de escritorio, descubres que algo no funciona como esperabas y necesitas revisar tu razonamiento.

> **Que un ejercicio no salga a la primera es parte normal de aprender a programar.**

Si siempre encuentras inmediatamente la solución, probablemente estás practicando principalmente aquello que ya sabes hacer. Cuando necesitas detenerte, probar, equivocarte, revisar una condición o cambiar una decisión, estás ejercitando procesos necesarios para aprender a resolver problemas mediante programación.

Antes de comenzar a escribir código, acostúmbrate a preguntarte:

1. **¿Qué información necesita almacenar el programa?**
2. **¿Qué procesos deben repetirse y qué determina cuándo terminan?**
3. **¿Qué tareas pueden separarse en funciones o procedimientos?**

---

# 🔎 Parte 1. Aprender a seguir la ejecución

## ¿Cómo hacer una tabla de seguimiento?

Cuando lees un programa en C++, puedes intentar ejecutar mentalmente cada instrucción. Esto puede funcionar con programas pequeños, pero se vuelve más difícil cuando aparecen ciclos, condicionales y variables cuyos valores cambian varias veces.

Una **tabla de seguimiento** permite registrar en papel cómo cambian los valores mientras se ejecuta un fragmento de código.

También puede ayudarte cuando un programa produce un resultado diferente del esperado: puedes seguir su ejecución paso a paso hasta encontrar el momento en que su comportamiento comienza a diferir de lo que habías pensado.

### Ejemplo

```cpp
int numeros[4] = {5, 8, 3, 9};
int contador = 0;

for (int i = 0; i < 4; i++) {
    if (numeros[i] > 5) {
        contador++;
    }
}
```

### ¿Qué debemos observar?

En este caso interesa seguir:

* `i`, porque indica la posición que se está recorriendo;
* `numeros[i]`, porque muestra el elemento que se está examinando;
* `numeros[i] > 5`, porque determina si se ejecuta `contador++`;
* `contador`, porque cambia durante algunas iteraciones.

Estas partes se convierten en las columnas de la tabla:

| `i` | `numeros[i]` | ¿`numeros[i] > 5`? | `contador` |
| --: | -----------: | :----------------: | ---------: |
|   0 |            5 |        Falso       |          0 |
|   1 |            8 |      Verdadero     |          1 |
|   2 |            3 |        Falso       |          1 |
|   3 |            9 |      Verdadero     |          2 |

Al terminar el ciclo:

```cpp
contador == 2
```

La tabla permite ver **cómo se llegó al resultado**, no solamente conocer el valor final.

---

### 💡 ¿Qué columnas debe tener una tabla?

No todas las tablas de seguimiento tienen las mismas columnas.

Si aparece:

```cpp
suma += numeros[i];
```

probablemente será útil observar `suma`.

Si aparece:

```cpp
if (numeros[i] > mayor)
```

puede ser necesario registrar `numeros[i]` y `mayor`.

Si una variable controla un ciclo:

```cpp
while (opcion != 0)
```

puede ser útil registrar `opcion`.

> **Pregunta guía:**
> ¿Qué valores necesito observar para explicar por qué el programa tomó esta decisión o produjo este resultado?

No necesitas registrar todas las variables del programa.

---

### ⏱️ El momento en que registras un valor importa

Observa:

```cpp
contador++;
```

Si `contador` valía `2` antes de ejecutar esa instrucción, después valdrá `3`.

En esta guía registraremos, salvo que se indique algo diferente, **el valor de las variables al terminar cada iteración**.

---

## ✏️ Mini práctica

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

### Tu tarea

1. Decide qué columnas necesita tu tabla.
2. Completa una fila por cada iteración.
3. Predice el valor final de `suma`.
4. Explica con una frase qué está calculando el fragmento.

> **No ejecutes todavía el código.**
> Primero haz la predicción y la tabla.

Después puedes llevarlo al computador para comprobar.

Si el resultado es diferente, **no borres inmediatamente tu tabla**. Busca la primera fila en la que tu seguimiento fue diferente de la ejecución.

---

# 🧠 Parte 2. Analizar antes de programar

## Ejercicio 1. Sigue la ejecución

Observa:

```cpp
#include <iostream>
using std::cout;

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

### 1. Predice

Sin ejecutar el programa, escribe exactamente qué crees que aparecerá en pantalla.

### 2. Diseña la tabla

Antes de completarla responde:

> **¿Qué valores necesitas observar para explicar cómo `contarMayores()` obtiene su resultado?**

Propón las columnas de tu tabla.

Después compara tu propuesta con estas:

| `i` | `valores[i]` | ¿`valores[i] > limite`? | `contador` |
| --: | -----------: | :---------------------: | ---------: |
|     |              |                         |            |

### 3. Haz el seguimiento

Completa una fila por cada iteración.

### 4. Explica

Responde con tus propias palabras:

* ¿Qué representa `i`?
* ¿Por qué este problema utiliza un ciclo de repetición definida?
* ¿Para qué se necesita el condicional?
* ¿Qué información recibe `contarMayores()`?
* ¿Qué información retorna?

Ahora analiza esta llamada:

```cpp
contarMayores(temperaturas, 7, 28);
```

Predice el nuevo resultado.

### 5. Comprueba

Ahora sí ejecuta el programa.

> Si alguna predicción fue incorrecta, vuelve a la tabla y busca **la primera iteración en la que tu razonamiento fue diferente de lo que hizo el programa**.

---

## 🐞 Ejercicio 2. El programa compila, pero algo está mal

Un grupo tiene las siguientes calificaciones:

```text
3.5   4.2   2.8   4.7   3.9   2.5
```

Se necesita calcular el promedio y determinar cuántos estudiantes tienen una calificación superior al promedio.

```cpp
#include <iostream>
using std::cout;

int main() {
    float notas[6] = {3.5, 4.2, 2.8, 4.7, 3.9, 2.5};

    float suma = 0;
    float promedio = 0;
    int superiores = 0;

    for (int i = 0; i < 6; i++) {
        suma += notas[i];
        promedio = suma / 6;

        if (notas[i] > promedio) {
            superiores++;
        }
    }

    cout << "Promedio: " << promedio << endl;
    cout << "Superiores al promedio: " << superiores << endl;

    return 0;
}
```

### Antes de corregir

Responde:

* ¿En qué momento puede conocerse el promedio de las seis calificaciones?
* Cuando se analiza `notas[0]`, ¿`promedio` contiene ya el promedio definitivo?
* ¿Contra qué valor se está comparando realmente cada nota?

### Construye una tabla

Esta vez **tú decides las columnas**.

Sigue al menos las primeras tres iteraciones.

> Busca el primer momento en que la lógica del programa deja de corresponder con el problema.

### Propón una estrategia

Antes de modificar el código, escribe:

> **Primero debería ocurrir:** __________________________
> **Después debería ocurrir:** _________________________

### Corrige

Modifica el programa para que produzca el resultado correcto.

### Explica

Describe qué estaba ocurriendo en la versión original y por qué tu modificación resuelve el problema.

---

# 🛠️ Parte 3. Construir a partir de piezas

## Ejercicio 3. Divide el problema en tareas

Se quiere construir un programa para analizar las calificaciones de 10 estudiantes.

El programa debe:

* solicitar las 10 calificaciones;
* mostrarlas;
* calcular su promedio;
* indicar cuántas son superiores al promedio.

Ya se han definido:

```cpp
void ingresarNotas(float notas[], int cantidad);
void mostrarNotas(float notas[], int cantidad);
```

### Antes de programar

Responde:

* ¿Por qué `ingresarNotas()` puede ser `void`?
* ¿Qué diferencia hay entre ingresar notas y calcular un promedio?
* ¿Qué información debe estar disponible antes de contar las notas superiores al promedio?

### Implementa los procedimientos

```cpp
void ingresarNotas(float notas[], int cantidad);
```

```cpp
void mostrarNotas(float notas[], int cantidad);
```

> Usa `cantidad` como límite del recorrido. Evita escribir directamente `10` dentro de las funciones.

### Construye las funciones

```cpp
float calcularPromedio(float notas[], int cantidad);
```

```cpp
int contarSuperiores(float notas[], int cantidad, float promedio);
```

Antes de escribir cada una completa:

| Pregunta              | Respuesta |
| --------------------- | --------- |
| ¿Qué recibe?          |           |
| ¿Qué proceso realiza? |           |
| ¿Qué retorna?         |           |

### Integra

Construye `main()` y utiliza las funciones y procedimientos anteriores.

Prueba con:

```text
3.2  4.5  2.8  3.7  4.1  3.0  4.8  2.5  3.9  4.0
```

### Revisa

* ¿Cuántas veces recorres completamente el arreglo?
* ¿Por qué `calcularPromedio()` retorna un `float`?
* ¿Por qué `mostrarNotas()` puede ser `void`?
* Si fueran 20 notas, ¿qué partes de tu solución tendrían que cambiar?

---

# 🔁 Parte 4. Elegir el tipo de repetición

## Ejercicio 4. No todas las repeticiones terminan igual

Amplía el programa anterior.

Después de ingresar las calificaciones, el usuario podrá consultar repetidamente una posición del arreglo.

```text
Posición que desea consultar: 3
Calificación: 2.8

¿Desea realizar otra consulta? (S/N): S

Posición que desea consultar: 7
Calificación: 4.8

¿Desea realizar otra consulta? (S/N): N
```

> Para el usuario las posiciones comienzan en **1**.
> En C++, los índices del arreglo comienzan en **0**.

### Decide antes de programar

Completa:

| Situación                   | ¿Se conoce de antemano cuántas veces se repite? | ¿Qué determina que termine? |
| --------------------------- | :---------------------------------------------: | --------------------------- |
| Recorrer las calificaciones |                                                 |                             |
| Realizar consultas          |                                                 |                             |

Después decide qué tipo de ciclo utilizarías en cada situación y justifica tu elección.

### Agrega la consulta

Crea una función que permita obtener la calificación correspondiente a una posición válida.

Decide:

* qué parámetros necesita;
* qué retorna;
* dónde se valida la posición.

### Controla las consultas

Permite tantas consultas como el usuario desee.

### Considera entradas incorrectas

¿Qué debería ocurrir con:

```text
Posición: 0
```

o:

```text
Posición: 15
```

si solo hay 10 notas?

> El programa nunca debe intentar acceder a una posición inexistente del arreglo.

### Si algo falla...

Decide tú si una tabla de seguimiento puede ayudarte.

Ya no se indican las columnas.

---

# 🏭 Parte 5. Diseñar una solución con menos apoyo

## Ejercicio 5. Control de producción

Una planta desea registrar su producción diaria.

Puede almacenar información de **máximo 30 días**, aunque no siempre se registrarán los 30.

Después de ingresar la producción de un día, el programa debe preguntar si se desea continuar.

El registro termina cuando:

* se han registrado 30 días; o
* el usuario indica que no desea continuar.

Después debe aparecer este menú:

```text
1. Mostrar producción registrada
2. Calcular promedio
3. Mostrar producción mayor
4. Contar días por debajo del promedio
5. Consultar un día
0. Terminar
```

El menú debe repetirse hasta seleccionar `0`.

---

### 1. Analiza el problema

#### Datos

* ¿Qué información debe almacenarse?
* ¿Cómo sabrá el programa cuántas posiciones del arreglo contienen información válida?

#### Repeticiones

Identifica:

* repeticiones con cantidad conocida;
* repeticiones que dependen de una decisión del usuario.

#### Condiciones

Lista las decisiones que debe tomar el programa.

---

### 2. Diseña las funciones y procedimientos

Completa:

| Tarea                        | ¿Función o procedimiento? | Información que recibe | ¿Qué retorna? |
| ---------------------------- | ------------------------- | ---------------------- | ------------- |
| Registrar producción         |                           |                        |               |
| Mostrar datos                |                           |                        |               |
| Calcular promedio            |                           |                        |               |
| Encontrar producción mayor   |                           |                        |               |
| Contar días bajo el promedio |                           |                        |               |
| Consultar un día             |                           |                        |               |

> Puedes cambiar tu propuesta mientras programas si encuentras una organización que puedas justificar mejor.

---

### 3. Construye la solución

Implementa el programa completo.

> Evita concentrar toda la lógica dentro de `main()`.

---

### 4. Prueba

Comprueba al menos:

* registro de varios días;
* registro de un solo día;
* consulta del primer día;
* consulta del último día registrado;
* consulta de un día inexistente;
* terminación voluntaria del registro;
* llegada a la capacidad máxima;
* terminación del menú.

Antes de ejecutar cada caso responde:

> **¿Qué debería ocurrir?**

---

### 5. Revisa tu diseño

Selecciona dos funciones o procedimientos y explica:

* qué tarea tiene cada uno;
* qué recibe;
* por qué recibe esos parámetros;
* por qué retorna un valor o es `void`.

---

# 🚀 Parte 6. Diseñar de forma autónoma

## Ejercicio 6. Registro de tiempos de una competencia

Un entrenador necesita registrar los tiempos obtenidos por sus deportistas.

Puede almacenar como máximo **20 tiempos**.

Después de registrar cada tiempo debe poder decidir si continúa. El proceso también debe terminar automáticamente cuando se alcance la capacidad máxima.

Una vez terminado el registro, el entrenador podrá realizar consultas tantas veces como necesite.

El programa debe permitir:

* mostrar todos los tiempos;
* calcular el tiempo promedio;
* encontrar el mejor tiempo;
* contar cuántos deportistas obtuvieron un tiempo inferior a un valor indicado;
* determinar si se registró un tiempo determinado;
* mostrar los tiempos que cumplen una condición;
* terminar el programa.

---

## 1. Diseña antes de programar

En este ejercicio no se indican:

* las funciones;
* cuáles deben ser `void`;
* los parámetros;
* qué ciclos utilizar;
* cómo organizar las consultas.

Esas decisiones hacen parte del ejercicio.

### Datos

¿Qué información necesita almacenar el programa?

¿Cómo sabrá cuántos elementos contienen datos válidos?

### Repeticiones

Para cada proceso repetitivo completa:

> **Se repite mientras/hasta que:** ______________________________

Luego decide qué estructura de repetición utilizarías.

### Decisiones

Identifica las condiciones que debe evaluar el programa.

### Descomposición

Para cada tarea principal decide:

* qué información necesita;
* qué parámetros recibe;
* si produce un resultado;
* si corresponde a una función o a un procedimiento.

---

## 2. Construye

Implementa tu diseño en C++.

Si cambias una decisión importante durante la implementación, registra:

> **Inicialmente pensé:** _______________________________________
> **Después decidí:** __________________________________________
> **Porque:** _________________________________________________

---

## 3. Diseña tus pruebas

Crea al menos **cinco casos de prueba**.

| Datos de prueba | ¿Qué quiero comprobar? | Resultado esperado | Resultado obtenido |
| --------------- | ---------------------- | ------------------ | ------------------ |
|                 |                        |                    |                    |
|                 |                        |                    |                    |
|                 |                        |                    |                    |
|                 |                        |                    |                    |
|                 |                        |                    |                    |

Incluye al menos un **caso límite**.

Si alguna prueba falla, decide si necesitas una tabla de seguimiento para entender qué sucede.

---

## 4. Justifica dos decisiones

Escoge dos decisiones de tu solución, por ejemplo:

* tipo de ciclo;
* condición de terminación;
* creación de una función;
* parámetros;
* función frente a procedimiento;
* ubicación de una validación;
* control de las posiciones utilizadas del arreglo.

Explica por qué las tomaste.

---

# 🤖 Uso de IA para revisar tu trabajo

La IA puede ayudarte a revisar tu razonamiento, pero úsala **después de haber intentado resolver el ejercicio**.

Puedes pedir ayuda cuando:

* tu programa no compila;
* compila pero produce un resultado incorrecto;
* no sabes cómo continuar;
* tienes dudas sobre un ciclo;
* no sabes cómo dividir el problema;
* quieres revisar casos límite.

> **Necesitas tener un intento propio que puedas discutir.**

Puedes pegar el código o enviar una fotografía clara de tu solución en papel.

---

# 💬 Prompt para revisar tus ejercicios

Copia el siguiente prompt y después agrega:

1. el enunciado del ejercicio;
2. tu solución o fotografía.

```text
TUTOR PARA REVISAR MIS EJERCICIOS DE PROGRAMACIÓN EN C++

Estoy aprendiendo programación en C++ y estoy practicando la integración de:

- condicionales;
- arreglos;
- ciclos de repetición definida;
- ciclos de repetición indefinida;
- funciones;
- procedimientos.

Voy a proporcionarte el enunciado de un ejercicio y mi solución. La solución puede estar escrita como código o puedo enviarte una fotografía de lo que hice en papel.

==================================================
TU PAPEL
==================================================

Actúa como tutor de programación.

Tu objetivo es ayudarme a desarrollar mi capacidad para analizar problemas, seguir la ejecución de un programa, encontrar errores y tomar decisiones sobre cómo construir una solución.

No resuelvas el ejercicio por mí ni escribas una solución completa.

==================================================
PRIMERO COMPRENDE MI ESTRATEGIA
==================================================

Antes de señalar errores, revisa mi solución e identifica qué estrategia parece que estoy intentando utilizar.

Cuando sea pertinente, hazme preguntas sobre:

- qué información necesito almacenar;
- qué representa cada dato;
- qué condición determina que un ciclo continúe o termine;
- por qué elegí un ciclo definido o indefinido;
- qué representa un índice;
- qué tarea cumple una función o procedimiento;
- qué información recibe;
- qué resultado debería producir.

Haz una pregunta a la vez y espera mi respuesta.

No conviertas la revisión en una lista de errores.

==================================================
SI ENCUENTRAS UN ERROR
==================================================

No me entregues inmediatamente el código corregido.

Ayúdame a localizarlo progresivamente:

1. Indícame en qué parte debería concentrarme.
2. Pídeme que prediga qué ocurre allí.
3. Si es necesario, ayúdame a construir una tabla de seguimiento.
4. Pregúntame primero qué variables o expresiones considero que debo observar.
5. Si falta información, hazme una pregunta que me permita descubrirla.
6. Propón valores pequeños para una prueba de escritorio cuando sea útil.
7. Pregúntame qué esperaba y qué ocurre según el código.
8. Dame otra pista solo si sigo sin identificar el problema.

Prioriza los errores de lógica sobre detalles menores de sintaxis.

Si tengo un error de sintaxis que impide analizar el programa, ayúdame a identificarlo sin reescribir toda mi solución.

==================================================
CUANDO UTILICEMOS UNA TABLA DE SEGUIMIENTO
==================================================

Ayúdame a decidir:

- qué fragmento necesito analizar;
- qué valores cambian;
- qué condición se evalúa;
- qué valores necesito observar;
- qué debo registrar después de cada iteración.

Haz que yo complete o prediga los valores.

Si una fila es incorrecta, pídeme seguir otra vez las instrucciones de esa iteración antes de decirme el valor correcto.

==================================================
REVISA MIS DECISIONES
==================================================

Aunque el programa produzca el resultado esperado, revisa conmigo:

- si recorro correctamente los elementos válidos;
- si puedo acceder fuera de los límites del arreglo;
- si la condición de terminación corresponde al problema;
- si elegí bien entre repetición definida e indefinida;
- si una función o procedimiento tiene una tarea comprensible;
- si los parámetros corresponden a la información que necesita;
- si repito lógica innecesariamente;
- si existen casos límite que no contemplé.

No me pidas cambiar código solamente por preferencias de estilo si mi solución es clara, correcta y puedo justificarla.

==================================================
COMPRUEBA QUE COMPRENDÍ
==================================================

Si corrijo un error después de recibir una pista, pregúntame por qué el cambio funciona.

Cuando sea apropiado, cambia un dato o una condición y pídeme predecir qué ocurriría.

==================================================
CUANDO MI SOLUCIÓN FUNCIONE
==================================================

Hazme una pregunta de transferencia relacionada con el ejercicio.

Puedes cambiar:

- la cantidad de datos;
- una condición de terminación;
- una regla;
- una consulta;
- un caso límite;
- una necesidad que obligue a reutilizar o modificar una función.

La pregunta debe obligarme a razonar sobre mi solución.

No escribas tú la modificación.

==================================================
EVALUACIÓN FINAL
==================================================

Solo cuando yo indique que terminé el ejercicio, evalúa mi trabajo en estas cuatro dimensiones:

1. COMPRENSIÓN DEL PROBLEMA
¿Mi solución representa correctamente lo solicitado?

2. LÓGICA DE PROGRAMACIÓN
¿Las condiciones, ciclos, arreglos y operaciones producen el comportamiento esperado?

3. DESCOMPOSICIÓN
¿Las funciones y procedimientos tienen tareas comprensibles y una distribución apropiada?

4. CAPACIDAD DE EXPLICAR
¿Puedo justificar las principales decisiones que tomé?

Para cada dimensión utiliza uno de estos niveles:

- Necesita revisión
- En desarrollo
- Logrado

Justifica cada nivel brevemente usando evidencia de mi solución y de mis respuestas durante la revisión.

No aumentes mi nivel solamente porque corregí algo siguiendo una pista. Comprueba primero que puedo explicar por qué la corrección funciona.

Termina indicándome qué aspecto de mi razonamiento debería practicar más, sin darme un nuevo ejercicio resuelto.
```

# Soluciones [ Consultar después de haber intentando solucionar los ejercicios]

> Las soluciones de los ejercicios abiertos son propuestas posibles. Pueden existir otras respuestas correctas si la lógica responde al problema y las decisiones pueden justificarse.

## Mini práctica. Tabla de seguimiento

El código era:

```cpp
int datos[5] = {7, 2, 10, 4, 8};
int suma = 0;

for (int i = 0; i < 5; i++) {
    if (datos[i] >= 7) {
        suma += datos[i];
    }
}
```

### Tabla de seguimiento

Conviene observar `i`, `datos[i]`, el resultado de la condición y `suma`.

| `i` | `datos[i]` | ¿`datos[i] >= 7`? | `suma` |
| --: | ---------: | :---------------: | -----: |
|   0 |          7 |     Verdadero     |      7 |
|   1 |          2 |       Falso       |      7 |
|   2 |         10 |     Verdadero     |     17 |
|   3 |          4 |       Falso       |     17 |
|   4 |          8 |     Verdadero     |     25 |

El valor final es:

```text
suma = 25
```

El fragmento **suma únicamente los valores del arreglo que son mayores o iguales a 7**:

```text
7 + 10 + 8 = 25
```

Aquí aparece el patrón:

```text
recorrer → evaluar una condición → acumular si se cumple
```

## Ejercicio 1. Sigue la ejecución

La función es:

```cpp
int contarMayores(int valores[], int cantidad, int limite) {
    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (valores[i] > limite) {
            contador++;
        }
    }

    return contador;
}
```

y se llama así:

```cpp
int temperaturas[7] = {24, 31, 28, 33, 26, 35, 29};
int resultado = contarMayores(temperaturas, 7, 30);
```

### Resultado

Los valores mayores que `30` son:

```text
31
33
35
```

Por tanto:

```text
Resultado: 3
```

### Tabla de seguimiento

| `i` | `valores[i]` | ¿`valores[i] > 30`? | `contador` |
| --: | -----------: | :-----------------: | ---------: |
|   0 |           24 |        Falso        |          0 |
|   1 |           31 |      Verdadero      |          1 |
|   2 |           28 |        Falso        |          1 |
|   3 |           33 |      Verdadero      |          2 |
|   4 |           26 |        Falso        |          2 |
|   5 |           35 |      Verdadero      |          3 |
|   6 |           29 |        Falso        |          3 |

### Explicación

`i` representa la posición del arreglo que se está examinando.

Se utiliza repetición definida porque se conoce cuántos elementos deben recorrerse. La función recibe esa cantidad mediante:

```cpp
int cantidad
```

El condicional:

```cpp
valores[i] > limite
```

permite decidir si el elemento actual debe aumentar el contador.

La función recibe:

* el arreglo;
* la cantidad de elementos válidos;
* el límite de comparación.

Retorna cuántos valores superan ese límite.

Si se llama:

```cpp
contarMayores(temperaturas, 7, 28);
```

cumplen:

```text
31
33
35
29
```

Por tanto:

```text
Resultado: 4
```

## Ejercicio 2. El programa compila, pero algo está mal

El fragmento problemático es:

```cpp
for (int i = 0; i < 6; i++) {
    suma += notas[i];
    promedio = suma / 6;

    if (notas[i] > promedio) {
        superiores++;
    }
}
```

### ¿Cuál es el problema?

El promedio definitivo solo puede conocerse **después de sumar todas las notas**.

En la primera iteración:

```text
suma = 3.5
```

y luego:

```text
promedio = 3.5 / 6
         ≈ 0.5833
```

La comparación termina siendo:

```cpp
3.5 > 0.5833
```

Ese valor todavía no representa el promedio del grupo.

### Tabla de seguimiento

| `i` | `notas[i]` | `suma` | `promedio` | ¿`notas[i] > promedio`? | `superiores` |
| --: | ---------: | -----: | ---------: | :---------------------: | -----------: |
|   0 |        3.5 |    3.5 |     0.5833 |        Verdadero        |            1 |
|   1 |        4.2 |    7.7 |     1.2833 |        Verdadero        |            2 |
|   2 |        2.8 |   10.5 |       1.75 |        Verdadero        |            3 |

La dificultad está en que se compara cada nota contra un promedio parcial.

### Estrategia correcta

```text
1. Sumar todas las notas.
2. Calcular el promedio definitivo.
3. Recorrer nuevamente las notas.
4. Comparar cada nota contra ese promedio.
```

### Solución

```cpp
#include <iostream>

using std::cout;
using std::endl;

int main() {
    float notas[6] = {3.5, 4.2, 2.8, 4.7, 3.9, 2.5};

    float suma = 0;
    float promedio;
    int superiores = 0;

    for (int i = 0; i < 6; i++) {
        suma += notas[i];
    }

    promedio = suma / 6;

    for (int i = 0; i < 6; i++) {
        if (notas[i] > promedio) {
            superiores++;
        }
    }

    cout << "Promedio: " << promedio << endl;
    cout << "Superiores al promedio: " << superiores << endl;

    return 0;
}
```

La suma es `21.6`, el promedio es `3.6` y las notas superiores son `4.2`, `4.7` y `3.9`.

```text
Promedio: 3.6
Superiores al promedio: 3
```

El error de lógica consistía en **usar un dato antes de haber terminado de calcularlo**.

## Ejercicio 3. Divide el problema en tareas

### Respuestas conceptuales

`ingresarNotas()` puede ser `void` porque modifica directamente el contenido del arreglo recibido.

`calcularPromedio()` necesita retornar un valor porque el promedio será utilizado posteriormente.

Antes de contar las notas superiores al promedio, primero debe conocerse el promedio.

La dependencia es:

```text
ingresar
   ↓
mostrar
   ↓
calcular promedio
   ↓
contar superiores
```

### Solución

```cpp
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void ingresarNotas(float notas[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
    }
}

void mostrarNotas(float notas[], int cantidad) {
    cout << "\nNotas registradas:" << endl;

    for (int i = 0; i < cantidad; i++) {
        cout << "Nota " << i + 1 << ": " << notas[i] << endl;
    }
}

float calcularPromedio(float notas[], int cantidad) {
    float suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }

    return suma / cantidad;
}

int contarSuperiores(float notas[], int cantidad, float promedio) {
    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (notas[i] > promedio) {
            contador++;
        }
    }

    return contador;
}

int main() {
    const int CANTIDAD = 10;
    float notas[CANTIDAD];

    ingresarNotas(notas, CANTIDAD);
    mostrarNotas(notas, CANTIDAD);

    float promedio = calcularPromedio(notas, CANTIDAD);
    int superiores = contarSuperiores(notas, CANTIDAD, promedio);

    cout << "\nPromedio: " << promedio << endl;
    cout << "Notas superiores al promedio: "
         << superiores << endl;

    return 0;
}
```

### Responsabilidad de cada función

| Función / procedimiento | Recibe                       | Retorna | Responsabilidad         |
| ----------------------- | ---------------------------- | ------- | ----------------------- |
| `ingresarNotas()`       | arreglo y cantidad           | nada    | llenar el arreglo       |
| `mostrarNotas()`        | arreglo y cantidad           | nada    | mostrar los valores     |
| `calcularPromedio()`    | arreglo y cantidad           | `float` | calcular el promedio    |
| `contarSuperiores()`    | arreglo, cantidad y promedio | `int`   | contar notas superiores |

### Resultado con los datos sugeridos

Datos:

```text
3.2  4.5  2.8  3.7  4.1  3.0  4.8  2.5  3.9  4.0
```

La suma es `36.5` y el promedio:

```text
3.65
```

Superan el promedio:

```text
4.5
3.7
4.1
4.8
3.9
4.0
```

Cantidad:

```text
6
```

La solución realiza cuatro recorridos completos del arreglo: ingresar, mostrar, calcular y contar.

Gracias a que las funciones reciben `cantidad`, si se pasa de 10 a 20 notas solo debe cambiar:

```cpp
const int CANTIDAD = 20;
```

## Ejercicio 4. No todas las repeticiones terminan igual

### Elección de ciclos

| Situación          | ¿Cantidad conocida? | ¿Qué determina el fin?        | Ciclo sugerido       |
| ------------------ | :-----------------: | ----------------------------- | -------------------- |
| Recorrer las notas |          Sí         | procesar `cantidad` elementos | `for`                |
| Realizar consultas |          No         | decisión del usuario          | `while` o `do-while` |

Para recorrer el arreglo conocemos la cantidad de elementos.

Para las consultas no sabemos cuántas realizará el usuario.

### Función de consulta

```cpp
float obtenerNota(float notas[], int posicion) {
    return notas[posicion - 1];
}
```

Se resta `1` porque el usuario utiliza posiciones desde `1`, mientras que el arreglo utiliza índices desde `0`.

La posición debe validarse antes:

```cpp
posicion >= 1 && posicion <= CANTIDAD
```

### Solución

```cpp
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void ingresarNotas(float notas[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
    }
}

void mostrarNotas(float notas[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Nota " << i + 1 << ": "
             << notas[i] << endl;
    }
}

float calcularPromedio(float notas[], int cantidad) {
    float suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }

    return suma / cantidad;
}

int contarSuperiores(float notas[], int cantidad, float promedio) {
    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (notas[i] > promedio) {
            contador++;
        }
    }

    return contador;
}

float obtenerNota(float notas[], int posicion) {
    return notas[posicion - 1];
}

int main() {
    const int CANTIDAD = 10;
    float notas[CANTIDAD];

    ingresarNotas(notas, CANTIDAD);
    mostrarNotas(notas, CANTIDAD);

    float promedio = calcularPromedio(notas, CANTIDAD);

    cout << "\nPromedio: " << promedio << endl;
    cout << "Notas superiores al promedio: "
         << contarSuperiores(notas, CANTIDAD, promedio)
         << endl;

    char continuar = 'S';

    while (continuar == 'S' || continuar == 's') {
        int posicion;

        cout << "\nPosicion que desea consultar: ";
        cin >> posicion;

        if (posicion >= 1 && posicion <= CANTIDAD) {
            cout << "Calificacion: "
                 << obtenerNota(notas, posicion)
                 << endl;
        } else {
            cout << "Posicion invalida." << endl;
        }

        cout << "Desea realizar otra consulta? (S/N): ";
        cin >> continuar;
    }

    return 0;
}
```

Una posición `0` o `15` debe rechazarse porque no pertenece al rango válido.

La elección del ciclo depende de **qué controla la terminación**.

## Ejercicio 5. Control de producción

> Esta es una solución posible. Pueden existir otras divisiones correctas de funciones y procedimientos.

### Datos y repeticiones

El programa necesita:

```cpp
float produccion[30];
```

y una variable:

```cpp
int cantidad;
```

`cantidad` indica cuántas posiciones contienen información válida.

El registro termina cuando el usuario decide detenerse o cuando se alcanza la capacidad.

Los recorridos del arreglo tienen una cantidad conocida y pueden usar `for`.

El menú se repite hasta seleccionar `0`, por lo que puede utilizar `do-while`.

### Diseño posible

| Tarea                | Tipo          | Recibe                       | Retorna             |
| -------------------- | ------------- | ---------------------------- | ------------------- |
| Registrar producción | función       | arreglo y capacidad          | cantidad registrada |
| Mostrar datos        | procedimiento | arreglo y cantidad           | nada                |
| Calcular promedio    | función       | arreglo y cantidad           | promedio            |
| Encontrar mayor      | función       | arreglo y cantidad           | producción mayor    |
| Contar bajo promedio | función       | arreglo, cantidad y promedio | cantidad            |
| Consultar día        | procedimiento | arreglo y cantidad           | nada                |

### Solución

```cpp
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int registrarProduccion(float produccion[], int capacidad) {
    int cantidad = 0;
    char continuar = 'S';

    while (
        cantidad < capacidad &&
        (continuar == 'S' || continuar == 's')
    ) {
        cout << "Produccion del dia "
             << cantidad + 1 << ": ";

        cin >> produccion[cantidad];
        cantidad++;

        if (cantidad < capacidad) {
            cout << "Desea registrar otro dia? (S/N): ";
            cin >> continuar;
        }
    }

    return cantidad;
}

void mostrarProduccion(float produccion[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Dia " << i + 1
             << ": " << produccion[i]
             << endl;
    }
}

float calcularPromedio(float produccion[], int cantidad) {
    float suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += produccion[i];
    }

    return suma / cantidad;
}

float encontrarMayor(float produccion[], int cantidad) {
    float mayor = produccion[0];

    for (int i = 1; i < cantidad; i++) {
        if (produccion[i] > mayor) {
            mayor = produccion[i];
        }
    }

    return mayor;
}

int contarBajoPromedio(
    float produccion[],
    int cantidad,
    float promedio
) {
    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (produccion[i] < promedio) {
            contador++;
        }
    }

    return contador;
}

void consultarDia(float produccion[], int cantidad) {
    int dia;

    cout << "Dia que desea consultar: ";
    cin >> dia;

    if (dia >= 1 && dia <= cantidad) {
        cout << "Produccion del dia "
             << dia << ": "
             << produccion[dia - 1]
             << endl;
    } else {
        cout << "Dia invalido." << endl;
    }
}

int main() {
    const int CAPACIDAD = 30;
    float produccion[CAPACIDAD];

    int cantidad =
        registrarProduccion(produccion, CAPACIDAD);

    int opcion;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Mostrar produccion registrada" << endl;
        cout << "2. Calcular promedio" << endl;
        cout << "3. Mostrar produccion mayor" << endl;
        cout << "4. Contar dias por debajo del promedio" << endl;
        cout << "5. Consultar un dia" << endl;
        cout << "0. Terminar" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            mostrarProduccion(produccion, cantidad);

        } else if (opcion == 2) {
            cout << "Promedio: "
                 << calcularPromedio(produccion, cantidad)
                 << endl;

        } else if (opcion == 3) {
            cout << "Produccion mayor: "
                 << encontrarMayor(produccion, cantidad)
                 << endl;

        } else if (opcion == 4) {
            float promedio =
                calcularPromedio(produccion, cantidad);

            cout << "Dias por debajo del promedio: "
                 << contarBajoPromedio(
                        produccion,
                        cantidad,
                        promedio
                    )
                 << endl;

        } else if (opcion == 5) {
            consultarDia(produccion, cantidad);

        } else if (opcion != 0) {
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    return 0;
}
```

### Explicación de las decisiones

`registrarProduccion()` retorna la cantidad porque el resto del programa necesita saber cuántas posiciones fueron utilizadas.

`encontrarMayor()` inicia con:

```cpp
float mayor = produccion[0];
```

Así comienza con un dato que efectivamente existe. Después recorre desde la posición `1`.

Para contar valores bajo el promedio, primero debe calcularse el promedio.

### Casos de prueba

Con un solo valor:

```text
100
```

se espera:

```text
Promedio = 100
Mayor = 100
Días bajo promedio = 0
```

Con:

```text
100
120
80
100
```

se espera:

```text
Promedio = 100
Mayor = 120
Días bajo promedio = 1
```

También deben probarse el primer día, el último día y una posición inexistente.

## Ejercicio 6. Registro de tiempos de una competencia

> Esta es una posible solución. Otras divisiones de responsabilidades también pueden ser correctas.

Para concretar el requerimiento de “mostrar los tiempos que cumplen una condición”, se utilizará un límite y se mostrarán los tiempos menores que ese valor.

### Diseño posible

| Tarea                          | Tipo          |
| ------------------------------ | ------------- |
| registrar tiempos              | función       |
| mostrar tiempos                | procedimiento |
| calcular promedio              | función       |
| encontrar mejor tiempo         | función       |
| contar menores que un límite   | función       |
| buscar un tiempo               | función       |
| mostrar tiempos bajo un límite | procedimiento |

### Solución

```cpp
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int registrarTiempos(float tiempos[], int capacidad) {
    int cantidad = 0;
    char continuar = 'S';

    while (
        cantidad < capacidad &&
        (continuar == 'S' || continuar == 's')
    ) {
        cout << "Tiempo del deportista "
             << cantidad + 1 << ": ";

        cin >> tiempos[cantidad];
        cantidad++;

        if (cantidad < capacidad) {
            cout << "Desea registrar otro tiempo? (S/N): ";
            cin >> continuar;
        }
    }

    return cantidad;
}

void mostrarTiempos(float tiempos[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Deportista "
             << i + 1
             << ": "
             << tiempos[i]
             << endl;
    }
}

float calcularPromedio(float tiempos[], int cantidad) {
    float suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += tiempos[i];
    }

    return suma / cantidad;
}

float encontrarMejorTiempo(float tiempos[], int cantidad) {
    float mejor = tiempos[0];

    for (int i = 1; i < cantidad; i++) {
        if (tiempos[i] < mejor) {
            mejor = tiempos[i];
        }
    }

    return mejor;
}

int contarInferiores(
    float tiempos[],
    int cantidad,
    float limite
) {
    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (tiempos[i] < limite) {
            contador++;
        }
    }

    return contador;
}

bool existeTiempo(
    float tiempos[],
    int cantidad,
    float buscado
) {
    for (int i = 0; i < cantidad; i++) {
        if (tiempos[i] == buscado) {
            return true;
        }
    }

    return false;
}

void mostrarInferiores(
    float tiempos[],
    int cantidad,
    float limite
) {
    for (int i = 0; i < cantidad; i++) {
        if (tiempos[i] < limite) {
            cout << tiempos[i] << endl;
        }
    }
}

int main() {
    const int CAPACIDAD = 20;
    float tiempos[CAPACIDAD];

    int cantidad =
        registrarTiempos(tiempos, CAPACIDAD);

    int opcion;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Mostrar tiempos" << endl;
        cout << "2. Calcular promedio" << endl;
        cout << "3. Encontrar mejor tiempo" << endl;
        cout << "4. Contar tiempos inferiores a un valor" << endl;
        cout << "5. Buscar un tiempo" << endl;
        cout << "6. Mostrar tiempos inferiores a un valor" << endl;
        cout << "0. Terminar" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            mostrarTiempos(tiempos, cantidad);

        } else if (opcion == 2) {
            cout << "Promedio: "
                 << calcularPromedio(tiempos, cantidad)
                 << endl;

        } else if (opcion == 3) {
            cout << "Mejor tiempo: "
                 << encontrarMejorTiempo(tiempos, cantidad)
                 << endl;

        } else if (opcion == 4) {
            float limite;

            cout << "Tiempo limite: ";
            cin >> limite;

            cout << "Cantidad: "
                 << contarInferiores(
                        tiempos,
                        cantidad,
                        limite
                    )
                 << endl;

        } else if (opcion == 5) {
            float buscado;

            cout << "Tiempo que desea buscar: ";
            cin >> buscado;

            if (existeTiempo(tiempos, cantidad, buscado)) {
                cout << "El tiempo fue registrado." << endl;
            } else {
                cout << "El tiempo no fue registrado." << endl;
            }

        } else if (opcion == 6) {
            float limite;

            cout << "Tiempo limite: ";
            cin >> limite;

            mostrarInferiores(
                tiempos,
                cantidad,
                limite
            );

        } else if (opcion != 0) {
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    return 0;
}
```

### Explicación de las decisiones

El mejor tiempo es el menor:

```cpp
if (tiempos[i] < mejor)
```

porque en una competencia medida por tiempo, un valor menor representa normalmente un mejor desempeño.

`existeTiempo()` retorna `bool` porque responde una pregunta con dos posibles resultados:

```cpp
true
false
```

La función puede terminar apenas encuentra el dato:

```cpp
return true;
```

Si termina todo el recorrido sin encontrarlo:

```cpp
return false;
```

Para este nivel puede aceptarse:

```cpp
tiempos[i] == buscado
```

aunque más adelante conviene trabajar las precauciones necesarias para comparar valores `float`.

### Casos de prueba

Con:

```text
12.5
11.8
13.2
10.9
12.0
```

el promedio es:

```text
12.08
```

El mejor tiempo:

```text
10.9
```

Los tiempos menores que `12` son:

```text
11.8
10.9
```

por tanto la cantidad es:

```text
2
```

Buscar `13.2` debe indicar que existe; buscar `9.5`, que no fue registrado.

Para un límite de `12.5`, deben mostrarse:

```text
11.8
10.9
12.0
```

## Patrones que deberían quedar consolidados

### Recorrer y acumular

```cpp
for (...) {
    suma += arreglo[i];
}
```

### Recorrer y contar

```cpp
for (...) {
    if (condicion) {
        contador++;
    }
}
```

### Buscar un extremo

```cpp
float mayor = arreglo[0];

for (int i = 1; i < cantidad; i++) {
    if (arreglo[i] > mayor) {
        mayor = arreglo[i];
    }
}
```

### Buscar un elemento

```cpp
for (...) {
    if (arreglo[i] == buscado) {
        return true;
    }
}
```

### Repetición definida

```cpp
for (int i = 0; i < cantidad; i++)
```

### Repetición indefinida

```cpp
while (continuar == 'S')
```

o:

```cpp
do {
    ...
} while (opcion != 0);
```

### Capacidad frente a cantidad utilizada

```cpp
const int CAPACIDAD = 30;
```

no significa que existan 30 datos registrados.

La variable:

```cpp
int cantidad;
```

indica cuántos elementos contienen información válida.

### Función que retorna un resultado

```cpp
float calcularPromedio(...);
int contarInferiores(...);
bool existeTiempo(...);
```

### Procedimiento

```cpp
void mostrarTiempos(...);
void mostrarProduccion(...);
```

## Criterios para revisar soluciones alternativas

| Aspecto       | Pregunta de revisión                                 |
| ------------- | ---------------------------------------------------- |
| Datos         | ¿Procesa únicamente las posiciones válidas?          |
| Límites       | ¿Evita accesos fuera del arreglo?                    |
| Ciclos        | ¿La condición de terminación representa el problema? |
| Condicionales | ¿Las decisiones corresponden con el enunciado?       |
| Funciones     | ¿Cada función tiene una tarea comprensible?          |
| Parámetros    | ¿Recibe la información que necesita?                 |
| Retorno       | ¿El tipo de retorno corresponde al resultado?        |
| Dependencias  | ¿Calcula la información antes de utilizarla?         |
| Pruebas       | ¿Considera casos normales y límite?                  |
| Comprensión   | ¿El estudiante puede explicar sus decisiones?        |

En los ejercicios 5 y 6, una solución diferente puede considerarse correcta si cumple el comportamiento solicitado y el puedes justificar el diseño.
