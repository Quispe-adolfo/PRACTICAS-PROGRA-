// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 15 
/*Problema planteado:  Crea un programa que solicite al usuario ingresar una lista de n palabras.
Almacena cada palabra en una fila de una matriz de caracteres, de manera que
cada columna represente un carácter de la palabra. Si una palabra es más corta
que otras, completa la fila con espacios en blanco. Muestra la matriz resultante.
  */
 #include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de palabras: ";
    cin >> n;


    cin.ignore();

    vector<string> palabras(n);
    int maxLongitud = 0;

  
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la palabra " << (i + 1) << ": ";
        getline(cin, palabras[i]);
        maxLongitud = max(maxLongitud, (int)palabras[i].length());
    }

  
    char matriz[n][maxLongitud + 1]; 

    
    for (int i = 0; i < n; i++) {
        strncpy(matriz[i], palabras[i].c_str(), maxLongitud);
        
        for (int j = palabras[i].length(); j < maxLongitud; j++) {
            matriz[i][j] = ' ';
        }
        matriz[i][maxLongitud] = '\0'; 
    }

    // Mostrar la matriz
    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < n; i++) {
        cout << "\"" << matriz[i] << "\"\n"; 
    }

    return 0;
}
