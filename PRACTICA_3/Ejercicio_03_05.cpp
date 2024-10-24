// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 5
/* Problema planteado: Simular el lanzamiento de una moneda n veces y determinar el porcentaje de
caras y el porcentaje de sellos.
*/
#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

void simularLanzamientos(int n) 
{
    int caras = 0;
    int sellos = 0;

 
    for (int i = 0; i < n; i++) 
    {
        
        int resultado = rand() % 2;
         
        if (resultado == 0) 
        {
            caras++; 
        } 
        else 
        {
            sellos++; 
        }
    }

    
    double porcentajeCaras = (static_cast<double>(caras) / n) * 100;
    double porcentajeSellos = (static_cast<double>(sellos) / n) * 100;

    
    cout << "Lanzamientos totales: " << n << endl;
    cout << "Porcentaje de caras: " << porcentajeCaras << "%" << endl;
    cout << "Porcentaje de sellos: " << porcentajeSellos << "%" << endl;
}

int main() {
    int n;

    cout << "Ingrese el número de lanzamientos: ";
    cin >> n;

    
    srand(static_cast<unsigned int>(time(0)));

    // Llamar a la función para simular lanzamientos
    simularLanzamientos(n);

    system("pause");
    return 0;
}
