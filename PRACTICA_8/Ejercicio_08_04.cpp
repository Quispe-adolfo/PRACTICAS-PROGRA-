// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 4
/*Problema planteado:  Escribe un programa que permita al usuario ingresar N números en un vector. El
programa debe eliminar los elementos duplicados en el vector y mostrar el vector
resultante sin duplicados. */

#include <iostream>
using namespace std;

void eliminarDuplicados(int arr[], int &n);

int main() {
    int N;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    int arr[N];
    cout << "Ingrese " << N << " numeros:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    eliminarDuplicados(arr, N);

    cout << "Vector sin duplicados:\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void eliminarDuplicados(int arr[], int &n) {
    int k = 0; 

    for (int i = 0; i < n; i++) {
        bool duplicado = false;
        
        for (int j = 0; j < k; j++) {
            if (arr[i] == arr[j]) {
                duplicado = true;
                break;
            }
        }

        if (!duplicado) {
            arr[k] = arr[i];
            k++;
        }
    }
    
    n = k; 
}
