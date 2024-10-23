// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 14
// Problema planteado: Crea un programa para obtener el factorial de un número entero sin emplear el producto.
#include <iostream>

using namespace std;

int suma(int a, int b) {
    return a + b;
}

int calcularFactorial(int numero) {
    int factorial = 1;

    for (int i = 1; i <= numero; i++) {
        int temp = 0;
        for (int j = 0; j < factorial; j++) {
            temp = suma(temp, i);
        }
        factorial = temp;
    }

    return factorial;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        int resultado = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }

    return 0;
}
