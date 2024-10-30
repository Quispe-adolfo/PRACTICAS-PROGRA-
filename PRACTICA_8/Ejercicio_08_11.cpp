// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 11
/*Problema planteado:  Escribe un programa que valide si una cadena ingresada cumple con el formato
básico de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@'
y al menos un punto '.' después del '@').
• // Entrada: "usuario@example.com"
• // Salida: "Correo electrónico válido"
• // Entrada: "usuarioexample.com"
• // Salida: "Correo electrónico inválido"  */
#include <iostream>
#include <string>

using namespace std;

bool esCorreoValido(const string& correo) {
    size_t arrobaPos = correo.find('@');
    size_t puntoPos = correo.find('.', arrobaPos);

    
    if (arrobaPos != string::npos && puntoPos != string::npos && correo.find('@', arrobaPos + 1) == string::npos) 
    {
        return true;
    }
    return false;
}

int main() {
    string correo;

    cout << "Ingrese una dirección de correo electrónico: ";
    getline(cin, correo);

    if (esCorreoValido(correo)) {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}
