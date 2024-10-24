// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 2
/* problema planteado:Cálculo de la hipotenusa: Leer las longitudes de los dos catetos de un triángulo
rectángulo y realizar una función para calcular la hipotenusa usando el teorema de
Pitágoras.*/

#include <iostream>
#include <cmath>

using namespace std ; 

double calculo(double cateto1, double cateto2);

int main() 
{   
    double valor1, valor2, hipotenusa;
    cout << "Introduzca el valor del cateto 1: ";
    cin >> valor1;
    cout << endl;
    cout << "introduzca el valor del cateto 2: ";
    cin >> valor2;

    hipotenusa = calculo(valor1, valor2);

    cout << "El valor de la hipotenusa es: "<< hipotenusa << endl; 

    system ("pause");
    return (0);
}

double calculo (double cateto1, double cateto2)
{
    return sqrt(pow(cateto1,2)+pow(cateto2,2));
}