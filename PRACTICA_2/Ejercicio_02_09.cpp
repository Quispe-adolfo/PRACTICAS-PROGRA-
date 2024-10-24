// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 9
/* problema planteado:Leer un número entero y realizar una función para determinar si el número ingresado
pertenece a la secuencia de Fibonacci.*/

#include <iostream>
#include <cmath>

using namespace std;


bool esCuadradoPerfecto(int num)
{
    int raiz = sqrt(num);
    return (raiz * raiz == num);
}


bool esFibonacci(int numero) 
{
    
    return esCuadradoPerfecto(5 * numero * numero + 4) || esCuadradoPerfecto(5 * numero * numero - 4);
}

int main() {

    int numero;
    cout << "Introduce un número entero: ";
    cin >> numero;

    if (esFibonacci(numero)) 
    {
        cout << "El número " << numero << " pertenece a la secuencia de Fibonacci." << endl;
    } 
    else 
    {
        cout << "El número " << numero << " NO pertenece a la secuencia de Fibonacci." << endl;
    }

    system("pause");
    return 0;
}
