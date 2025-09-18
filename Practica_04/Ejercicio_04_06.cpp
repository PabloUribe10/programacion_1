// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int esPrimo(int numero);

int main() {
    system("cls");
    system("chcp 65001");
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int sumaDigitos = 0;

    while (numero > 0) {
        int digito = numero % 10;
        if (digito != 0) {
            sumaDigitos += digito;
        }
        numero /= 10;
    }

    if (esPrimo(sumaDigitos)) {
        cout << "La suma de los dígitos distintos de cero es un número primo: " 
             << sumaDigitos << endl;
    } else {
        cout << "La suma de los dígitos distintos de cero no es un número primo: " 
             << sumaDigitos << endl;
    }

    return 0;
}

int esPrimo(int numero) {
    if (numero <= 1) return 0;
    for (int i = 2; i * i <= numero; i++) { 
        if (numero % i == 0) return 0; // No es primo
    }
    return 1; // Es primo
}
