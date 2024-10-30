// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 7
/*Problema planteado:   Escribe un programa que solicite una matriz cuadrada de dimensión n x n e imprima los
elementos de la diagonal principal y de la diagonal secundaria. Los elementos deben ser
generados aleatoriamente del 1 al 100.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la dimension de la matriz cuadrada (n x n): ";
    cin >> n;

    int matriz[n][n];

    // Inicializa la semilla para la generación de números aleatorios
    srand(time(0));

    // Llenar la matriz con valores aleatorios del 1 al 100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    // Imprimir la matriz
    cout << "Matriz generada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Imprimir la diagonal principal
    cout << "Diagonal principal: ";
    for (int i = 0; i < n; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    // Imprimir la diagonal secundaria
    cout << "Diagonal secundaria: ";
    for (int i = 0; i < n; i++) {
        cout << matriz[i][n - i - 1] << " ";
    }
    cout << endl;

    return 0;
}
