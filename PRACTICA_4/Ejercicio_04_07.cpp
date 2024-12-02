// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 20/10/2024
// Número de ejercicio: 7
/* Problema planteado:  Programa que declare un vector de diez elementos enteros y pida números para
rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se
debe imprimir el vector (sólo los elementos introducidos).
*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int valor;
    vector<int>valores;

        while (valor != -1 && valores.size() < 10)
        { 
            cout << "introduzca el valor "<<  valores.size() + 1<< " del vector: ";
            cin >> valor;
            if (valor != -1)
            {
               valores.push_back(valor); 
            }
        }

    cout << endl;
    cout << "el vector resultante es: ";
    cout<< "[ ";

    for (int  i = 0; i < valores.size(); i++)
    {
        cout << valores[i]<< " ";
    }
    cout << "]";

    system("pause");
    return 0;
}