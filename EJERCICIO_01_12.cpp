// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 12
// Problema planteado: . Crea un programa para leer dos números y verificar si uno es múltiplo del otro o no lo es.

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " es multiplo de " << num2 << endl;
    } else if (num1 != 0 && num2 % num1 == 0) {
        cout << num2 << " es multiplo de " << num1 << endl;
    } else {
        cout << "Ninguno de los numeros es multiplo del otro" << endl;
    }

    return 0;
}
