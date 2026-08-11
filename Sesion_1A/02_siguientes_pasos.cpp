// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1A - Actividad 2: Siguientes pasos
//
// Versión equivalente en Python:
//     a = 2
//     b = 3
//     c = 6
//     x = a*b - c
//     print("Resultado: ", x)
//
// Salida esperada:
//     Resultado: 0

#include <iostream>
#include <string>

int main() {
    int a, b, c, x;   // declaración de las variables (todas de tipo int)
    a = 2;
    b = 3;
    c = 6;
    x = a * b - c;
    std::cout << "Resultado: " << x << std::endl;
    return 0;
}
