// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 10
// Problema planteado: Crea un programa para calcular la cantidad de dígitos que tiene un número entero.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero;
    int cantidadDigitos;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero == 0) {
        cantidadDigitos = 1;
    } else {
        cantidadDigitos = log10(abs(numero)) + 1;
    }

    cout << "La cantidad de digitos es: " << cantidadDigitos << endl;

    return 0;
}
