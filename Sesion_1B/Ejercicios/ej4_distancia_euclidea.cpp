// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Ejercicio 4: Distancia Euclídea
//
// ENUNCIADO
// Escriba un código que calcule la distancia entre dos puntos P1 y P2. Estos
// puntos tienen las coordenadas (x1, y1) y (x2, y2); y la distancia está dada
// por la fórmula:
//
//     L = raíz( (x1 - x2)^2 + (y1 - y2)^2 )
//
// Se recomienda utilizar la librería cmath para más funciones matemáticas
// (sqrt, pow, ...).
//
// Este ejercicio no trae solución en la diapositiva: complete el main.

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Ingrese las coordenadas de P1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Ingrese las coordenadas de P2 (x2 y2): ";
    cin >> x2 >> y2;

    double L = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout << "La distancia entre P1 y P2 es: " << L << endl;
    return 0;
}