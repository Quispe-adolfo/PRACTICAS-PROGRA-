// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 9
/* Problema planteado: Generar (para un orden n): Sea n=5:
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1 */
#include <iostream>
using namespace std;

void generarPatron(int n) {
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl; 
    }
}

int main() {
    int n = 5; // Orden del patrón
    generarPatron(n); 

    system("pause");
    return 0;
}
