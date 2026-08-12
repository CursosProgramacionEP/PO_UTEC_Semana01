// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Actividad 3: Circuito digital (parte 3)
//
// Misma solución que 04_circuito_digital_v2.cpp, pero usando los operadores
// alternativos de palabra clave que C++ define para las operaciones lógicas:
//
//     !   equivale a   not
//     &&  equivale a   and
//     ||  equivale a   or
//
// Son exactamente el mismo operador, solo cambia cómo se escribe. La versión
// con palabras suele leerse mejor en expresiones booleanas largas como esta.

#include <iostream>
#include <string>
using namespace std;

int main() {
    bool a, b, c, d, y;

    a = 1, b = 0, c = 1, d = 0;

    cout << "CIRCUITO DIGITAL" << endl;

    y = not (((not a) or b) and (c and (not d)));

    cout << "La salida del circuito digital es : " << y << endl;

    return 0;
}
