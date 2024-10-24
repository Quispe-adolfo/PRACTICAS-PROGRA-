// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 
/* Problema planteado: Obtener la suma de la serie:
4 + 6 + 9 + 13 + 19 + 28 + 42 +……. Para n términos */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "El numero de terminos debe ser positivo." << endl;
        return 1;
    }

    int suma = 0; 
    int terminos[n]; 
    terminos[0] = 4; 
    if (n > 1) terminos[1] = 6; 

    suma += terminos[0]; 
    if (n > 1) suma += terminos[1]; 

    for (int i = 2; i < n; i++) 
    {
        
        terminos[i] = terminos[i - 1] + terminos[i - 2] + (i - 1);
        suma += terminos[i]; 
    }

    cout << "La suma de los primeros " << n << " terminos de la serie es: " << suma << endl;

    
    cout << "Terminos generados: ";
    for (int i = 0; i < n; i++) 
    {
        cout << terminos[i] << (i < n - 1 ? ", " : "");
    }
    cout << endl;

    system("pause");
    return 0;
}
