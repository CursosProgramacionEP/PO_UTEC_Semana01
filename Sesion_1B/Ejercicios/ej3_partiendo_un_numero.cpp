// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Ejercicio 3: Partiendo un número
//
// ENUNCIADO
// Realice un programa que permita leer un número flotante (float) donde el
// programa imprima en una línea la parte entera del número y en la línea
// siguiente su parte fraccionaria.
//
// Por ejemplo:
//     Ingrese un número flotante: 123.456
//     Parte entera: 123
//     Parte fraccionaria: 0.456
//
//     Ingrese un número flotante: 3.14159
//     Parte entera: 3
//     Parte fraccionaria: 0.14159
//
// Este ejercicio no trae solución en la diapositiva: complete el main.
// Pista: la conversión a int trunca el valor.

#include <iostream>
#include <string>
using namespace std;

int main() {
    double numero;

    cout << "Ingrese un número flotante: ";
    cin >> numero;

    int entera = numero;                 // al convertir a int, se trunca
    double fraccion = numero - entera;   // lo que se perdió al truncar

    cout << "Parte entera: " << entera << endl;
    cout << "Parte fraccionaria: " << fraccion << endl;

    return 0;
}
