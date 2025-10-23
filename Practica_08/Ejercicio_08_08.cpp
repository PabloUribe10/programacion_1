// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 8

#include <iostream>

using namespace std;

int ullman(int n);

int main() {
    system("cls");
    system("chcp 65001");
    int n;

    cout << "Ingrese un número entero mayor que 1: ";
    cin >> n;

    cout << "La secuencia de la conjetura de Ullman es:" << endl;
    ullman(n);

    return 0;
}

int ullman(int n) {
    cout << n << " "; 
    if (n == 1) {
        return 1; 
    } 
    else if (n % 2 == 0) {
        return ullman(n / 2); 
    } 
    else {
        return ullman(3 * n + 1);
    }
}