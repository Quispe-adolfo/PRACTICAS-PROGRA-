// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 19
// Problema planteado: Crea un programa que reciba días
#include <iostream>

using namespace std;

int main() {
    int dias, horas, minutos, segundos;
    int totalSegundos;

    cout << "Ingrese la cantidad de dias: ";
    cin >> dias;

    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    
    totalSegundos = dias * 86400 + horas * 3600 + minutos * 60 + segundos;

    cout << "El total en segundos es: " << totalSegundos << endl;

    return 0;
}
