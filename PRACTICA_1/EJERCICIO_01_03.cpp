// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 15/08/2024
// Número de ejercicio: 3
// Problema planteado: Crea un programa para calcular el promedio de notas
#include <iostream>

using namespace std;

int main() {
    int N;
    double suma = 0, nota, promedio;

    cout << "Ingrese el numero de notas: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / N;

    cout << "El promedio general es: " << promedio << endl;

    return 0;
}
