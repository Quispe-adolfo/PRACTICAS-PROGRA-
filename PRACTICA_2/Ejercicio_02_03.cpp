// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 3
/* problema planteado:3. Cálculo de la distancia entre dos puntos: Leer las coordenadas de dos puntos en el
plano cartesiano y realizar una función para calcular la distancia entre ellos usando la
fórmula.*/

#include <iostream>
#include <cmath>

using namespace std ; 

double calculo(double x1, double y1, double x2, double Y2);

int main() 
{   
    double x1,y1,x2,y2, distancia;

    cout << "ingrese el primer punto: ";
    cin >> x1;
    cin >> y1;

    cout << "ingrese el segundo punto: ";
    cin >> x2;
    cin >> y2;

    distancia = calculo(x1,y1,x2,y2);

    cout << "La distancia es igual a: "<< distancia<<endl;

    system("pause");
    return (0);
}

double calculo(double x1, double y1, double x2, double y2)
{
    int distancia;
    distancia = sqrt(pow(x2-x1,2) + pow(y2 - y1,2));
    return distancia;
}