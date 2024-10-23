// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 5
// Problema planteado:  Crea un programa para verificar si un número ingresado es primo.
#include <iostream>

using namespace std;

int main() {
    int numero;
    bool esPrimo = true;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }

    return 0;
}
