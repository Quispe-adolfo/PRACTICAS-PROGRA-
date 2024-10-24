// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 11
/* problema planteado:Realizar una función para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49... para n
términos*/

#include <iostream>
using namespace std;


void generarSecuencia(int n) {
    
    int secuencia[n];

    
    secuencia[0] = 1; // Término 1
    secuencia[1] = 1; // Término 2

    
    cout << secuencia[0] << ", " << secuencia[1];

    
    for (int i = 2; i < n; i++) {
        
        if (i < 5) {
            
            secuencia[i] = 2 * secuencia[i - 1]; 
        } else {
            
            secuencia[i] = secuencia[i - 1] + secuencia[i - 2];
        }
        
        cout << ", " << secuencia[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Introduce el numero de terminos a generar: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, introduce un numero entero positivo." << endl;
    } else {
        generarSecuencia(n);
    }

    system("pause");
    return 0;
}
