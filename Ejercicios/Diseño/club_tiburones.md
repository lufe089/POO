# Taller de Programación: Gestión de Rendimiento - Club Tiburones

> Practica: Identificación de clases, atributos, metodos, relaciones y codificación de un ejercicio con varias clases

### Contexto Técnico
El profesor Steven requiere una herramienta para centralizar el seguimiento de sus deportistas en el "Club Tiburones". El sistema actual presenta fallos de integridad: cuando un nadador entrena de forma independiente, el Club no registra ese avance, lo que genera reportes desfasados. 

El objetivo es implementar un sistema basado en **Agregación** que garantice la consistencia de los datos mediante el uso de una **"Única Fuente de Verdad"** en la memoria.

---

## 1. Requerimientos Funcionales
El proyecto debe seguir una arquitectura modular de 5 archivos:

### Clase Nadador (`nadador.h`, `nadador.cpp`)
* Definir el atributo para el progreso acumulado (ej. `metrosRecorridos`).
* Implementar un método para actualizar la distancia (ej. `entrenar`).

### Clase ClubNatacion (`clubnatacion.h`, `clubnatacion.cpp`)
* Mantener un listado de los atletas inscritos mediante un `vector`.
* Incluir un método para registrar nadadores en el listado.
* Generar un reporte que muestre el estado actual de todos los integrantes.

### Módulo Principal (`main.cpp`)
* Crear las instancias de los nadadores que entrenan en la escuela.
* Controlar el flujo del programa mediante un menú de opciones (Agregar nadador, entrenar, mostrar reporte).
* Validar que la información del club se actualice automáticamente tras cada entrenamiento.

---

## 2. Restricción Técnica: Identidad del Objeto
Para cumplir con el modelo de Agregación, el Club debe observar directamente a los nadadores originales definidos en el `main.cpp`.

* **Integridad de datos:** El Club no debe almacenar copias de los objetos. Si un nadador aumenta sus metros en el `main.cpp`, el ClubNatacion debe reflejar ese cambio automáticamente sin necesidad de una nueva actualización manual en el listado.
* **Gestión de Memoria:** El `vector` del Club debe almacenar **direcciones de memoria (Punteros `*`)** en lugar de objetos independientes.

---

## 3. Estructura del Proyecto
La entrega debe constar de los siguientes archivos organizados de forma modular:

* **`nadador.h`**: Definición de la clase y sus atributos privados.
* **`nadador.cpp`**: Implementación de los métodos de entrenamiento.
* **`clubnatacion.h`**: Definición del gestor y su contenedor de punteros.
* **`clubnatacion.cpp`**: Lógica de registro y visualización de datos usando el operador flecha (`->`).
* **`main.cpp`**: Punto de entrada donde se instancian los nadadores, se vinculan al club y se verifica la sincronización en tiempo real.
