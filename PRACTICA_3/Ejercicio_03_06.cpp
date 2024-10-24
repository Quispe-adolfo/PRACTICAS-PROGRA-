// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 6
/* Problema planteado: Escribir un algoritmo que permita adivinar un número que se genere internamente
al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en
base a aproximaciones para lo cual se dispone de 5 intentos.
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    
    int numeroAleatorio = rand() % 51;
    int intento;
    const int maxIntentos = 5;

    cout << "He generado un número entre 0 y 50. Tienes " << maxIntentos << " intentos para adivinarlo." << endl;

    for (int i = 1; i <= maxIntentos; i++) 
    {
        cout << "Intento " << i << ": Ingresa tu número: ";
        cin >> intento;

        if (intento < 0 || intento > 50) {
            cout << "Por favor, elige un número dentro del rango de 0 a 50." << endl;
            i--; // No contar este intento
            continue;
        }

        if (intento == numeroAleatorio) 
        {

            cout << "¡Felicidades! Adivinaste el número: " << numeroAleatorio << endl;
            break; // Salir del bucle si adivina correctamente

        } 
        else if (intento < numeroAleatorio) 
        {
            cout << "El número es más alto." << endl;
        } 
        else 
        {
            cout << "El número es más bajo." << endl;
        }

        if (i == maxIntentos) {
            cout << "Lo siento, se te han acabado los intentos. El número era: " << numeroAleatorio << endl;
        }
    }
}
 
