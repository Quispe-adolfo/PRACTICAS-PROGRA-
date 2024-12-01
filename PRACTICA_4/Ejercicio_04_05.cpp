// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 20/10/2024
// Número de ejercicio: 5
// Problema planteado: . Leer 2 vectores de dimensión N y combine ambos en otro vector

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int dimencion;
    int valor1;
    int valor2;

    cout << "Introduzca el tamanio de la lista: "<< endl;
    cin >> dimencion;

    vector<int>numeros1;
    vector<int>numeros2;

    for (int i = 0; i < dimencion; i++)
    {
        cout << "Ingrese el valor "<< i + 1  <<" del vector 1 : ";
        cin >> valor1;
        numeros1.push_back(valor1);

    }
    
    cout  << endl;
     
    for (int  i = 0; i < dimencion; i++)
    {
        cout << "Ingrese el valor "<< i  + 1 <<" del vector 2 : ";
        cin >> valor2;
        numeros2.push_back(valor2);  
    }

    vector<int>resultado;
    resultado.insert(resultado.end(), numeros1.begin(), numeros1.end());
    resultado.insert(resultado.end(), numeros2.begin(), numeros2.end());

    cout << endl;
    cout << "El vector resultado es: ";
    cout<< "[ ";

    for (int  i = 0; i < resultado.size(); i++)
    {
        cout<< resultado[i]<<" ";
    }
    cout << " ]"<<endl;
    cout << "-------------------"<<endl;

    system ("pause");
    return 0;
}