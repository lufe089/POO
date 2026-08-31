# Ejercicios de ciclos de repetición indefinida

La idea de estos ejercicios es que practiques y te des la oportunidad de pensar antes de buscar una respuesta.

**Si un ejercicio no sale a la primera, eso hace parte del proceso normal de aprender a programar.** Programar se aprende intentando construir una solución, encontrando errores, revisando qué ocurrió, haciendo cambios y volviendo a probar.

En los ciclos de repetición indefinida aparece una dificultad nueva: muchas veces **no sabemos antes de comenzar cuántas veces tendrá que repetirse una acción**.

El ciclo continúa mientras se cumpla una condición.

Por eso, en cada ejercicio será necesario pensar especialmente en tres cosas:

1. ¿Qué condición permite que el ciclo continúe?
2. ¿Qué puede hacer que esa condición cambie?
3. ¿En qué momento debe terminar el ciclo?

Si alguna de estas partes queda mal planteada, puede ocurrir que el ciclo termine antes de tiempo o que nunca termine.

> **HÁGALOS EN PAPEL**

Intente primero cada ejercicio por su cuenta. Si algo falla, siga algunas iteraciones manualmente y anote cómo cambian las variables.

## Propósito

Estos ejercicios permiten practicar ciclos de repetición indefinida en C++, principalmente mediante `while` y `do-while`.

El foco estará en patrones frecuentes como:

* repetir mientras se cumpla una condición;
* leer valores hasta recibir un valor especial;
* validar una entrada;
* acumular valores durante una cantidad desconocida de repeticiones;
* contar cuántas veces ocurrió algo;
* detener un proceso cuando se alcanza una condición.

Cada ejercicio es independiente.

---

## Recordatorio: ciclo `while`

La estructura general de un ciclo `while` es:

```cpp
while (condicion) {
    // instrucciones que se repiten
}
```

La condición se evalúa **antes de comenzar cada repetición**.

Si la condición es verdadera, se ejecutan las instrucciones del ciclo.

Después se vuelve a evaluar la condición.

Por ejemplo:

```cpp
int numero = 1;

while (numero <= 5) {
    cout << numero << endl;
    numero++;
}
```

El resultado sería:

```text
1
2
3
4
5
```

Observe que la variable `numero` cambia dentro del ciclo.

Si se eliminara:

```cpp
numero++;
```

la condición:

```cpp
numero <= 5
```

seguiría siendo verdadera porque `numero` permanecería en `1`.

El ciclo continuaría indefinidamente.

---

# Parte 1. Comprender el funcionamiento de `while`

## Ejercicio 1. Seguir el ciclo

Analice el siguiente código sin ejecutarlo:

```cpp
int numero = 2;

while (numero <= 10) {
    cout << numero << " ";
    numero = numero + 2;
}
```

Escriba:

1. los valores que se imprimen;
2. el valor de `numero` después de cada repetición;
3. el valor que tendrá `numero` cuando termine el ciclo.

Resultado esperado:

```text
2 4 6 8 10
```

---

## Ejercicio 2. ¿Cuántas veces se repite?

Analice:

```cpp
int contador = 10;

while (contador > 0) {
    cout << contador << " ";
    contador = contador - 2;
}
```

Determine:

1. cuántas veces se ejecuta el ciclo;
2. qué valores se imprimen;
3. cuál es el primer valor de `contador` que hace falsa la condición.

---

## Ejercicio 3. Encontrar el problema

Analice:

```cpp
int numero = 1;

while (numero < 10) {
    cout << numero << endl;
}
```

Responda:

1. ¿qué valor tiene `numero` en la primera repetición?
2. ¿qué valor tendrá después de ejecutar el cuerpo del ciclo?
3. ¿la condición `numero < 10` llegará a ser falsa?
4. ¿qué problema presenta este código?

Proponga el cambio necesario para que se impriman los números del `1` al `9`.

---

## Ejercicio 4. Escribir un recorrido con `while`

Escriba una función o procedimiento que utilice un ciclo `while` para mostrar:

```text
5 10 15 20 25 30
```

Antes de escribir el código, determine:

```text
Valor inicial: __________

Condición para continuar: __________

Cambio realizado en cada repetición: __________
```

---

# Parte 2. Repetir hasta recibir un valor especial

En algunos problemas no se conoce cuántos datos serán ingresados.

Una forma de indicar que la entrada terminó consiste en utilizar un **valor centinela**.

El centinela es un valor reservado para indicar que el proceso debe terminar.

Por ejemplo, un programa podría pedir números hasta que el usuario escriba `-1`.

---

## Ejercicio 5. Leer hasta encontrar el centinela

Escriba una función o procedimiento que solicite números enteros al usuario.

El programa debe continuar solicitando números mientras el usuario no ingrese:

```text
-1
```

El valor `-1` indica que termina la entrada.

Ejemplo:

```text
Ingrese un numero: 8
Ingrese un numero: 4
Ingrese un numero: 15
Ingrese un numero: 2
Ingrese un numero: -1
Fin
```

El `-1` sirve únicamente para terminar y no debe procesarse como un dato.

---

## Ejercicio 6. Sumar hasta encontrar el centinela

Modifique la idea anterior.

El usuario ingresará números enteros hasta escribir `-1`.

El programa debe calcular la suma de todos los valores ingresados antes del centinela.

Ejemplo:

```text
Ingrese un numero: 5
Ingrese un numero: 8
Ingrese un numero: 3
Ingrese un numero: -1

Suma: 16
```

Antes de escribir el código, identifique:

```text
Variable que almacena cada entrada: __________

Variable acumuladora: __________

Valor centinela: __________

Condición que mantiene el ciclo: __________
```

---

## Ejercicio 7. Contar datos ingresados

El usuario ingresa números hasta escribir `0`.

El programa debe indicar cuántos números fueron ingresados antes del `0`.

Ejemplo:

```text
Ingrese un numero: 7
Ingrese un numero: 12
Ingrese un numero: -3
Ingrese un numero: 8
Ingrese un numero: 0

Cantidad de numeros ingresados: 4
```

El `0` no debe contarse.

---

# Parte 3. Acumulación y condiciones

## Ejercicio 8. Sumar solamente los positivos

El usuario ingresará números enteros hasta escribir `0`.

Calcule la suma únicamente de los números positivos.

Ejemplo:

```text
5
-3
8
-7
4
0
```

Resultado esperado:

```text
Suma de positivos: 17
```

---

## Ejercicio 9. Contar pares e impares

El usuario ingresa números hasta escribir `0`.

Al terminar, muestre:

* cantidad de números pares;
* cantidad de números impares.

El valor `0` solamente indica que termina la entrada y no debe incluirse en ninguno de los conteos.

Ejemplo:

```text
Ingrese un numero: 7
Ingrese un numero: 4
Ingrese un numero: 10
Ingrese un numero: 3
Ingrese un numero: 0
```

Resultado esperado:

```text
Pares: 2
Impares: 2
```

---

## Ejercicio 10. Encontrar el mayor

El usuario ingresará números positivos.

La entrada termina cuando escriba `0`.

Determine cuál fue el mayor número ingresado.

Ejemplo:

```text
Ingrese un numero: 12
Ingrese un numero: 8
Ingrese un numero: 25
Ingrese un numero: 17
Ingrese un numero: 0
```

Resultado esperado:

```text
Mayor: 25
```

Piense especialmente cómo debe inicializarse la variable que conserva el mayor valor encontrado.

---

# Parte 4. Validación de datos

Un ciclo indefinido también puede utilizarse cuando una entrada debe repetirse hasta que cumpla una condición.

## Ejercicio 11. Validar una edad

Solicite una edad.

La edad solamente será aceptada si se encuentra entre `0` y `120`.

Mientras el usuario ingrese un valor fuera de ese rango, el programa debe pedir nuevamente la edad.

Ejemplo:

```text
Ingrese edad: -5
Edad no valida.

Ingrese edad: 150
Edad no valida.

Ingrese edad: 21
Edad aceptada.
```

No se conoce de antemano cuántos intentos necesitará el usuario.

---

## Ejercicio 12. Validar una nota

Solicite una nota entre `0` y `100`.

Mientras el valor esté fuera de ese intervalo, vuelva a solicitarlo.

Ejemplo:

```text
Ingrese una nota: 130
Valor no valido.

Ingrese una nota: -8
Valor no valido.

Ingrese una nota: 85
Nota registrada: 85
```

---

# Parte 5. Ejercicios de integración

## Ejercicio 13. Promedio de una cantidad desconocida de datos

El usuario ingresará calificaciones entre `0` y `100`.

La entrada termina cuando escriba `-1`.

Al terminar, muestre:

1. cantidad de calificaciones ingresadas;
2. suma de las calificaciones;
3. promedio.

Ejemplo:

```text
80
70
90
60
-1
```

Resultado esperado:

```text
Cantidad: 4
Suma: 300
Promedio: 75
```

El `-1` no pertenece al conjunto de calificaciones.

---

## Ejercicio 14. Ventas hasta alcanzar una meta

Una tienda desea registrar ventas hasta alcanzar al menos `1000` unidades monetarias.

El programa solicita el valor de cada venta y mantiene acumulado el total.

Cuando el total llegue o supere `1000`, termina el ciclo.

Ejemplo:

```text
Venta: 200
Acumulado: 200

Venta: 350
Acumulado: 550

Venta: 180
Acumulado: 730

Venta: 300
Acumulado: 1030
```

Resultado:

```text
Meta alcanzada.
Total vendido: 1030
```

En este caso no existe un centinela. El ciclo termina porque **el estado del problema cambia**.

---

## Ejercicio 15. Intentos hasta acertar

Defina:

```cpp
int secreto = 7;
```

Solicite al usuario un número hasta que escriba correctamente el valor almacenado en `secreto`.

Por cada intento incorrecto muestre:

```text
Intente nuevamente.
```

Cuando acierte:

```text
Correcto.
```

Además, indique cuántos intentos fueron necesarios.

Ejemplo:

```text
Numero: 3
Intente nuevamente.

Numero: 9
Intente nuevamente.

Numero: 7
Correcto.

Intentos: 3
```

---

# Parte 6. `do-while`

La estructura general de `do-while` es:

```cpp
do {
    // instrucciones
} while (condicion);
```

En este caso, las instrucciones se ejecutan antes de evaluar la condición.

Por eso, el cuerpo de un `do-while` se ejecuta **al menos una vez**.

## Ejercicio 16. Analizar `do-while`

Analice:

```cpp
int numero = 10;

do {
    cout << numero << endl;
    numero++;
} while (numero < 5);
```

Responda:

1. ¿se ejecuta el `cout`?
2. ¿cuántas veces?
3. ¿por qué ocurre esto si inicialmente `numero < 5` es falso?

---

## Ejercicio 17. Menú sencillo

Construya un programa que muestre:

```text
1. Saludar
2. Mostrar un mensaje
0. Salir
```

El menú debe volver a aparecer después de ejecutar una opción.

Debe terminar únicamente cuando el usuario seleccione `0`.

Para este ejercicio utilice `do-while`.

No es necesario construir operaciones complejas para las opciones. Puede mostrarse simplemente un mensaje asociado con cada una.

---

# Prompt de apoyo para revisar y aprender

```text
Actúa como tutor socrático de programación en C++.

Estoy aprendiendo ciclos de repetición indefinida utilizando `while` y `do-while`.

Voy a adjuntar una fotografía o captura de mi solución a uno de los ejercicios.

Tu tarea es ayudarme a revisar y corregir mi propio código mediante preguntas. No debes resolver el ejercicio por mí.

Sigue estas reglas:

- Lee primero el código de la imagen.
- Pídeme que te diga cuál era el ejercicio.
- Si alguna parte no se puede leer con claridad, pregúntame qué dice. No inventes código.
- Identifica qué condición controla el ciclo.
- Ayúdame a revisar qué variables cambian dentro del ciclo.
- No escribas inmediatamente una versión corregida.
- Haz UNA pregunta a la vez.
- Cuando exista un posible ciclo infinito, ayúdame a descubrir qué condición permanece verdadera y qué variable debería cambiar.
- Puedes pedirme que haga una traza manual de dos o tres repeticiones.
- Puedes preguntarme qué valor tiene una variable antes y después de una iteración.
- Si existe un valor centinela, ayúdame a identificar cuándo debe leerse y si debe procesarse o solamente terminar el ciclo.
- Revisa que los acumuladores y contadores se actualicen solamente cuando corresponde.
- Si utilizo `do-while`, pregúntame por qué necesito que el cuerpo se ejecute al menos una vez.
- No reemplaces mi solución con un ciclo `for` si el ejercicio busca practicar `while` o `do-while`.
- No introduzcas conceptos más avanzados para resolver el ejercicio.
- Si respondo incorrectamente, dame una pista pequeña y vuelve a preguntarme.
- Si después de varias pistas sigo sin encontrar el problema, explícame el concepto necesario, pero deja que yo proponga el cambio.

Cuando crea que terminé, revisa nuevamente toda mi solución.

Si todavía existe un problema, continúa mediante preguntas.

Si la solución es correcta, indícamelo y hazme una última pregunta para comprobar que entiendo por qué el ciclo termina.

Comienza observando mi imagen, dime brevemente qué entiendes que intenta hacer mi código y haz solamente la primera pregunta.
```

## Cómo usar el prompt

* Resuelva primero el ejercicio por su cuenta.
* Tome una foto o captura clara de su código.
* Copie el prompt y adjunte la imagen.
* Responda una a una las preguntas del tutor.
* Haga usted mismo los cambios en el código.
* Si es necesario, comparta nuevamente la solución corregida.
