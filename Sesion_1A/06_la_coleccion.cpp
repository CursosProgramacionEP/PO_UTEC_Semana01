// CS6003 - Programación 2 | Unidad 1
// Laboratorio 1A - Actividad 4: La colección
//
// Punto de partida entregado en la diapositiva. La actividad pide agregar más
// tipos a la colección y usar sizeof para calcular la cantidad de bytes de
// cada variable.
//
// TODO (actividad): agregue a la colección los tipos int, short, long,
// long long, double, long double, bool, unsigned int, std::string, ...
// e imprima su valor y su tamaño en bytes con el mismo formato.

#include <iostream>
#include <string>

int main() {
    std::cout << "LA COLECCIÓN \n";

    float flotante = 3.1416;
    std::cout << "\nValor de FLOAT : " << flotante
              << "\nTamaño en bytes : " << sizeof(flotante) << std::endl;

    char caracter = 100;
    std::cout << "\nValor de CHAR : " << caracter
              << "\nTamaño de bytes : " << sizeof(caracter) << std::endl;

    return 0;
}
