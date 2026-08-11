// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Actividad 1: El juego de mesa
//
// Un tablero de 16 casillas. Las fichas empiezan en "inicio" y avanzan en
// sentido horario. Si una ficha avanzó 235 pasos en total:
//   ¿Cuántas vueltas dio? -> división entera
//   ¿Cuál es su posición actual? -> residuo de la división
//
// Ejemplo de ejecución:
//     Ingrese la cantidad de pasos: 235
//     Vueltas: 14
//     Posición: 11

#include <iostream>
#include <string>
using namespace std;

int main() {
    int pasos, vueltas, posición;

    cout << "JUEGO" << endl;
    cout << "Ingrese la cantidad de pasos: ";
    cin >> pasos;

    vueltas = pasos / 16;
    posición = pasos % 16;

    cout << "Vueltas: " << vueltas << endl;
    cout << "Posición: " << posición << endl;

    return 0;
}
