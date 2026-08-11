// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1A - Actividad 2: Reescribiendo nuestro ejemplo
//
// Mismo programa que 02_siguientes_pasos.cpp, pero declarando e inicializando
// las variables en la misma línea y usando "using namespace std".

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 2, b = 3, c = 6;
    int x = a * b - c;
    cout << "Resultado: " << x << endl;
    return 0;
}
