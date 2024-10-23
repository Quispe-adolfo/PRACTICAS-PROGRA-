// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 13
// Problema planteado: Crea un programa para leer un número entero y mostrarlo con las cifras al revés.
#include <iostream>

using namespace std;

int main() {
    int numero, cifraInvertida = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int numeroOriginal = numero;

    while (numero != 0) {
        int cifra = numero % 10;
        cifraInvertida = cifraInvertida * 10 + cifra;
        numero /= 10;
    }

    cout << "El numero con las cifras al reves es: " << cifraInvertida << endl;

    return 0;
}
