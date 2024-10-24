// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 7
/* problema planteado:Realizar una función para imprimir la tabla de multiplicar de un número dado.*/

#include <iostream>
using namespace std ; 

void tabla(long numero);

int main() 
{   
    long numero;
    cout << "introduzca un numero: "<< endl;
    cin >> numero;
    cout << "la tabla de multiplicar de dicho numero es: " << endl;
    tabla(numero);

    system("pause");
    return (0);
}
void tabla(long numero)
{
    long resultado;
    for (int i = 1; i <= 10 ; i++)
    {
        cout << numero << " * " << i <<" = " <<numero * i <<endl;
    }
}

