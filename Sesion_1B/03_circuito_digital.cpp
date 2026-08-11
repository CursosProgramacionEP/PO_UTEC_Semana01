// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1B - Actividad 3: Circuito digital
//
// Compuertas lógicas y sus operadores en C++:
//   - Negación / inversión (NOT) : !
//   - Conjunción "y"     (AND)   : &&
//   - Disyunción "o"     (OR)    : ||
//
// El circuito de la diapositiva corresponde a:  y = !((!a || b) && (c && !d))

#include <iostream>
#include <string>
using namespace std;

int main() {
    bool a, b, c, d, y;

    a = true;
    b = false;
    c = true;
    d = false;

    cout << "CIRCUITO DIGITAL" << endl;

    y = !((!a || b) && (c && !d));

    cout << "La salida del circuito digital es : " << y << endl;

    return 0;
}
