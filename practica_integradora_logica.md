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
