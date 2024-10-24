// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 1
// problema planteado:Leer una cantidad de segundos y realizar una función para convertirla a horas, minutos y segundos.

#include <iostream>
using namespace std ; 

void convertirTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);
int main() 
{
    int totalSegundos, horas, minutos, segundos;
    cout << "introduzca el tiempo en segundos:"<<endl;
    cin >> totalSegundos;

    convertirTiempo(totalSegundos, horas, minutos, segundos);

    cout << "Horas: " << horas << ",  minutos: " << minutos << ",  segundos: "<< segundos << endl;

    system("pause");
    return (0);
}

void convertirTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos/3600;
    totalSegundos %= 3600; 
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}