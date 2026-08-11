# CS6003 - Programación 2 · Semana 01

Unidad 1 — Introducción al diseño de algoritmos y programación en C++.

Este repositorio contiene los códigos de las sesiones de laboratorio **1A** y **1B**,
listos para abrirse y ejecutarse en **CLion**.

## Cómo abrirlo en CLion

1. `File → Open…` y seleccione la **carpeta raíz** de este repositorio (la que
   contiene `CMakeLists.txt`). No abra un archivo `.cpp` suelto.
2. CLion detecta el proyecto CMake y lo configura solo. Si no lo hace,
   `Tools → CMake → Reset Cache and Reload Project`.
3. En la barra superior, junto al botón ▶, elija el **target** (programa) que
   quiere ejecutar y presione `Shift + F10`.

Cada archivo `.cpp` es un programa independiente y se convierte automáticamente
en un target de CLion. El nombre del target es la ruta del archivo con `_` en
lugar de `/`; por ejemplo `Sesion_1A/01_hola_mundo.cpp` → **`Sesion_1A_01_hola_mundo`**.

Para agregar un ejercicio nuevo basta con crear el `.cpp` dentro de `Sesion_1A/` o
`Sesion_1B/` y recargar el proyecto CMake.

## Contenido

### Sesion_1A — ¡Hola Mundo!, variables y tipos de datos

| Archivo | Actividad |
|---|---|
| `Sesion_1A/01_hola_mundo.cpp` | Actividad 1 — ¡Hola Mundo! |
| `Sesion_1A/02_siguientes_pasos.cpp` | Actividad 2 — Siguientes pasos |
| `Sesion_1A/03_siguientes_pasos_using_namespace.cpp` | Actividad 2 — Reescritura con `using namespace std` |
| `Sesion_1A/04_siguientes_pasos_inicializacion.cpp` | Actividad 2 — Reescritura con `a(2)`, `b{3}`, `c={6}` |
| `Sesion_1A/05_calculo_edad.cpp` | Actividad 3 — Cálculo de la edad (`std::cin`) |
| `Sesion_1A/06_la_coleccion.cpp` | Actividad 4 — La colección (`sizeof`) |

### Sesion_1B — Diagramas de flujo, operadores aritméticos y booleanos

| Archivo | Actividad |
|---|---|
| `Sesion_1B/01_juego_de_mesa.cpp` | Actividad 1 — El juego de mesa (`/` y `%`) |
| `Sesion_1B/02_jugando_con_pelotas.cpp` | Actividad 2 — Área y volumen de una esfera |
| `Sesion_1B/03_circuito_digital.cpp` | Actividad 3 — Circuito digital (`!`, `&&`, `||`) |
| `Sesion_1B/04_circuito_digital_v2.cpp` | Actividad 3 — Variante con `1` y `0` |

### Sesion_1B/Ejercicios — Más ejercicios (para resolver)

Estos ejercicios **no traen solución** en las diapositivas. Cada archivo
contiene el enunciado completo y un `main` vacío listo para completar.

| Archivo | Ejercicio |
|---|---|
| `Sesion_1B/Ejercicios/ej1_temperatura.cpp` | Fahrenheit → Celsius |
| `Sesion_1B/Ejercicios/ej2_lapices_de_colores.cpp` | Cajas de 24, 12 y 6 colores |
| `Sesion_1B/Ejercicios/ej3_partiendo_un_numero.cpp` | Parte entera y parte fraccionaria |
| `Sesion_1B/Ejercicios/ej4_distancia_euclidea.cpp` | Distancia entre dos puntos (`cmath`) |



## Compilar sin CLion

```bash
cmake -S . -B build && cmake --build build
```

O un solo archivo:

```bash
g++ -std=c++20 Sesion_1A/01_hola_mundo.cpp -o hola && ./hola
```

