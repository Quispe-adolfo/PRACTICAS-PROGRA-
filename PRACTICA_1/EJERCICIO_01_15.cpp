// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 15
// Problema planteado: Crea un programa para generar
#include <iostream>

using namespace std;

int main() {
    int maxNumero = 9;

    for (int i = 1; i <= maxNumero; i++) {
        // Imprimir la parte creciente
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Imprimir la parte decreciente
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
