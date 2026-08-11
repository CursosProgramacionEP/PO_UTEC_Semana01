// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1A - Actividad 2: Reescribiendo nuestro ejemplo (parte 2)
//
// Tercera forma de escribir el mismo programa. Note las distintas sintaxis de
// inicialización de C++:
//     a(2)    -> inicialización directa (con paréntesis)
//     b{3}    -> inicialización uniforme o con llaves (C++11)
//     c={6}   -> inicialización por copia con llaves (C++11)
//
// Implemente ambas versiones (03 y 04) y compare los resultados.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a(2), b{3}, c = {6};
    int x = a * b - c;
    cout << "Resultado: " << x << endl;
    return 0;
}
