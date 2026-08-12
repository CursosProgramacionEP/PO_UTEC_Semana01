// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Ejercicio 2: Guardando lápices de colores
//
// ENUNCIADO
// Una bodega empaqueta lápices de colores en cajas de 6, 12 y 24 unidades.
// Realice un programa que reciba como dato de entrada un número entero que
// representará la cantidad de lápices de colores. El programa debe imprimir el
// menor número de cajas de 24, 12 y 6, e indicar el número de colores
// sobrantes.
//
// Por ejemplo:
//     Ingrese la cantidad de colores: 104
//     Se requieren:
//     4 cajas de 24 colores
//     0 cajas de 12 colores
//     1 caja de 6 colores
//     2 colores sobran.
//
//     Ingrese la cantidad de colores: 498
//     Se requieren:
//     20 cajas de 24 colores
//     1 cajas de 12 colores
//     1 caja de 6 colores
//     0 colores sobran.
//
// Este ejercicio no trae solución en la diapositiva: complete el main.
// Pista: use división entera (/) y residuo (%) de forma encadenada.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int cantidad, caja24, caja12, caja6;

    cout << "Ingrese la cantidad de colores: ";
    cin >> cantidad;

    caja24   = cantidad / 24;
    cantidad = cantidad % 24;   // me quedo con lo que sobró

    caja12   = cantidad / 12;
    cantidad = cantidad % 12;

    caja6    = cantidad / 6;
    cantidad = cantidad % 6;    // este último residuo es el sobrante

    cout << "Se requieren:" << endl;
    cout << caja24 << " cajas de 24 colores" << endl;
    cout << caja12 << " cajas de 12 colores" << endl;
    cout << caja6 << " caja de 6 colores" << endl;
    cout << cantidad << " colores sobran." << endl;

    return 0;
}
