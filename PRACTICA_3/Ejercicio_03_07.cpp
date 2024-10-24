// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 7
/* Problema planteado: Generar las secuencias:
1 2 3 4 …………..n
1 2 3 4……. n-1
1 2 3 …...n-2
……….
1 */
#include <iostream>
using namespace std;

void generarSecuencias(int n) {
    for (int i = 0; i < n; i++) { 
        for (int j = 1; j <= n - i; j++) { 
            cout << j << " ";
        }
        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    generarSecuencias(n); // Llama a la función para generar las secuencias

    system("pause");
    return 0;
}
