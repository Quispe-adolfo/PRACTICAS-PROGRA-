// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 10
/* problema planteado:Leer un número de cuatro dígitos y realizar una función para determinar si al menos
dos de los dígitos son iguales.*/


#include <iostream>
using namespace std;


bool tieneDigitosIguales(int numero) {
   
    int d1 = numero / 1000;         
    int d2 = (numero / 100) % 10;     
    int d3 = (numero / 10) % 10;      
    int d4 = numero % 10;             

   
    return (d1 == d2 || d1 == d3 || d1 == d4 || d2 == d3 || d2 == d4 || d3 == d4);
}

int main() {
    int numero;
    cout << "Introduce un numero de cuatro digitos: ";
    cin >> numero;

    if (numero >= 0000 && numero <= 9999) { 
        if (tieneDigitosIguales(numero)) {
            cout << "El numero tiene al menos dos digitos iguales." << endl;
        } else {
            cout << "El numero NO tiene digitos iguales." << endl;
        }
    } else {
        cout << "Error: Introduzca un numero de cuatro dígitos valido." << endl;
    }

    system("pause");
    return 0;
}
