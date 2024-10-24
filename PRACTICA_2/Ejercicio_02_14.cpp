// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 14
/* problema planteado:Realizar una función para generar los cuadrados perfectos en el rango 1 a n.
Un número cuadrado, es un número entero que es el cuadrado de algún otro; dicho de
otro modo, es un número cuya raíz cuadrada es un número natura*/

#include <iostream>
#include <cmath> 
using namespace std;


void generarCuadradosPerfectos(int n) 
{
    cout << "Cuadrados perfectos entre 1 y " << n << ":" << endl;
    for (int i = 1; i * i <= n; i++) {
        cout << i * i << endl; 
    }
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo (n): ";
    cin >> n;

    if (n < 1) 
    {
        cout << "Por favor, ingrese un numero mayor o igual a 1." << endl;
    } 
    else 
    {
        generarCuadradosPerfectos(n);
    }

    system("pause");
    return 0;
}
