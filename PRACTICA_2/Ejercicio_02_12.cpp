// Materia: Programacion 1, Paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha de creacion: 23/09/2024
// Numero de ejercicio: 12
/* problema planteado: Escriba un programa para leer dos valores enteros distintos entre sí, de tal forma que,
si el primer número es mayor al segundo, realizar una función para genere una serie
descendente, caso contrario, realizar otra función para muestre una serie ascendente; el
factor de incremento o decremento es la unidad.*/

#include <iostream>
using namespace std;


void serieDescendente(int a, int b) {
    cout << "Serie descendente desde " << a << " hasta " << b << ": ";
    for (int i = a; i >= b; i--) {
        cout << i << " ";
    }
    cout << endl;
}


void serieAscendente(int a, int b) {
    cout << "Serie ascendente desde " << a << " hasta " << b << ": ";
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    
    if (num1 == num2) {
        cout << "Los numeros deben ser distintos." << endl;
        return 1; 
    }

    
    if (num1 > num2) {
        serieDescendente(num1, num2);
    } else {
        serieAscendente(num1, num2);
    }

    system("pause");
    return 0;
}
