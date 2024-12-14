// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 18/11/2024
// Número de ejercicio:3

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct estudiantes
{
    string nombre;
    int edad;
    float promedio;
};

void agregar_datos(vector<estudiantes>& lista)
{
    estudiantes temp;
    string continuar = "Y" ;

    do
    {
     cout << "Ingrese el nombre del o la estudiante: ";
     getline(cin, temp.nombre);

     cout << "Ingrese la edad del o la estudiante: ";
     
     cin >> temp.edad;
     
     cin.ignore();

     cout << "ingrese el promedio de notas del o la estudiante: ";
     cin >> temp.promedio;
    
     size_t lista_antes = lista.size();
     lista.push_back(temp);
     size_t lista_despues = lista.size();

     if (lista_antes < lista_despues)
     {
        cout << "estudiante agregado correctamente."<<endl;
     }
     else
     {
        cout << "ocurrio algun error.";
     }   
     cin.ignore();
     cout << "desea agregar a otro estudiante? (Y/N); "; 
     getline(cin,continuar);  

     cout << endl;

    } while (continuar == "Y");
}

void generar_archivo(vector<estudiantes>& lista)
{

    ofstream archivo("estudiantes.txt", ios::app);
    if (archivo.is_open())

    {   
        for (size_t i = 0; i < lista.size(); i++)
        {   
            archivo << "-------------------------\n";
            archivo <<"Nombre: "<< lista[i].nombre<<endl;
            archivo <<"Edad: "<< lista[i].edad<<endl;
            archivo <<"Promedio: "<< lista[i].promedio<<endl;
        }
    }
    
}

void mostrar_archivo(const string & nombre_archivo)
{
    ifstream archivo(nombre_archivo);
    if (archivo.is_open())
    {
        string linea;

        cout << "Lista de estudiantes: "<<endl;

        while (getline(archivo,linea))
        {
            cout << linea << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "no se pudo abrir el archivo.\n";
    }

}

int main() {
    
    vector<estudiantes>lista;
    
    estudiantes temp;
    cout << "ingrese a los estudiantes: \n";

    
    agregar_datos(lista);
    generar_archivo(lista);
    cout<<endl;
    mostrar_archivo("estudiantes.txt");
    cout<<endl;

    system ("pause");
    return 0;
}