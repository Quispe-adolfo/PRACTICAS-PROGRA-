// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 8
/* Problema planteado: Generar:
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321 */
#include <iostream>
using namespace std;

void generarPatron(int n) {
    for (int i = 1; i <= n; i++) { 
       
        for (int j = 1; j <= i; j++) {
            cout << j; 
        }
        
        for (int j = i - 1; j >= 1; j--) {
            cout << j; 
        }
        cout << endl; 
    }
}

int main() {
    int n = 9; // Número de filas a generar
    generarPatron(n); 

    system("pause");
    return 0;
}
