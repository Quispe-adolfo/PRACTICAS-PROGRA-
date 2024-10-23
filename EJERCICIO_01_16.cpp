// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 16
// Problema planteado: Escribe un programa que muestre por consola los números de 1 a N
#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Ingrese el valor de N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "z" << endl;
        } else if (i % 3 == 0) {
            cout << "x" << endl;
        } else if (i % 5 == 0) {
            cout << "y" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
