# Guía‑taller: Fundamentos de Git y GitHub

## Repositorios
### ¿Qué es un *repositorio*?

Un **repositorio** es el contenedor lógico que almacena **todo** el historial de un proyecto de software:

- **Archivos de código y recursos** (imágenes, datos, documentación).
- **Metadatos de control de versiones** (commits, ramas, etiquetas).
- **Evolución completa** del proyecto, permitiendo volver a cualquier versión anterior.

### Github classroom
#### ¿Qué es **GitHub Classroom**?

**GitHub Classroom** es un servicio gratuito que expande GitHub para **gestionar cursos de programación**: crea repositorios privados para cada estudiante o equipo, automatiza la entrega de tareas y centraliza la retro-alimentación.

#### ¿Para qué sirve?

| Necesidad docente | Funcionalidad de Classroom |
|-------------------|----------------------------|
| Distribuir plantillas de código | “Starter Code” se clona en cada repo de estudiante. |
| Garantizar privacidad | Repos privados por defecto; solo profes y dueños pueden verlos. |
| Monitorear progreso | **Dashboard** muestra clones, commits y estado de autograding. |
| Dar feedback estructurado | Pull Requests, comentarios en línea y rúbricas. |
| Trabajar en equipo | Asignaciones grupales con repos compartidos y roles claros. |

### Preparación del entorno

1. **Instalar Git** ⟶ [https://git‑scm.com/downloads](https://git‑scm.com/downloads).
2. Configurar identidad:

   ```bash
   git config --global user.name  "Tu Nombre"
   git config --global user.email "tu@correo.com"
   ```
3. (Opcional) Generar llave SSH y agregarla a GitHub.

### ¿Qué es Git?

**Git** es un sistema de control de versiones **distribuido** que permite llevar un historial completo y verificable de todos los cambios realizados a un proyecto de software. Cada copia del repositorio contiene la base de datos completa de versiones, lo que posibilita trabajar **sin conexión** y conservar trazabilidad de manera local.

| Concepto clave           | Descripción breve                                                               |
| ------------------------ | ------------------------------------------------------------------------------- |
| **Working Directory**    | Carpeta donde editas tus archivos.                                              |
| **Staging Area (index)** | Zona intermedia donde preparas cambios antes de confirmarlos.                   |
| **Commit**               | Foto inmutable del proyecto en un momento dado; incluye autor, fecha y mensaje. |
| **Repositorio local**    | Base de datos (en `.git/`) con todos los commits y referencias.                 |
| **HEAD**                 | Puntero al commit actual sobre el que estás trabajando.                         |

### Comandos útiles

1. **Inspeccionar** el estado actual:

   ```bash
   git status
   ```
2. **Seleccionar** los archivos que deseas registrar:

   ```bash
   git add <archivo_1> <archivo_2>
   ```
3. **Confirmar** los cambios con un mensaje descriptivo:

   ```bash
   git commit -m "Mensaje claro en modo imperativo"
   ```
4. **Revisar** el historial para verificar tu commit:

   ```bash
   git log --oneline --graph --decorate
   ```

## Clonar el repositorio
*  Haz clic en el enlace enviado.
*  Selecciona tu cuenta GitHub → Authorize.
*  Espera a que aparezca “Your assignment is ready!”
*  Copia la URL del nuevo repositorio (termina en tu usuario)

Explora la carpeta oculta `.git` y reflexiona sobre la información que almacena (historial, referencias, objetos)

## Registro y monitoreo local

| Acción         | Comando                                      | Propósito                                  |
| -------------- | -------------------------------------------- | ------------------------------------------ |
| Ver estado     | `git status`                                 | Conocer archivos modificados/no rastreados |
| Historial      | `git log --oneline --graph --decorate`       | Visualizar commits                         |
| Añadir cambios | `git add <ruta>`                             | Mover al *staging area*                    |
| Confirmar      | `git commit -m "Mensaje en modo imperativo"` | Crear snapshot                             |

> **Ejercicio 1**
> Crea `TU_NOMBRE.md`, añade la primera estrofa del himno y registra los cambios siguiendo los comandos anteriores.
> *Tip:* usa `git log -p` para ver las diferencias.

## Buenas prácticas de mensajes *commit*

* Línea 1 ≤ 50 caracteres, modo imperativo: “Añade sección de objetivos”.
* Línea 2 vacía.
* Detalles adicionales a partir de la línea 3.

> **Ejercicio 2**
> Realiza **tres** commits consecutivos, cada uno siguiendo la convención anterior. Observa cómo se ve en `git log`.

### Creación de `README.md` (RA 0.13)

### ¿Qué es un README?

Un **README** es el archivo de presentación de un proyecto de software —su *tarjeta de bienvenida*— y suele ser el primer elemento que alguien lee al visitar un repositorio en GitHub. Sirve para:

* **Contextualizar**: explicar qué problema resuelve el proyecto y por qué existe.
* **Orientar**: indicar cómo instalarlo, usarlo y, opcionalmente, cómo contribuir.
* **Comunicar**: mostrar licencias, autores, dependencias y estado del proyecto (badges de CI, versión, etc.).

> Piensa en el README como la “carta de instrucciones” que tu *yo* del futuro (o cualquier colaborador) agradecerá encontrar cuando vuelva al proyecto.

> **Ejercicio 3**
>
> 1. Crea el archivo `README.md` en la raíz del repositorio.
> 2. Redáctalo usando sintaxis Markdown (`#` títulos, listas `-`, bloques de código `bash`).

<details>
<summary>¿Qué es Markdown y por qué es útil?</summary>

**Markdown** es un lenguaje de marcado ligero que permite escribir documentos con formato de manera **rápida** y **legible** usando únicamente texto plano. Al guardarse como `.md`, GitHub y otras plataformas lo transforman automáticamente a HTML, mostrando encabezados, listas, tablas y bloques de código con resaltado de sintaxis.

### Ventajas clave

| Ventaja                         | Impacto en proyectos                                                                              |
| ------------------------------- | ------------------------------------------------------------------------------------------------- |
| **Portabilidad**                | El archivo sigue siendo texto plano → compatible con cualquier editor.                            |
| **Lectura inmediata**           | No necesita compilarse: el contenido es legible tanto en bruto como renderizado.                  |
| **Control de versiones óptimo** | Al ser texto, los `diff` de Git muestran exactamente qué cambió.                                  |
| **Simplicidad**                 | La sintaxis básica se aprende en minutos y evita dependencias de procesadores de texto complejos. |

### Ejemplos rápidos

````markdown
# Título H1

- Elemento de lista
- Otro elemento

```bash
# Bloque de código con lenguaje especificado
make build
````

</details>


### Gestión de `.gitignore` (RA 0.14)

1. Crea `.gitignore` con las reglas:

   ```gitignore
   # Archivos de sistema
   *.DS_Store

   # Compilados C++
   *.o
   *.exe
   build/
   ```
2. Ejecuta `git status` para verificar que los archivos listados desaparecen del seguimiento.

> **Ejercicio 4**
> Crea un archivo temporal `notas.tmp`, añade regla `*.tmp` al `.gitignore` y verifica el efecto.
