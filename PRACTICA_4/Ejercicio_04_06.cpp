// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 20/10/2024
// Número de ejercicio: 6
/* Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros
cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2. 
*/
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int valor1;
    int valor2;
    int valor3;

    vector<int>vector1(5);
    vector<int>vector2(5);

    for (int i = 0; i < 5; i++)
    {
        cout << "ingrese el valor "<< i + 1 <<" del vector 1 : ";
        cin >> valor1;
        vector1[i]=valor1;
    }
    
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "ingrese el valor "<< i +1 << " del vector 2 : ";
        cin >> valor2;
        vector2[i]=valor2;
    }
    
    vector<int>vector3 (5);

    for (int i = 0; i < 5; i++)
    {
        
        valor3 = vector1[i] + vector2[i] ;
        vector3[i]=valor3;

    }
    
    cout << endl;
    cout << "El vector resultado de la suma es: "<< endl;
    cout << "[ ";

    for (int i = 0; i < 5; i++)
    {
        cout << vector3[i]<<" ";    
    }

    cout << " ]";
    cout << endl;
    system ("pause");

    return 0;
}