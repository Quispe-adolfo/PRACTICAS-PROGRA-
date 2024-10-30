// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 6
/*Problema planteado:  Generar la matriz para un orden nxn
Sea n=5
1 2 3 4 5
3 4 5 6 7
5 6 7 8 9
7 8 9 10 11
9 10 11 12 13  */

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el orden de la matriz (n x n): ";
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 2 * i + j + 1;
        }
    }

    cout << "Matriz generada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
