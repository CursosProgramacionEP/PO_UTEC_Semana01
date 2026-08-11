cmake_minimum_required(VERSION 3.20)
project(Semana01_Introduccion CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Los ejemplos de clase usan identificadores y textos con tildes (año, área,
# posición). MSVC necesita /utf-8 para leerlos y escribirlos correctamente.
if (MSVC)
    add_compile_options(/utf-8)
endif ()

# Cada archivo .cpp de Sesion_1A y Sesion_1B es un programa independiente y se
# convierte automáticamente en un target ejecutable de CLion. Para agregar un
# ejercicio nuevo basta con crear el .cpp y recargar el proyecto CMake.
file(GLOB_RECURSE FUENTES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/Sesion_1A/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/Sesion_1B/*.cpp")

foreach (fuente ${FUENTES})
    file(RELATIVE_PATH ruta_relativa "${CMAKE_CURRENT_SOURCE_DIR}" "${fuente}")
    string(REPLACE ".cpp" "" objetivo "${ruta_relativa}")
    string(REPLACE "/" "_" objetivo "${objetivo}")
    add_executable(${objetivo} "${fuente}")
endforeach ()
