// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 6
// Problema planteado: Crea un programa para verificar si un número ingresado es amigo.
#include <iostream>
using namespace std;

int sumaDivisoresPropios(int numero) {
    int suma = 0;
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int suma1 = sumaDivisoresPropios(num1);
    int suma2 = sumaDivisoresPropios(num2);

    if (suma1 == num2 && suma2 == num1) {
        cout << "Los numeros " << num1 << " y " << num2 << " son amigos." << endl;
    } else {
        cout << "Los numeros " << num1 << " y " << num2 << " no son amigos." << endl;
    }

    return 0;
}

