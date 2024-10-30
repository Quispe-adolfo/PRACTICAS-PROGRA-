// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 8
/*Problema planteado:   Desarrolla un programa que permita al usuario ingresar una matriz de dimensiones m x
n y un número a buscar dentro de la matriz. El programa debe indicar la posición (fila y
columna) donde se encuentra el número o informar si no está en la matriz. Los elementos
deben ser generados aleatoriamente del 1 al 100. */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int m, n, numeroBuscar;
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

    // Mostrar la matriz generada
    cout << "Matriz generada:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

 
    cout << "Ingrese el numero a buscar en la matriz: ";
    cin >> numeroBuscar;

    
    bool encontrado = false;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == numeroBuscar) {
                cout << "Numero encontrado en la posicion: fila " << i + 1 << ", columna " << j + 1 << endl;
                encontrado = true;
            }
        }
    }

   
    if (!encontrado) {
        cout << "El numero no se encuentra en la matriz." << endl;
    }

    return 0;
}
