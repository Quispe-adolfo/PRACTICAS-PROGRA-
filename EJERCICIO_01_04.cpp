// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 4
// Problema planteado: Crea un programa para realizar la conversión de temperatura de grados centígrado a Kelvin
#include <iostream>

using namespace std;

int main() {
    double celsius, kelvin;

    cout << "Ingrese la temperatura en grados centigrados: ";
    cin >> celsius;

    kelvin = celsius + 273.15;

    cout << "La temperatura en Kelvin es: " << kelvin << endl;

    return 0;
}
