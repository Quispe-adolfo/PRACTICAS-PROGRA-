// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 11
// Problema planteado: . Crea un programa para calcular para multiplicar dos números enteros
#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int resultado = 0;

    cout << "Ingrese el primer numero entero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

  
    for (int i = 0; i < abs(num2); i++) {
        resultado += num1;
    }


    if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0)) {
        resultado = -resultado;
    }

    cout << "El resultado de la multiplicacion es: " << resultado << endl;

    return 0;
}
