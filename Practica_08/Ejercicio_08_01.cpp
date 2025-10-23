// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 1 

#include <iostream>

int suma(int numero);

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int numero;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    int resultado = suma(numero);
    cout << "La suma de los dígitos de " << numero << " es: " << resultado << endl;

    return 0;
}

int suma(int numero) {
    if (numero == 0) {
        return 0;
    } 
    else {
        return (numero % 10) + suma(numero / 10);
    }
}