// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 1
// Problema planteado: Área de un triángulo
#include <iostream>
using namespace std;

int main() {
    double base, altura, area;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
