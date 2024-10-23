// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 18
// Problema planteado: Escribe una función que calcule si un número dado es un número de Armstrong
#include <iostream>
#include <cmath>

using namespace std;

bool esNumeroDeArmstrong(int numero) {
    int suma = 0;
    int numeroOriginal = numero;
    int cantidadDigitos = 0;

    
    while (numero > 0) {
        numero /= 10;
        cantidadDigitos++;
    }

    numero = numeroOriginal;

    
    while (numero > 0) {
        int digito = numero % 10;
        suma += pow(digito, cantidadDigitos);
        numero /= 10;
    }

    return suma == numeroOriginal;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (esNumeroDeArmstrong(numero)) {
        cout << numero << " es un numero de Armstrong." << endl;
    } else {
        cout << numero << " no es un numero de Armstrong." << endl;
    }

    return 0;
}
