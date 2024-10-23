// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 2
// Problema planteado: Crea un programa para calcular el volumen de una esfera
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio, volumen;

    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);

    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}
