// Materia: Programación I, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 20/10/2024
// Número de ejercicio: 1
/* Problema planteado: Escriba declaraciones de arreglo para lo siguiente:
a. una lista de 100 voltajes de precisión doble
b. una lista de 50 temperaturas de precisión doble
c. una lista de 30 caracteres, cada uno representando un código
d. una lista de 100 años en número entero
e. una lista de 32 velocidades de precisión doble
f. una lista de 1000 distancias de precisión doble
g. una lista de 6 números de código enteros
*/

#include <iostream>
#include <vector>

using namespace std;

int  main()
{
    vector<double>voltajes(100);
    vector<double>temperatura(50);
    vector<char>codigo(30);
    vector<int>anios(100);
    vector<double>velocidades(32);
    vector<double>distancias(1000);
    vector<int>code_num(6);

    system("pause");
    return 0;
}