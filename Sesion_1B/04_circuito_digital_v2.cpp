// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Actividad 3: Circuito digital (parte 2)
//
// Misma solución que 03_circuito_digital.cpp, pero asignando los valores
// booleanos como 1 y 0 en una sola línea. En C++ cualquier valor distinto de 0
// se convierte a true, y 0 se convierte a false.

#include <iostream>
#include <string>
using namespace std;

int main() {
    bool a, b, c, d, y;

    a = 1, b = 0, c = 1, d = 0;

    cout << "CIRCUITO DIGITAL" << endl;

    y = !((!a || b) && (c && !d));

    cout << "La salida del circuito digital es : " << y << endl;

    return 0;
}
