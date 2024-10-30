// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 10 
/*Problema planteado:    Crea un programa que permita al usuario ingresar una matriz m x n. Muestra solo los
elementos que se encuentran en el borde de la matriz (primera y última fila, y primera y
última columna). Los elementos deben ser generados aleatoriamente del 1 al 100. */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el numero de filas (m): ";
    cin >> m;
    cout << "Ingrese el numero de columnas (n): ";
    cin >> n;

    int matriz[m][n];

    
    srand(time(0));

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    
    cout << "Matriz generada:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "\nElementos en el borde de la matriz:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                cout << matriz[i][j] << "\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
