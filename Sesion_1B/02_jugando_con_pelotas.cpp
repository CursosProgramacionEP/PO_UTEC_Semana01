// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Actividad 2: Jugando con pelotas
//
// Se mide el diámetro de una pelota con un pie de rey y se calcula el área de
// su superficie y su volumen.
//
//     R = D / 2
//     A = 4 * pi * R^2
//     V = (4/3) * pi * R^3
//
// Ojo con (4.0/3.0): si se escribiera (4/3) sería una división entera y daría 1.

#include <iostream>
#include <string>
using namespace std;

int main() {
    const float PI = 3.14159;
    float diámetro, radio, área, volumen;

    cout << "PELOTAS" << endl;
    cout << "Ingrese el diámetro en cm: ";
    cin >> diámetro;

    radio = diámetro / 2;
    área = 4 * PI * radio * radio;
    volumen = (4.0 / 3.0) * PI * radio * radio * radio;

    cout << "Área de la superficie: " << área << endl;
    cout << "Volumen de la esfera: " << volumen << endl;

    return 0;
}
