// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 15
/* problema planteado: Escribir un programa generar un número aleatorio no mayor a dos dígitos y realizar
una función para muestre el número en literal. Ejemplo: 34 Treinta y cuatro */

#include <iostream>
#include <cstdlib> // Para usar rand() y srand()
#include <ctime>   // Para usar time()
using namespace std;

string numeroALiteral(int numero) 
{
    string unidades[] = {
        "Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco",
        "Seis", "Siete", "Ocho", "Nueve", "Diez", "Once",
        "Doce", "Trece", "Catorce", "Quince", "Dieciséis",
        "Diecisiete", "Dieciocho", "Diecinueve"
    };
    
    string decenas[] = {
        "", "", "Veinte", "Treinta", "Cuarenta", "Cincuenta",
        "Sesenta", "Setenta", "Ochenta", "Noventa"
    };
    
    if (numero < 20) 
    {
        return unidades[numero];
    } 
    else 
    {
        int decena = numero / 10;
        int unidad = numero % 10;
        if (unidad == 0) {
            return decenas[decena];
        } else {
            return decenas[decena] + " y " + unidades[unidad];
        }
    }
}

int main() {
    
    srand(time(0));
    
  
    int numeroAleatorio = rand() % 100;


    cout << "Número aleatorio: " << numeroAleatorio << endl;

 
    cout << "En literal: " << numeroALiteral(numeroAleatorio) << endl;

    system("pause");
    return 0;
}
