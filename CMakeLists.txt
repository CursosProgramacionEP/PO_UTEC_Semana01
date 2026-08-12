cmake_minimum_required(VERSION 3.20)
project(Semana01_Introduccion CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Los ejemplos de clase usan identificadores y textos con tildes (año, área,
# posición). MSVC necesita /utf-8 para leerlos y escribirlos correctamente.
if (MSVC)
    add_compile_options(/utf-8)
endif ()

# ---------------------------------------------------------------------------
# Regla del proyecto:
#
#   * Un .cpp que tiene main()  -> se convierte en un ejecutable propio.
#   * Un .cpp que NO tiene main() (la implementación de una clase, por ejemplo)
#     -> se compila junto con los programas de SU MISMA CARPETA.
#
# Así conviven los laboratorios sueltos (un archivo = un programa) con los
# ejercicios de POO repartidos en varios archivos. Para agregar cualquiera de
# los dos casos basta con crear los archivos y recargar el proyecto CMake:
# no hay que editar este archivo nunca.
# ---------------------------------------------------------------------------

file(GLOB_RECURSE TODOS_LOS_CPP CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

set(PROGRAMAS "")
set(APOYO "")

foreach (fuente ${TODOS_LOS_CPP})
    # Ignora la carpeta de compilación activa (CMake genera .cpp de prueba
    # dentro de ella) y las de otras configuraciones de CLion.
    string(FIND "${fuente}" "${CMAKE_BINARY_DIR}/" dentro_del_build)
    if (NOT dentro_del_build EQUAL -1 OR fuente MATCHES "/(cmake-build[^/]*|build|\\.git)/")
        continue()
    endif ()

    # Un archivo es "programa" si declara main(). Se ignoran las apariciones
    # dentro de comentarios de una línea para no confundir la detección.
    file(READ "${fuente}" contenido)
    string(REGEX REPLACE "//[^\n]*" "" contenido "${contenido}")
    if (contenido MATCHES "int[ \t\r\n]+main[ \t\r\n]*\\(")
        list(APPEND PROGRAMAS "${fuente}")
    else ()
        list(APPEND APOYO "${fuente}")
    endif ()
endforeach ()

foreach (programa ${PROGRAMAS})
    get_filename_component(carpeta "${programa}" DIRECTORY)

    # Reúne los .cpp sin main() que viven en la misma carpeta que el programa.
    set(companeros "")
    foreach (auxiliar ${APOYO})
        get_filename_component(carpeta_auxiliar "${auxiliar}" DIRECTORY)
        if (carpeta_auxiliar STREQUAL carpeta)
            list(APPEND companeros "${auxiliar}")
        endif ()
    endforeach ()

    # El nombre del target es la ruta relativa con "/" y ".cpp" sustituidos:
    # Sesion_1B/Ejercicios/ej1_temperatura.cpp -> Sesion_1B_Ejercicios_ej1_temperatura
    file(RELATIVE_PATH ruta_relativa "${CMAKE_CURRENT_SOURCE_DIR}" "${programa}")
    string(REPLACE ".cpp" "" objetivo "${ruta_relativa}")
    string(REPLACE "/" "_" objetivo "${objetivo}")

    add_executable(${objetivo} "${programa}" ${companeros})
    # Permite escribir #include "Punto.h" sin rutas relativas largas.
    target_include_directories(${objetivo} PRIVATE "${carpeta}")
endforeach ()
