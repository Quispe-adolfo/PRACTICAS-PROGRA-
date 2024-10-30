// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 9
/*Problema planteado:   Desarrolla un programa que permita al usuario ingresar una matriz m x n. Determina si
la matriz es esparsa, es decir, si la mayoría de sus elementos son ceros (por ejemplo, si
más del 50% de los elementos son cero). Los elementos deben ser generados
aleatoriamente del 0 al 10. */
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
    int contadorCeros = 0;
    int totalElementos = m * n;

    
    srand(time(0));

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 11;
            if (matriz[i][j] == 0) {
                contadorCeros++;
            }
        }
    }

    
    cout << "Matriz generada:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    
    double porcentajeCeros = (double)contadorCeros / totalElementos * 100;
    if (porcentajeCeros > 50) {
        cout << "La matriz es esparsa, ya que tiene un " << porcentajeCeros << "% de ceros." << endl;
    } else {
        cout << "La matriz no es esparsa, ya que tiene un " << porcentajeCeros << "% de ceros." << endl;
    }

    return 0;
}
