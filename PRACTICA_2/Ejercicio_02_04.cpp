// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 4
/* problema planteado: Leer tres números enteros y realizar una función para determinar si pueden formar un
triángulo rectángulo (aplicar el teorema de Pitágoras).*/

#include <iostream>
#include <cmath>
using namespace std ; 

bool verificacion(double cateto1, double cateto2, double hipotenusa);
int main() 
{   
    double C_adyacente, C_opuesto, hipotenusa;

    cout << "Introduce el valor del cateto adyacente: ";
    cin >>  C_adyacente;
    cout << "Introduce el valor del cateto opuesto: ";
    cin >> C_opuesto;
    cout << "Introduce el valor de la hipotenusa: ";
    cin >> hipotenusa;

    if (verificacion(C_adyacente,C_opuesto, hipotenusa))
    {
        cout << "Los lados forman un triángulo rectangulo." << endl;
    }
    else
    {
        cout << "Los lados NO forman un triángulo rectangulo." << endl;  
    }
    

    system("pause");
    return (0);
}

bool verificacion(double cateto1, double cateto2, double hipotenusa)
{
    return (pow(hipotenusa,2)==pow(cateto1,2)+pow(cateto2,2));
}