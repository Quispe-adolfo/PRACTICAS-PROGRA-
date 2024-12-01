// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 20/10/2024
// Número de ejercicio: 2
/* Problema planteado: Escriba un programa para introducir los siguientes valores en un arreglo nombrado
voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan
introducido los datos, haga que su programa despliegue los valores.
11.95 16.32 12.15
8.22 15.98 26.22
13.54 6.45 17.59 
*/
#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    int cantidad;
   
    cout <<"cuantos voltajes va a introducir?"<<endl;
    cin >> cantidad; 
    vector<double>voltajes;


    for (int i = 0; i < cantidad; i++)
    {
        double voltios ;
        cout << "ingrese el voltaje "<< i + 1 <<":" << endl;
        cin >> voltios;
        voltajes.push_back(voltios);
    }

    cout << "los voltajes asignados son: "<< endl;
    
    for (int i = 0; i < voltajes.size() ; i++)
    {
        cout << voltajes[i]<<" ";

        if ((i+1) % 3 == 0 ) //salto de linea cada 3 datos
        {
            cout << endl;
        }
    }   

    if (voltajes.size() % 3 != 0 ) //si no se completa una linea de 3 (salto de linea)
    {
        cout << endl;
    }
    
    
    cout << "--------------------------"<< endl;

    
    system("pause");
    return 0;
}