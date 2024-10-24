// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 13
/* problema planteado:Realizar una función para generar una secuencia de números aleatorios entre 1 y 100,
desplegar en pantalla todos los números generados y si el número es divisible entre 5, al
lado del número debe imprimir un asterisco (*).*/

#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;


void generarNumerosAleatorios(int cantidad) {
    cout << "Números generados:" << endl;
    for (int i = 0; i < cantidad; i++) {
        int numero = rand() % 100 + 1; 
        cout << numero;
        
        
        if (numero % 5 == 0) {
            cout << " *";
        }
        cout << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    int cantidad;
    cout << "Ingrese la cantidad de números aleatorios a generar: ";
    cin >> cantidad;

    generarNumerosAleatorios(cantidad);

    system("pause");
    return 0;
}
