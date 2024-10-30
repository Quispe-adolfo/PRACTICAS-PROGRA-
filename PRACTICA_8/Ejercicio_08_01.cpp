// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio:  1
/*Problema planteado:  Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir
de este arreglo determine la desviación típica.  */

#include <iostream>
#include <vector>
using namespace std;

int contarLetra(const vector<vector<string>>& matriz, char letra);

int main() {
    int m, n;
    cout << "Ingrese el numero de filas (m): ";
    cin >> m;
    cout << "Ingrese el numero de columnas (n): ";
    cin >> n;

    vector<vector<string>> matriz(m, vector<string>(n));

    cout << "Ingrese las palabras para la matriz:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Palabra en la posicion (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }

    char letra;
    cout << "Ingrese  la  letra  a  buscar: ";
    cin >> letra;

    int total = contarLetra(matriz, letra);
    cout << "La letra '" << letra << "' aparece " << total << " veces en la matriz." << endl;

    return 0;
}

int contarLetra(const vector<vector<string>>& matriz, char letra) {
    int contador = 0;
    for (const auto& fila : matriz) {
        for (const auto& palabra : fila) {
            for (char c : palabra) {
                if (c == letra) {
                    ++contador;
                }
            }
        }
    }
    return contador;
}
