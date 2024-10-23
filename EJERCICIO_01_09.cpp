// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 9
// Problema planteado:  Crea un programa para mostrar los primero 100 número primos.
#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int conteo = 0;
    int numero = 2;

    cout << "Los primeros 100 numeros primos son:" << endl;

    while (conteo < 100) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            conteo++;
        }
        numero++;
    }

    cout << endl;

    return 0;
}
