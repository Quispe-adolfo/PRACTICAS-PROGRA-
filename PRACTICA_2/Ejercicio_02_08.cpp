// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 8
/* problema planteado:Realizar una función para imprimir los primeros N números de la secuencia de
Fibonacci.*/

#include <iostream>
using namespace std;

void fibonacci(int N) {
    long long int a = 0, b = 1, siguiente;

    if (N >= 1)
        cout << a << " ";  
    if (N >= 2)
        cout << b << " ";  

    for (int i = 3; i <= N; i++)
    {
        siguiente = a + b;  
        cout << siguiente << " ";
        a = b;  
        b = siguiente;
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Introduce el número de términos de la secuencia de Fibonacci que deseas ver: ";
    cin >> N;

    if (N > 0) 
    {
        fibonacci(N);
    } 
    else 
    {
        cout << "Por favor, introduce un número mayor que 0." << endl;
    }

    system("pause");
    return 0;
}
