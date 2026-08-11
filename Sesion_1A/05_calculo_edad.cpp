// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1A - Actividad 3: Cálculo de la edad
//
// Ingresando por consola el año de nacimiento, el programa retorna la edad que
// se tiene hasta el presente.
//
// Preguntas de la diapositiva:
//   - ¿Cuántas variables se declararon? ¿De qué tipos son?
//   - Observe la línea de std::cin ¿Qué hace?
//   - ¿Qué otra característica diferencia std::cin de std::cout?
//     (std::cin lee del flujo de entrada con >>, std::cout escribe con <<)

#include <iostream>
#include <string>

int main() {
    int año, edad;
    std::cout << "Ingrese el año de nacimiento: ";
    std::cin >> año;
    edad = 2026 - año;
    std::cout << "Tienes " << edad << " años" << std::endl;
    return 0;
}
