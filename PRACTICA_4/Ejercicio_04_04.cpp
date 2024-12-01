// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 20/10/2024
// Número de ejercicio: 4 
/* Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro
vector.*/
#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    int dimencion;
    int producto;
    int valor;
    int valor2;
    vector<int>numeros1;
    vector<int>numeros2;

    cout << "ingrese el tamanio de los  vectores  : "<<endl;
    cin >> dimencion;
    

    for (int i = 0;  i < dimencion ; i++)
    {
      cout << "ingrese el valor "<< i + 1 << " del vector 1 : ";
      cin >> valor;
      numeros1.push_back(valor);
    }
    
    cout << endl;

    for (int i = 0; i < numeros1.size(); i++)
    {
        cout << "ingrese el valor "<< i + 1  << " del vector 2 : ";
        cin >> valor2;
        numeros2.push_back(valor2); 
    }

    vector<int>resultado;

    for (int  i = 0; i < dimencion; i++)
    {
        producto= numeros1[i]*numeros2[i];
        resultado.push_back(producto);
    }

    cout << endl;

    cout << "El vector resultado: "<< endl;
    cout << "[ ";

    for (int  i = 0; i < dimencion ; i++)
    {
        cout << resultado[i]<<" ";
    }
    
    cout << "]";
    cout << endl; 
    system("pause");

    return 0;
}