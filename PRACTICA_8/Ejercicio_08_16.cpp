// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 16 
/*Problema planteado:  Desarrolla un programa que permita al usuario ingresar una matriz de m x n
cadenas (donde cada celda contiene una palabra). Luego, pide al usuario una
letra y cuenta cuántas veces aparece esa letra en toda la matriz. Muestra el
resultado.  */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el número de filas (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas (n): ";
    cin >> n;

    
    cin.ignore();

    
    vector<vector<string>> matriz(m, vector<string>(n));

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese la palabra en la posición [" << i << "][" << j << "]: ";
            getline(cin, matriz[i][j]);
        }
    }

    char letra;
    cout << "Ingrese la letra a buscar: ";
    cin >> letra;

    int contador = 0;

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (char c : matriz[i][j]) {
                if (c == letra) {
                    contador++;
                }
            }
        }
    }

    // Mostrar el resultado
    cout << "La letra '" << letra << "' aparece " << contador << " veces en la matriz." << endl;

    return 0;
}
