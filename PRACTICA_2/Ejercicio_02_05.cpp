// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 5
/* problema planteado:Leer un año y un mes (como número) y realizar una función para determinar cuántos
días tiene ese mes considerando si el año es bisiesto.*/

#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int diasDelMes(int mes, int anio) {
    if (mes < 1 || mes > 12) {
        cout << "Mes no válido." << endl;
        return -1;  
    }
    
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }
    
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    
    if (mes == 2) {
        return esBisiesto(anio) ? 29 : 28;
    }
    
    return 0;  
}

int main() {
    int anio, mes;
    
    cout << "Introduce el año: ";
    cin >> anio;
    
    cout << "Introduce el mes (como número): ";
    cin >> mes;
    
    int dias = diasDelMes(mes, anio);
    
    if (dias != -1) {
        cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;
    }
    
    return 0;
}

