# Guía‑taller: Fundamentos de Git y GitHub

> **Repositorio base:** [https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089](https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089)
>
> **Duración sugerida:** 2 sesiones (3 h cada una)
>
> **Resultados de aprendizaje cubiertos**
>
> * **0.8** Clonar repositorios remotos (HTTPS/SSH)
> * **0.9** Sincronizar código con *add / commit / push / pull*
> * **0.10** Describir cambios con mensajes de *commit* claros
> * **0.11** Detectar y resolver conflictos simples
> * **0.12** Aplicar `git status`, `git log`, `git add`, `git commit`
> * **0.13** Elaborar `README.md` en Markdown
> * **0.14** Interpretar `.gitignore`
> * **0.15** Comprender la importancia de Git/GitHub

---

## 1 · Preparación del entorno

1. **Instalar Git** ⟶ [https://git‑scm.com/downloads](https://git‑scm.com/downloads).
2. Configurar identidad:

   ```bash
   git config --global user.name  "Tu Nombre"
   git config --global user.email "tu@correo.com"
   ```
3. (Opcional) Generar llave SSH y agregarla a GitHub.

## 2 · Clonar el repositorio inicial (RA 0.8)

```bash
git clone https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089.git
cd 2-git-conflictos-lufe089
```

Explora la carpeta oculta `.git` y reflexiona sobre la información que almacena (historial, referencias, objetos) ([github.com](https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089)).

## 3 · Registro y monitoreo local (RA 0.12)

| Acción         | Comando                                      | Propósito                                  |
| -------------- | -------------------------------------------- | ------------------------------------------ |
| Ver estado     | `git status`                                 | Conocer archivos modificados/no rastreados |
| Historial      | `git log --oneline --graph --decorate`       | Visualizar commits                         |
| Añadir cambios | `git add <ruta>`                             | Mover al *staging area*                    |
| Confirmar      | `git commit -m "Mensaje en modo imperativo"` | Crear snapshot                             |

> **Ejercicio 1**
> Crea `TU_NOMBRE.md`, añade la primera estrofa del himno y registra los cambios siguiendo los comandos anteriores.
> *Tip:* usa `git log -p` para ver las diferencias.

## 4 · Buenas prácticas de mensajes *commit* (RA 0.10)

* Línea 1 ≤ 50 caracteres, modo imperativo: “Añade sección de objetivos”.
* Línea 2 vacía.
* Detalles adicionales a partir de la línea 3.

> **Ejercicio 2**
> Realiza **tres** commits consecutivos, cada uno siguiendo la convención anterior. Observa cómo se ve en `git log`.

## 5 · Creación de `README.md` (RA 0.13)

### ¿Qué es un README?

Un **README** es el archivo de presentación de un proyecto de software —su *tarjeta de bienvenida*— y suele ser el primer elemento que alguien lee al visitar un repositorio en GitHub. Sirve para:

* **Contextualizar**: explicar qué problema resuelve el proyecto y por qué existe.
* **Orientar**: indicar cómo instalarlo, usarlo y, opcionalmente, cómo contribuir.
* **Comunicar**: mostrar licencias, autores, dependencias y estado del proyecto (badges de CI, versión, etc.).

> Piensa en el README como la “carta de instrucciones” que tu *yo* del futuro (o cualquier colaborador) agradecerá encontrar cuando vuelva al proyecto.

#### Elementos mínimos que vas a incluir en este taller

1. **Propósito del proyecto** (2–3 líneas en lenguaje claro).
2. **Requisitos de software** (versiones de compilador, librerías, etc.).
3. **Instrucciones de uso rápido** (cómo compilar/ejecutar el programa en 3 comandos).
4. **Licencia** (GPL‑3.0 en este caso).

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


# Guía‑taller: Fundamentos de Git y GitHub

> **Repositorio base:** [https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089](https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089)
>
> **Duración sugerida:** 2 sesiones (3 h cada una)
>
> **Resultados de aprendizaje cubiertos**
>
> * **0.8** Clonar repositorios remotos (HTTPS/SSH)
> * **0.9** Sincronizar código con *add / commit / push / pull*
> * **0.10** Describir cambios con mensajes de *commit* claros
> * **0.11** Detectar y resolver conflictos simples
> * **0.12** Aplicar `git status`, `git log`, `git add`, `git commit`
> * **0.13** Elaborar `README.md` en Markdown
> * **0.14** Interpretar `.gitignore`
> * **0.15** Comprender la importancia de Git/GitHub

---

## 1 · Preparación del entorno

1. **Instalar Git** ⟶ [https://git‑scm.com/downloads](https://git‑scm.com/downloads).
2. Configurar identidad:

   ```bash
   git config --global user.name  "Tu Nombre"
   git config --global user.email "tu@correo.com"
   ```
3. (Opcional) Generar llave SSH y agregarla a GitHub.

## 2 · Clonar el repositorio inicial (RA 0.8)

```bash
git clone https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089.git
cd 2-git-conflictos-lufe089
```

Explora la carpeta oculta `.git` y reflexiona sobre la información que almacena (historial, referencias, objetos) ([github.com](https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089)).

## 3 · Registro y monitoreo local (RA 0.12)

| Acción         | Comando                                      | Propósito                                  |
| -------------- | -------------------------------------------- | ------------------------------------------ |
| Ver estado     | `git status`                                 | Conocer archivos modificados/no rastreados |
| Historial      | `git log --oneline --graph --decorate`       | Visualizar commits                         |
| Añadir cambios | `git add <ruta>`                             | Mover al *staging area*                    |
| Confirmar      | `git commit -m "Mensaje en modo imperativo"` | Crear snapshot                             |

> **Ejercicio 1**
> Crea `TU_NOMBRE.md`, añade la primera estrofa del himno y registra los cambios siguiendo los comandos anteriores.
> *Tip:* usa `git log -p` para ver las diferencias.

## 4 · Buenas prácticas de mensajes *commit* (RA 0.10)

* Línea 1 ≤ 50 caracteres, modo imperativo: “Añade sección de objetivos”.
* Línea 2 vacía.
* Detalles adicionales a partir de la línea 3.

> **Ejercicio 2**
> Realiza **tres** commits consecutivos, cada uno siguiendo la convención anterior. Observa cómo se ve en `git log`.

## 5 · Creación de `README.md` (RA 0.13)

### ¿Qué es un README?

Un **README** es el archivo de presentación de un proyecto de software —su *tarjeta de bienvenida*— y suele ser el primer elemento que alguien lee al visitar un repositorio en GitHub. Sirve para:

* **Contextualizar**: explicar qué problema resuelve el proyecto y por qué existe.
* **Orientar**: indicar cómo instalarlo, usarlo y, opcionalmente, cómo contribuir.
* **Comunicar**: mostrar licencias, autores, dependencias y estado del proyecto (badges de CI, versión, etc.).

> Piensa en el README como la “carta de instrucciones” que tu *yo* del futuro (o cualquier colaborador) agradecerá encontrar cuando vuelva al proyecto.

#### Elementos mínimos que vas a incluir en este taller

1. **Propósito del proyecto** (2–3 líneas en lenguaje claro).
2. **Requisitos de software** (versiones de compilador, librerías, etc.).
3. **Instrucciones de uso rápido** (cómo compilar/ejecutar el programa en 3 comandos).
4. **Licencia** (GPL‑3.0 en este caso).

> **Ejercicio 3**
>
> 1. Crea el archivo `README.md` en la raíz del repositorio.
> 2. Redáctalo usando sintaxis Markdown (`#` títulos, listas `-`, bloques de código `bash`).
> 3. Ejecuta `git add README.md` → `git commit -m "Añade README inicial"` → `git push`.
> 4. Abre el repositorio en GitHub y comprueba la vista previa del README.

*Extensión opcional*: añade badges de estado de compilación o versión de licencia usando Shields.io.

## 6 · Gestión de `.gitignore` (RA 0.14)

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

## 7 · Sincronización con remoto (RA 0.9)

1. Sube tus commits:

   ```bash
   git push origin main
   ```
2. Simula otro equipo: clona el repositorio en otra carpeta (o compañero) y modifica la misma línea de `TU_NOMBRE.md` poniendo la cita de Cervantes.
3. *Commit* y *push* desde el segundo clon.
4. En el clon original ejecuta `git pull` y observa el **conflicto**.

> Las instrucciones originales de la guía describen este flujo ([github.com](https://github.com/300CIS017-Object-Oriented-Programming/2-git-conflictos-lufe089)).

## 8 · Resolución de conflictos simples (RA 0.11)

1. Abre el archivo con conflicto. Identifica los marcadores:

   ```
   <<<<<<< HEAD
   Tu versión
   =======
   Versión remota
   >>>>>>> origin/main
   ```
2. Escoge la versión correcta o fusiona ambas.
3. Elimina los marcadores y guarda.
4. `git add <archivo>` → `git commit -m "Resuelve conflicto en TU_NOMBRE.md"` → `git push`.

## 9 · Reflexión final (RA 0.15)

Completa la tabla:

| Situación                             | ¿Cómo ayuda Git/GitHub? |
| ------------------------------------- | ----------------------- |
| Trabajo simultáneo de varios miembros |                         |
| Retroceso a versión estable           |                         |
| Auditoría y trazabilidad              |                         |

Comparte tus conclusiones en el repositorio usando **GitHub Discussions** o Issues.

---

## Entregables

* `README.md` completo.
* `.gitignore` documentado.
* Historial de commits con mensajes claros.
* Resolución de conflicto registrada.
* Tabla de reflexión completada (puede ser otro archivo Markdown o comentario en Issue).

---

## Recursos de referencia

* *Pro Git*, Capítulos 1 y 2.
* GitHub Docs: **"Resolving a merge conflict using the command line"**.
