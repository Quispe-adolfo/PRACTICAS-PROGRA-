// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 2
/* Problema planteado: Simular el lanzamiento de un dado n veces y determinar la frecuencia de
repetición de las caras pares. */

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() 
{   
    int n; 
    cout << "Ingrese el número de lanzamientos del dado: ";
    cin >> n;

    if (n <= 0) {
        cout << "El número de lanzamientos debe ser positivo." << endl;
        return 1;
    }

    srand(static_cast<unsigned>(time(0))); 
    int contadorPares = 0; // Contador de caras pares

    for (int i = 0; i < n; i++) {
        int lanzamiento = rand() % 6 + 1; 
        cout << "Lanzamiento " << (i + 1) << ": " << lanzamiento << endl;

        
        if (lanzamiento % 2 == 0) {
            contadorPares++; 
        }
    }

    // Calcular la frecuencia de caras pares
    double frecuenciaPares = static_cast<double>(contadorPares) / n * 100; 

    cout << "Frecuencia de caras pares: " << contadorPares << " (" << frecuenciaPares << "%)" << endl;

    system("pause");
    return 0;
}
