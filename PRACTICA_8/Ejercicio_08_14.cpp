// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 14 
/*Problema planteado:  Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un
delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas  */
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string cadena;
    char delimitador;

    cout << "Ingrese la cadena: ";
    getline(cin, cadena);
    
    cout << "Ingrese el delimitador: ";
    cin >> delimitador;

    stringstream ss(cadena);
    string token;
    vector<string> tokens;

    
    while (getline(ss, token, delimitador)) {
        tokens.push_back(token);
    }


    cout << "Salida:" << endl;
    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}
