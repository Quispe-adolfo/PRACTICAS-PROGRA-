// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 5
/*Problema planteado:  Crea un programa que permita al usuario ingresar N números en un vector y luego rota
el vector k posiciones a la derecha. Muestra el vector después de la rotación.
  */
 #include <iostream>
using namespace std;

void rotarDerecha(int arr[], int n, int k);

int main() {
    int N, k;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    int arr[N];
    cout << "Ingrese " << N << " numeros:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Ingrese el numero de posiciones para rotar a la derecha: ";
    cin >> k;

    rotarDerecha(arr, N, k);

    cout << "Vector despues de la rotacion:\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void rotarDerecha(int arr[], int n, int k) {
    k = k % n; 

    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
