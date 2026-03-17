# Taller de Programación: Gestión de Rendimiento - Club Tiburones

> **Práctica:** Identificación de clases, atributos, métodos, relaciones de asociación y gestión de objetos mediante copias.

### Contexto del Proyecto
El profesor Steven requiere una herramienta para organizar el seguimiento de sus deportistas en el **"Club Tiburones"**. El objetivo es que el sistema sea capaz de registrar el progreso de cada nadador y generar reportes consolidados que resuman el desempeño del equipo.

En esta práctica, nos enfocaremos en la **encapsulación** y en cómo los objetos se comunican entre sí para mantener la información organizada utilizando el almacenamiento por valor (copias).

---

## 1. Requerimientos Funcionales

### Clase `Nadador` (`nadador.h`, `nadador.cpp`)
Representa a cada atleta de forma individual. Es la unidad básica de información del sistema.
* **Atributos:** `nombre` (string) y `metrosRecorridos` (int).
* **Métodos:** * **Constructor:** Debe inicializar el nombre del atleta y establecer sus metros iniciales en 0.
    * **`entrenar(int metros)`:** Recibe una cantidad de metros y los suma al acumulado actual del nadador.
    * **Getters:** Métodos para consultar el nombre y la distancia recorrida.

### Clase `ClubNatacion` (`clubnatacion.h`, `clubnatacion.cpp`)
Es la entidad encargada de agrupar y gestionar a los deportistas.
* **Atributo:** Un contenedor `std::vector<Nadador>` para almacenar la lista de atletas inscritos.
* **Métodos:**
    * **`registrarNadador(Nadador n)`:** Recibe un objeto de tipo `Nadador` y lo añade al vector. 
    * **`generarReporte()`:** Recorre la lista de nadadores y muestra en pantalla el estado actual (nombre y metros) de cada uno.

---

## 2. Guía Técnica: Flujo por Copia
Para este ejercicio, utilizaremos el paso de objetos **por valor**. Esto implica que:

1. Al crear un nadador en el `main.cpp`, este existe de forma independiente.
2. Al llamar a `registrarNadador`, el Club recibe una **copia exacta** (un clon) del objeto y la guarda en su vector.
3. El Club gestionará su propia lista de atletas basándose en los datos recibidos en el momento del registro.

---

## 3. Estructura del Proyecto
El proyecto debe implementarse de forma modular, distribuyendo el código en los siguientes 5 archivos:

* **`nadador.h`**: Definición de la clase y firmas de sus métodos.
* **`nadador.cpp`**: Implementación de la lógica del atleta y sus entrenamientos.
* **`clubnatacion.h`**: Definición del gestor y su contenedor de datos.
* **`clubnatacion.cpp`**: Lógica para el registro y la visualización de reportes.
* **`main.cpp`**: Punto de entrada del programa. Debe permitir:
    1. Crear instancias de nadadores.
    2. Registrar entrenamientos iniciales.
    3. Inscribir a los nadadores en el club.
    4. Mostrar el reporte final para verificar la correcta transferencia de datos.

---

## 4. Criterios de Evaluación
* **Modularidad:** Correcta separación entre archivos de cabecera (`.h`) e implementación (`.cpp`).
* **Encapsulación:** Uso apropiado de modificadores de acceso (`public`, `private`).
* **Lógica:** Funcionamiento correcto del acumulador de metros y del reporte del club.
