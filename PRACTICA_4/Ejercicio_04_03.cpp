// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 20/10/2024
// Número de ejercicio: 3
/* Problema planteado: Escriba un programa para introducir los N números enteros en un arreglo llamado
calificaciones.
Después que todos los números son introducidos y se obtiene la suma total de
calificaciones, calcule el promedio de los números y use el promedio para determinar la
desviación de cada valor del promedio. Almacene cada desviación en un arreglo llamado
desviación. Cada desviación se obtiene como el valor del elemento menos el promedio
de todos los datos. Haga que su programa despliegue cada desviación al lado de su
elemento correspondiente del arreglo calificaciones.
Calcule la varianza de los datos usados. La varianza se obtiene elevando al cuadrado
cada desviación individual y dividiendo la suma de las desviaciones cuadradas entre el
número de desviaciones.
*/
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main() 
{
    int tamanio;
    int notas;
    int suma = 0  ;
    int suma2 = 0;
    int promedio;
    int desviacion;
    int varianza;
    

    cout << "Cuantas calificaciones va a introducir? : "<<endl;
    cin >> tamanio;

    vector<int>calificaciones;
    vector<int>desviaciones;
    
    for (int  i = 0; i < tamanio; i++)
    {
        cout << "Ingrese la nota "<< (i + 1)<<":" << endl;
        cin >> notas;
        calificaciones.push_back(notas);
        suma = suma + calificaciones[i];
    }
    
    promedio = (suma/calificaciones.size());

    for (int  i = 0; i < calificaciones.size() ; i++)
    {
        desviacion = calificaciones[i] - promedio;
        desviaciones.push_back(desviacion);
    }

    cout << "Promedio: "<< promedio<< endl;
    cout << "notas:       desviaciones:"<<endl;
    cout << "--------------------"<<endl;

    for (int i = 0; i < calificaciones.size(); i++)
    {
        cout << calificaciones[i]<<"           "<< desviaciones[i]<<endl;
    }
    
    for (int i = 0; i < desviaciones.size(); i++)
    {
        suma2 = suma2 +pow (desviaciones[i],2 );
    }
    
    varianza = (suma2/ desviaciones.size());
    
    cout << "--------------------- "<< suma2<<endl;
    cout << "La varianza es de: "<< varianza<<endl;
    cout << endl;
    
    system("pause");
    return 0;
}