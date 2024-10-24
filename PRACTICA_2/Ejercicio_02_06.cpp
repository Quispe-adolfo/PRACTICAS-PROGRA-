// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 6
/* problema planteado:Leer una hora (en formato de 24 horas) y realizar una función para determinar si
corresponde a la mañana, tarde, noche o madrugada.*/


#include <iostream>
using namespace std ; 

int verificar(int horas, int minutos );

int main() 
{   
    int hora, minutos;
    cout << "INGRESE LA HORA: "<< endl;
    cin >> hora;
    cout << "INGRESE LOS MINUTOS: "<< endl;
    cin >> minutos;
    if (hora < 0 || hora >= 24 || minutos >= 0 || minutos < 60)
    {
        switch (verificar(hora, minutos))
        {
        case 1:
            cout << "madrugada"<< endl;
            break;
        case 2:
            cout << "maniana"<< endl;
            break;
        case 3:
            cout << "tarde"<< endl;
            break;
        case 4:
            cout << "noche"<< endl;
            break;
        
        default:
            cout << "ERROR"<<endl;
            break;
        }
    }
    else
    {
        cout << "error, ingrese una hora valida."<< endl;
    }
     
    system("pause");
    return (0);
}

int verificar(int horas, int minutos )
{   
    int madrugada = 1;
    int maniana = 2;
    int tarde = 3;
    int noche = 4;

    if (horas >=0 && horas < 6  )
    {
        return madrugada;
    }
   
    if ( horas >=6 && horas < 12 )
    {
        return maniana;
    }
    
    if (horas >=12 && horas < 19 )
    {
        return tarde;
    }
    if (horas >=19 && horas <= 24 )
    {
        return noche;
    }
    return -1;
}