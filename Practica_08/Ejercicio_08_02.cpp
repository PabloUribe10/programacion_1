// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 2

#include <iostream>

using namespace std;

int potencia(int base, int exponente);

int main() {
    system("cls");
    system("chcp 65001");
    int base, exponente;

    cout << "Ingrese la base (entero): ";
    cin >> base;
    cout << "Ingrese el exponente (entero no negativo): ";
    cin >> exponente;

    potencia(base, exponente);
    cout << base << " elevado a la " << exponente << " es: " << potencia(base, exponente) << endl;

    return 0;
}

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1; // Cualquier número elevado a 0 es 1
    } 
    else {
        return base * potencia(base, exponente - 1);
    }
}