// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Ejercicio 1: Temperatura
//
// ENUNCIADO
// Se desea convertir grados Fahrenheit a grados Celsius. La fórmula de
// conversión entre una escala y la otra viene dada por:
//
//     C / 5 = (F - 32) / 9
//
// Donde
//   C: La temperatura en grados Celsius, en flotantes.
//   F: La temperatura en grados Fahrenheit, en flotantes.
//
// Este ejercicio no trae solución en la diapositiva: complete el main.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // TODO: declarar las variables, leer F por consola, calcular C e imprimir.

    float C,F;

    cout<<"convertir Fahrenheit a celsius"<<endl;
    cout<<"Ingrese el temperatura: ";
    cin>>F;

    C=(F-32)*5.0f/9.0f;

    cout<<"El temperatura es: "<<C<<endl;

    return 0;
}
