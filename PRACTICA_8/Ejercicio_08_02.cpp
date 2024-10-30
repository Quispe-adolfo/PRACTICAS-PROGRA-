// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio:  2
/*Problema planteado:  Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y
otro contiene los nombres de estos minerales, para obtener:
- Buscar por nombre de mineral y desplegar la producción
- Ordenar del mayor al menor (producción) y mostrar:
Mineral Produccion ™
SN 998.000
SB 876.500
AU 786.670
PT 636.143
AG 135.567
CU 109.412  */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Datos constantes
const int NUM_MINERALES = 6;
const string minerales[NUM_MINERALES] = {"SN", "SB", "AU", "PT", "AG", "CU"};
const double produccion[NUM_MINERALES] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

// Funciones
void buscarProduccion(const string& mineralBuscado);
void ordenarProduccion();

int main() {
    int opcion;
    string mineralBuscado;
    do {
        cout << "\nMENU\n1. Buscar produccion por nombre de mineral\n2. Ordenar y mostrar produccion (mayor a menor)\n3. Salir\nSeleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre del mineral (SN, SB, AU, PT, AG, CU): ";
                cin >> mineralBuscado;
                buscarProduccion(mineralBuscado);
                break;
            case 2:
                ordenarProduccion();
                break;
            case 3:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida.\n";
                break;
        }
    } while (opcion != 3);

    return 0;
}

void buscarProduccion(const string& mineralBuscado) {
    bool encontrado = false;
    for (int i = 0; i < NUM_MINERALES; i++) {
        if (minerales[i] == mineralBuscado) {
            cout << "Produccion de " << minerales[i] << ": " << produccion[i] << " toneladas metricas\n";
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Mineral no encontrado.\n";
    }
}

void ordenarProduccion() {
    // Crear un arreglo temporal para ordenar
    pair<string, double> mineralesProduccion[NUM_MINERALES];
    for (int i = 0; i < NUM_MINERALES; i++) {
        mineralesProduccion[i] = {minerales[i], produccion[i]};
    }

    // Ordenar del mayor al menor en producción
    sort(mineralesProduccion, mineralesProduccion + NUM_MINERALES, [](pair<string, double> a, pair<string, double> b) {
        return a.second > b.second;
    });

    cout << "Mineral  Produccion (tm)\n";
    for (int i = 0; i < NUM_MINERALES; i++) {
        cout << mineralesProduccion[i].first << "       " << mineralesProduccion[i].second << endl;
    }
}
 
