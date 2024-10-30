// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo  Quispe Huacani
// Fecha creación: 29/10/2024
// Número de ejercicio: 3 
/*Problema planteado:   Se tiene 3 vectores de 10 elementos cada uno:
• Vector de nombres.
• Vector Apellidos
• Vector de Edad
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
Esto debe realizar N veces.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Constantes
const int TAM = 10;

void mostrarAleatorio(const string nombres[], const string apellidos[], const int edades[], int repeticiones);

int main() {
    // Inicializar vectores de nombres, apellidos y edades
    string nombres[TAM] = {"Juan", "Maria", "Luis", "Ana", "Pedro", "Laura", "Carlos", "Sofia", "Miguel", "Lucia"};
    string apellidos[TAM] = {"Perez", "Gomez", "Lopez", "Diaz", "Martinez", "Sanchez", "Ramirez", "Fernandez", "Garcia", "Rodriguez"};
    int edades[TAM] = {25, 30, 22, 27, 19, 24, 21, 28, 26, 23};

    int N;
    cout << "Ingrese el numero de veces que desea seleccionar una combinacion aleatoria: ";
    cin >> N;

    // Semilla para generación aleatoria
    srand(time(0));

    mostrarAleatorio(nombres, apellidos, edades, N);

    return 0;
}

void mostrarAleatorio(const string nombres[], const string apellidos[], const int edades[], int repeticiones) {
    for (int i = 0; i < repeticiones; i++) {
        int indiceNombre = rand() % TAM;
        int indiceApellido = rand() % TAM;
        int indiceEdad = rand() % TAM;

        cout << "Seleccion aleatoria " << i + 1 << ": " << nombres[indiceNombre] << " " 
             << apellidos[indiceApellido] << ", Edad: " << edades[indiceEdad] << " años\n";
    }
}
