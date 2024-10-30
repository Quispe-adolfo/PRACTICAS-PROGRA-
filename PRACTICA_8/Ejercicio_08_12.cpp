// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 12
/*Problema planteado:  Escribe un programa que invierta el orden de las palabras en una oración sin cambiar
el orden de los caracteres dentro de cada palabra.
• // Entrada: "Hola mundo desde C++"
• // Salida: "C++ desde mundo Hola"  */

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string oracion;
    
    cout << "Ingrese una oración: ";
    getline(cin, oracion);
    
    stringstream ss(oracion);
    vector<string> palabras;
    string palabra;

    
    while (ss >> palabra) {
        palabras.push_back(palabra);
    }

    
    cout << "Oración invertida: ";
    for (int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if (i != 0) {
            cout << " "; 
        }
    }
    cout << endl;

    return 0;
}
