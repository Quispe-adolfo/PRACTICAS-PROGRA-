// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 4
/* Problema planteado: Mediante una función obtener la suma de la serie:
1 - 4 + 9 - 16 + 25 - 36 +…………………. Para n términos */

#include <iostream>
using namespace std;

int sumaSerie(int n) {
    int suma = 0;

    for (int i = 1; i <= n; i++) {
        int termino = i * i; 
        
        if (i % 2 == 0) {
            suma -= termino; 
        } else {
            suma += termino; 
        }
    }

    return suma;
}

int main() {
    int n;

    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    int resultado = sumaSerie(n);
    cout << "La suma de la serie para n = " << n << " es: " << resultado << endl;

    system("pause");
    return 0;
}
