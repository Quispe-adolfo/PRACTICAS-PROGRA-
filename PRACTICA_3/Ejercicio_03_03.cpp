// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 3
/* Problema planteado: Convertir un número en base n a base 10, empleando el Teorema Fundamental de
la Numeración:
Ej: Convertir 10102 base 10
1 * 23 + 0 * 22 + 1 * 21 + 0 * 20 = 10 */

#include <iostream>
#include <cmath> 
#include <string> 

using namespace std;

int convertirABase10(const string& numero, int base) 
{
    int resultado = 0;
    int longitud = numero.length();

    for (int i = 0; i < longitud; i++) {
        
        int digito = numero[longitud - 1 - i] - '0'; 
        
        resultado += digito * pow(base, i);
    }

    return resultado;

}

int main() 
{
    string numero;
    int base;

    cout << "Ingrese el numero en base n: ";
    cin >> numero;
    cout << "Ingrese la base (n): ";
    cin >> base;

    int resultado = convertirABase10(numero, base);
    cout << "El numero " << numero << " en base " << base << " es " << resultado << " en base 10." << endl;

    system("pause");
    return 0;
}
