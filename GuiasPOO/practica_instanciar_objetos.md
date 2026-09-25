# Guía de práctica: clases, atributos, métodos y objetos

## Objetivo

Practicar la creación de clases en C++, definiendo atributos y métodos, creando objetos y utilizando la información almacenada en ellos.

⏱️ **Tiempo estimado: 2 horas**

---

## 1. Recordatorio rápido

Una clase representa un tipo de elemento.

* Los **atributos** almacenan información.
* Los **métodos** utilizan esa información para mostrar datos, realizar cálculos o modificar el estado del objeto.
* Un **objeto** es una instancia concreta de una clase.

Durante la práctica piensa siempre:

> ¿Qué necesita recordar este objeto?

> ¿Qué debería poder hacer con esa información?

---

## 2. Caso 1: `Cortometraje`

Una muestra audiovisual necesita representar los cortometrajes creados por estudiantes.

Cada cortometraje tiene:

* título;
* director;
* duración en minutos;
* año de producción;
* cantidad de reproducciones.

Debe poder:

* mostrar su información;
* indicar si dura más de 15 minutos;
* calcular cuántos minutos se necesitan para proyectarlo tres veces;
* registrar una nueva reproducción;
* mostrar cuántas reproducciones tiene.

### Antes de programar

Completa:

| ¿Qué debe recordar? | ¿Qué debe poder hacer? |
| ------------------- | ---------------------- |
|                     |                        |
|                     |                        |
|                     |                        |

### Implementación

Crea:

```text
Cortometraje.h
Cortometraje.cpp
main.cpp
```

En `main.cpp` crea al menos **dos cortometrajes diferentes** y prueba todos sus métodos.

Antes de registrar una nueva reproducción, predice qué valor debería cambiar.

### Reto

Agrega un método que calcule cuántos minutos se han acumulado entre todas las reproducciones del cortometraje.

---

## 3. Caso 2: `ExperienciaVR`

Una muestra interactiva presenta experiencias de realidad virtual.

Cada experiencia tiene:

* nombre;
* temática;
* duración en minutos;
* precio de ingreso;
* cantidad de personas que la han utilizado.

Debe poder:

* mostrar su información;
* indicar si dura más de 10 minutos;
* calcular cuánto dinero ha recaudado;
* registrar la participación de una nueva persona;
* mostrar cuántas personas la han utilizado.

### Antes de programar

Para una experiencia con estos datos:

```text
Nombre: Viaje a Marte
Duración: 12 minutos
Precio: 12000
Participantes: 8
```

responde:

* ¿dura más de 10 minutos?
* ¿cuánto dinero ha recaudado?
* ¿cuántos participantes tendrá después de registrar una persona nueva?

### Implementación

Crea:

```text
ExperienciaVR.h
ExperienciaVR.cpp
```

En `main.cpp` crea al menos **dos experiencias diferentes** y prueba todos sus métodos.

### Reto

Agrega un método nuevo que utilice uno o más atributos para producir un resultado.

---

## 4. Cierre

Compara las dos clases y responde:

1. ¿Qué diferencia hay entre un atributo y un método?
2. ¿Qué método modifica el estado de cada objeto?
3. ¿Qué métodos calculan resultados usando atributos?
4. ¿Por qué dos objetos de la misma clase pueden producir resultados diferentes?

Antes de terminar, verifica que:

* creaste objetos de las dos clases;
* cada objeto tiene información diferente;
* llamaste todos los métodos;
* modificaste al menos un atributo mediante un método;
* comprobaste que un objeto no modifica automáticamente a otro.
