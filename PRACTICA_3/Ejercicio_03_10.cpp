// Materia: Programación I, Paralelo 1
// Autor:Luis Adolfo Quispe Huacani
// Fecha creación: 30/09/2024
// Número de ejercicio: 10
/* Problema planteado: En una guardería hay N niños de 1, 2 y 3 años:
- Los niños de 1 año consumen 6 pañales al día
- Los niños de 2 años consumen 3 pañales diarios
- Los niños de 3 años consumen 2 pañales diarios
Se desea conocer cuantos pañales por día se consumen.
La cantidad de niños de 1, 2 y 3 años, debe ser generada en forma aleatorio y la
suma no debe sobrepasar los N niños.
Por ejemplo, si el usuario ingresar N = 30, el programa debe generar en forma
aleatoria 5 niños de 1 año, 18 niños de 2 años y 3 niños de 3 años.
De acuerdo con esto el consumo de pañales seria (5 x 6) + (18 x 3) + (3 x 2) = 90
PAÑALES*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int calcularConsumoPañales(int niños1, int niños2, int niños3) {
    return (niños1 * 6) + (niños2 * 3) + (niños3 * 2);
}


void generarNiños(int totalNiños, int &niños1, int &niños2, int &niños3) {
    niños1 = 0;
    niños2 = 0;
    niños3 = 0;

    
    while (totalNiños > 0) {
        int tipoNiño = rand() % 3; 

        if (tipoNiño == 0 && totalNiños > 0) { 
            niños1++;
            totalNiños--;
        } else if (tipoNiño == 1 && totalNiños > 0) { 
            niños2++;
            totalNiños--;
        } else if (tipoNiño == 2 && totalNiños > 0) { 
            niños3++;
            totalNiños--;
        }
    }
}

int main() 
{
    srand(time(0)); 

    int N; 
    cout << "Ingrese la cantidad total de niños: ";
    cin >> N;

    
    if (N <= 0) {
        cout << "Por favor, ingrese un número válido de niños." << endl;
        return 1;
    }

    
    int niños1, niños2, niños3;

    
    generarNiños(N, niños1, niños2, niños3);

    
    int totalPañales = calcularConsumoPañales(niños1, niños2, niños3);

    
    cout << "Niños de 1 año: " << niños1 << endl;
    cout << "Niños de 2 años: " << niños2 << endl;
    cout << "Niños de 3 años: " << niños3 << endl;
    cout << "Consumo total de pañales por día: " << totalPañales << endl;
    
    system("pause");
    return 0;
}
