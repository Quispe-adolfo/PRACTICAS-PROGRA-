// Materia: Programacion I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creacion: 18/11/2024
// Numero de ejercicio:1

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void generar_archivo(vector<string>&lista)
{
    ofstream archivo("nombres.txt",ios :: app );
    if (archivo.is_open())
    {
        for (int i = 0; i < lista.size(); i++)
        {
            archivo << lista[i] << endl;
        }
        archivo.close();
        cout << "nombres agregado correctamente.\n";
    }
    else
    {
        cout << "no se pudo abrir el archivo. \n";
    }
}

void leer_archivo(const string& nombre_archivo)
{
    ifstream archivo(nombre_archivo);
    if (archivo.is_open())
    {
        string linea;

        cout << "Lista de nombres: \n";
        while (getline(archivo,linea))
        {
            cout << linea << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo"<<endl;
    }
}

int main()

{   
    string nombre;
    vector<string>lista;

    cout << "ingrese los nombres (F para terminar):"<<endl;


    do
    {   
        cout << "Ingrese el nombre "<< lista.size() + 1 <<": " ;

        getline(cin,nombre);

        if (nombre != "F")
        {
          lista.push_back(nombre);  
        }
        
    } while (nombre != "F");

    generar_archivo(lista);

    leer_archivo("nombres.txt");
    
    
    system("pause");
    return 0;

}