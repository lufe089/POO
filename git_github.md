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

### ¿Qué es Git?

**Git** es un sistema de control de versiones **distribuido** que permite llevar un historial completo y verificable de todos los cambios realizados a un proyecto de software. Cada copia del repositorio contiene la base de datos completa de versiones, lo que posibilita trabajar **sin conexión** y conservar trazabilidad de manera local.

| Concepto clave           | Descripción breve                                                               |
| ------------------------ | ------------------------------------------------------------------------------- |
| **Working Directory**    | Carpeta donde editas tus archivos.                                              |
| **Staging Area (index)** | Zona intermedia donde preparas cambios antes de confirmarlos.                   |
| **Commit**               | Foto inmutable del proyecto en un momento dado; incluye autor, fecha y mensaje. |
| **Repositorio local**    | Base de datos (en `.git/`) con todos los commits y referencias.                 |
| **HEAD**                 | Puntero al commit actual sobre el que estás trabajando.                         |

### Secuencia mínima para cumplir el RA 0.12

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

\| Acción         | Comando                                      | Propósito                                  |

\| -------------- | -------------------------------------------- | ------------------------------------------ |

\| Ver estado     | \`git status\`                                 | Conocer archivos modificados/no rastreados |

\| Historial      | \`git log --oneline --graph --decorate\`       | Visualizar commits                         |

\| Añadir cambios | \`git add \<ruta>\`                             | Mover al \*staging area\*                    |

\| Confirmar      | \`git commit -m "Mensaje en modo imperativo"\` | Crear snapshot                             |


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

## Familiarizacion con repositorios remotos  y locales
*	Clone el repositorio. Llamaremos en adelante a este repositorio repositorio(1)
* Observe la carpeta oculta .git creada dentro del disco duro
*	Cree un archivo de texto en markdown(.md) dentro del repositorio. Este archivo debe tener su nombre en formato nombre_apellido. Ejm PEDRO_PEREZ.md
*	Agregue el archivo al repositorio local
*	Agregue el archivo un nuevo texto que diga "Oh Gloria inmarcesible, oh júbilo inmortal"
*	Agregue el archivo al stagging area  ``git add ruta del archivo``
*	Haga commit al archivo. Recuerde poner un comentario en el archivo.   ``git commit -m "su mensaje" ``
*	Haga push al repositorio remoto para subir los cambios hechos al repositorio ``git push origin main``

## Conflictos
### En el mismo archivo
#### Modificar el archivo
* Clone el repositorio remoto en un **directorio diferente** al que usó en la parte de familiarización (Repositorio 1)
* En el segundo repositorio modifique la primera línea del primer archivo.md que creo con el formato *nombre_apellido.md*. Quite lo que estaba y en su lugar escriba "En un lugar de la mancha de cuyo nombre no quiero acordarme"
* Guarde el archivo
* Agregue el archivo al stagging area:  ``git add ruta del archivo``
* Haga commit del archivo en el repositorio local: ``git commit -m "su mensaje" ``
* Haga push al repositorio remoto: ``git push origin main``
 
#### Crear conflicto en el mismo archivo
* Vuelva a la carpeta del primer repositorio que clonó. (Repositorio 1)
* Abra el archivo que creó con el formato *nombre_apellido.md*.
* Agregue al texto que ya tiene lo siguiente: "En surcos de dolores el bien germina ya".( Note que en esta copia del repositorio todavía no se ve reflejado los cambios que hizo en el repositorio(1) en el paso anterior, por lo que todavía tiene una parte del himno nacional)
* Guarde el archivo
* Agregue el archivo al stagging area:  ``git add ruta del archivo``
* Haga commit del archivo en el repositorio local: ``git commit -m "su mensaje" ``
* Intente hacer push al repositorio remoto: ``git push origin main``. Debe aparecerle un error similar a este ``! [rejected] master -> master (fetch first)``. Esto significa que Git rechazó el push al repositorio remoto porque el mismo archivo fue modificado desde repositorios diferentes. La última versión del repositorio remoto no coincide con la versión del repositorio local que esta intentado hacer el push

#### Resolver conflicto cuando un mismo archivo tiene diferente información
Este es un conflicto que NO puede ser resuelto automáticamente por GIT. Este tipo de conficto ocurre cuando se ha modificado las mismas líneas de un archivo en dos repositorios diferentes y por lo tanto la copia remota y la copia local no coinciden.  Para solucionar este caso es necesario: 
* Hacer pull al repositorio
* Abrir con el editor preferido los archivos que tienen conflicto y editarlos *manualmente*. Las líneas de código que están después de la etiqueta HEAD corresponden a lo que está en el repositorio local y lo que está después de ===== corresponde a lo que está en el repositorio remoto. Quien corrije el error decide cuál de las dos versiones permanece en el archivo. En todo caso recuerde eliminar las etiquetas <<<<<<< HEAD, ======= y >>>>>>>.
* Haga que en la primera línea quede el siguiente texto: *"Oh Gloria inmarcesible, oh júbilo inmortal. En surcos de dolores el bien germina ya. En un lugar de la mancha de cuyo nombre no quiero acordarme"*
* Una vez terminado el ajuste:
    * Agregué el archivo al repositorio remoto  ``git add ruta``
    * Haga commit del archivo ``git commit -m "su mensaje" ``
    * Haga push al repositorio remoto ``git push origin main``
    * Sus cambios debieron de subir correctamente al repositorio remoto. Verifique en la página de Github que el archivo subido tenga la versión ajustada. 

 ### Conflictos en archivos diferentes
Esos son conflictos que **no** modifican las mismas partes de un archivo o que modifican archivos diferentes.  En ese caso solo deberá escribir ``git pull origin``. El comando descargará los nuevos archivos y hará un merge automáticamente con sus archivos locales. }

Este tipo de error es **muy común** cuando se trabaja en equipo, por esa razón antes de subir cambios use siempre el comando  ``git pull origin`` para bajar la última versión del repositorio. 

* Vaya al repositorio 2
*	Cree un segundo archivo. Este archivo debe tener su nombre en formato apellido_nombre_2. Ejm PEREZ_PEDRO_2.md
*	Agregue el archivo al stagging área 
*	Haga commit al archivo
*	Intente hacer push al repositorio remoto: ``git push origin main``. Debe aparecer un error que indica que hay conflictos entre tu versión local y la versión remota del repositorio.  Este conflicto se puede resolver automáticamente. Para hacerlo haga pull del repositorio para actualizar la última versión ``git pull origin``. Agregué nuevamente el archivo al stagging area, haga nuevamente commit del archivo e intente hacer nuevamente push. Esta vez su push debe ser exitoso. 


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
