# Ejercicios de ciclos de repetición definida con arreglos estáticos

## Propósito

Estos ejercicios permiten practicar ciclos `for` con arreglos estáticos de enteros en C++. El foco está en dos patrones frecuentes:

- **Acumulación:** recorrer un arreglo y construir un único resultado, por ejemplo una suma, un conteo o un valor máximo.
- **Transformación:** recorrer un arreglo y producir nuevos valores a partir de los elementos originales, generalmente almacenándolos en otro arreglo.

Cada ejercicio es independiente. No es necesario conservar variables ni resultados de ejercicios anteriores.
>HAGALOS EN PAPEL
Para todos los ejercicios se recomienda trabajar con arreglos estáticos de tipo `int` y ciclos `for`.

```text
**Prompt para revisar**: Actúa como tutor socrático de programación en C++.

Estoy aprendiendo a trabajar con ciclos `for` de repetición definida y arreglos estáticos de enteros. Estoy practicando especialmente dos patrones:

1. Acumulación: recorrer un arreglo para construir un resultado, como una suma, un conteo, un máximo o un mínimo.
2. Transformación: recorrer un arreglo para producir valores modificados y almacenarlos en otro arreglo.

Voy a adjuntar una fotografía o captura de pantalla de mi solución a un ejercicio.

Tu tarea es ayudarme a revisar y corregir mi propio código mediante preguntas. No debes resolver el ejercicio por mí.

Sigue estas reglas:

- Lee el código de la imagen antes de comenzar.
- Pideme que te diga cuál era el ejercicio
- Si alguna parte de la imagen no se puede leer con suficiente claridad, pregúntame qué dice esa parte. No inventes código.
- Identifica qué intenta hacer mi solución y qué patrón parece utilizar.
- No escribas inmediatamente una versión corregida del código.
- No me digas directamente cuál es el error si puedo descubrirlo mediante una pregunta.
- Haz UNA pregunta a la vez y espera mi respuesta antes de continuar.
- Empieza por preguntas generales y avanza hacia preguntas más específicas solamente si lo necesito.
- Cuando encuentres un posible error, dirige mi atención hacia esa parte del código y pregúntame qué creo que sucede allí.
- Puedes pedirme que haga una traza manual de una o dos iteraciones del ciclo.
- Puedes preguntarme por el valor que tendría una variable en un momento determinado.
- Puedes pedirme que compare lo que esperaba obtener con lo que produce el código.
- Si respondo incorrectamente, no reveles inmediatamente la respuesta. Dame una pista pequeña y vuelve a preguntarme.
- Si después de varias pistas sigo sin encontrar el problema, explícame el concepto que necesito, pero deja que yo proponga el cambio en el código.
- No introduzcas `vector`, arreglos dinámicos, ciclos `while`, funciones o herramientas más avanzadas para reemplazar mi solución.
- Trabaja con los conceptos del ejercicio: arreglos estáticos de `int`, posiciones del arreglo, ciclo `for`, condiciones, acumuladores, contadores y arreglos de transformación.
- No cambies mi estrategia si puede corregirse con los conceptos que estoy practicando.

Cuando yo crea que terminé, revisa nuevamente toda mi solución.

Si todavía existe un problema, continúa con preguntas.

Si la solución ya es correcta, indícamelo y hazme una última pregunta para comprobar que entiendo por qué funciona.

Comienza observando mi imagen y dime brevemente qué entiendes que intenta hacer mi código. Después hazme solamente la primera pregunta.
```

## Parte 1. Patrones de acumulación

### Ejercicio 1. Sumar todos los elementos

Dado el siguiente arreglo:

```cpp
int numeros[6] = {4, 7, 2, 9, 5, 3};
```

Escriba un funcion/procedimiento que recorra el arreglo y calcule la suma de todos sus elementos.

El resultado esperado es:

```text
La suma es: 30
```

---

### Ejercicio 2. Contar números pares

Dado el siguiente arreglo:

```cpp
int numeros[8] = {5, 8, 12, 3, 7, 10, 4, 9};
```

Escriba un funcion/procedimiento que recorra el arreglo y cuente cuántos números pares contiene.

El resultado esperado es:

```text
Cantidad de numeros pares: 4
```

---

### Ejercicio 3. Sumar solamente los valores positivos

Dado el siguiente arreglo:

```cpp
int valores[7] = {-4, 6, -2, 9, 3, -5, 8};
```

Escriba un funcion/procedimiento que calcule la suma únicamente de los valores mayores que cero.

El resultado esperado es:

```text
Suma de positivos: 26
```

---

### Ejercicio 4. Contar valores mayores que un límite

Dado el siguiente arreglo:

```cpp
int edades[8] = {14, 21, 18, 25, 16, 30, 19, 17};
```

Escriba un funcion/procedimiento que cuente cuántos valores son mayores o iguales a 18.

El resultado esperado es:

```text
Cantidad de valores mayores o iguales a 18: 5
```

---

### Ejercicio 5. Encontrar el valor mayor

Dado el siguiente arreglo:

```cpp
int numeros[7] = {13, 5, 21, 8, 17, 4, 19};
```

Escriba un funcion/procedimiento que recorra el arreglo y determine cuál es el valor más grande.

Para resolverlo, se debe utilizar una variable acumuladora que conserve el mayor valor encontrado hasta cada posición del recorrido.

El resultado esperado es:

```text
El valor mayor es: 21
```

---

## Parte 2. Patrones de transformación

### Ejercicio 6. Multiplicar cada elemento por dos

Dado el siguiente arreglo:

```cpp
int numeros[5] = {3, 6, 2, 8, 4};
```

Cree un segundo arreglo del mismo tamaño. Recorra el arreglo original y almacene en el nuevo arreglo cada valor multiplicado por dos.

El arreglo transformado debe contener:

```text
6 12 4 16 8
```

---

### Ejercicio 7. Convertir valores negativos en positivos

Dado el siguiente arreglo:

```cpp
int valores[6] = {-3, 7, -5, 2, -9, 4};
```

Cree un segundo arreglo que contenga los mismos valores, pero transformando los números negativos en positivos.

No se debe modificar el arreglo original.

El arreglo transformado debe contener:

```text
3 7 5 2 9 4
```

---

### Ejercicio 8. Aumentar una puntuación

Dado el siguiente arreglo:

```cpp
int puntajes[6] = {50, 70, 65, 80, 90, 55};
```

Cree un segundo arreglo en el que cada puntaje tenga un aumento de 5 puntos.

Si el resultado supera 100, el valor almacenado debe ser 100.

El arreglo transformado debe contener:

```text
55 75 70 85 95 60
```

---

### Ejercicio 9. Reemplazar valores según una condición

Dado el siguiente arreglo:

```cpp
int temperaturas[7] = {18, 22, 15, 30, 27, 12, 25};
```

Cree un segundo arreglo siguiendo esta regla:

- si la temperatura es menor que 20, almacenar `0`;
- si la temperatura es mayor o igual a 20, conservar el valor original.

El arreglo transformado debe contener:

```text
0 22 0 30 27 0 25
```

---

### Ejercicio 10. Clasificar valores con códigos numéricos

Dado el siguiente arreglo:

```cpp
int notas[8] = {45, 72, 88, 59, 91, 67, 50, 76};
```

Cree un segundo arreglo usando las siguientes reglas:

- almacenar `0` si la nota es menor que 60;
- almacenar `1` si la nota está entre 60 y 79;
- almacenar `2` si la nota es mayor o igual a 80.

El arreglo resultante debe contener:

```text
0 1 2 0 2 1 0 1
```

---

## Parte 3. Ejercicios de integración

### Ejercicio 11. Calcular la suma y contar coincidencias

Dado el siguiente arreglo:

```cpp
int ventas[8] = {120, 80, 150, 60, 200, 95, 140, 75};
```

En un mismo recorrido del arreglo, calcule:

1. la suma total de las ventas;
2. la cantidad de ventas mayores o iguales a 100.

Resultados esperados:

```text
Total de ventas: 920
Ventas mayores o iguales a 100: 4
```

---

### Ejercicio 12. Transformar y acumular

Dado el siguiente arreglo:

```cpp
int precios[6] = {100, 200, 150, 80, 120, 250};
```

Cree un segundo arreglo aplicando un aumento de 10 unidades a cada precio.

Durante el mismo recorrido, calcule también la suma de los valores transformados.

El nuevo arreglo debe contener:

```text
110 210 160 90 130 260
```

La suma esperada es:

```text
Total transformado: 960
```

---

## Recomendaciones de trabajo

En cada ejercicio se debe identificar primero qué papel cumple cada variable dentro del ciclo.

En los ejercicios de acumulación suele aparecer una variable que conserva un resultado parcial, por ejemplo:

```cpp
int acumulador = 0;
```

En los ejercicios de transformación suele utilizarse un segundo arreglo para almacenar los valores producidos durante el recorrido:

```cpp
int resultado[6];
```

El ciclo de repetición definida mantiene una estructura similar:

```cpp
for (int i = 0; i < TAMANIO; i++) {
    // operación con arreglo[i]
}
```

La variable `i` representa la posición que se está recorriendo. El límite del ciclo debe coincidir con la cantidad de posiciones disponibles en el arreglo.
