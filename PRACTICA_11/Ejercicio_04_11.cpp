// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 18/11/2024
// Número de ejercicio:4

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string referencia;
    int palabras = 0;

    cout << "Ingrese el la palabra que desea buscar: ";
    getline(cin,referencia);

    ifstream archivo("datos.txt");
    if (!archivo.is_open())
    {
        cout << "El archivo no puede abrirse o existe algun error." <<endl;
    }
    
    else 
    {
        string linea;

        while (getline(archivo,linea))
        {
            istringstream flujo(linea);
            string palabra;

            while (flujo >> palabra)
            {
                if (palabra == referencia)
                {
                    palabras++;
                }           
            }
        }
      cout << "La palabra que ingreso aparece "<<palabras<<" vez/es en el archivo\n";  
    }
    
    

    system("pause");
    return 0;
}