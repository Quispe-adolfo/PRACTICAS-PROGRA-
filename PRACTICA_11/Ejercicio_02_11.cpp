// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 18/11/2024
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{   
    int palabras = 0;

    ifstream archivo("texto.txt");
    if (!archivo.is_open())
    {
        cout << "no se pudo abrir el archivo.\n";
        system("pause");

        return 1;
    }
    string linea;

    while (getline(archivo,linea))
    {
        istringstream flujo(linea);
        string palabra;

        while (flujo >> palabra)
        {
            palabras ++;
        }
        
    }
    
    cout << "el texto del archivo tiene una cantidad de: " << palabras << " palabras.\n";

    system ("pause");
    return 0;
}