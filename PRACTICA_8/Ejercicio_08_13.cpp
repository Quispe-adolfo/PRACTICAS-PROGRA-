// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 13 
/*Problema planteado:   Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"   */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    string resultado;

    for (char c : cadena) {
        
        if (!isdigit(c)) {
            resultado += c;
        }
    }

    cout << "Cadena sin dígitos: " << resultado << endl;

    return 0;
}
