// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 17
// Problema planteado: Crea un programa se encargue de transformar un número decimal
#include <iostream>

using namespace std;

int main() {
    int numero;
    string binario = "";

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero == 0) {
        binario = "0";
    } else {
        int temp = numero;
        while (temp > 0) {
            int bit = temp % 2;
            binario = to_string(bit) + binario;
            temp /= 2;
        }
    }

    cout << "El numero en binario es: " << binario << endl;

    return 0;
}
