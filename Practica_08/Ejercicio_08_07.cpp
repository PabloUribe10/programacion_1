// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 7

#include <iostream>

using namespace std;

int q(int n);

int main() {
    system("cls");
    system("chcp 65001");
    int n;

    cout << "Ingrese un número entero : ";
    cin >> n;

    int resultado = q(n);
    cout << "El resultado de q(" << n << ") es: " << resultado << endl;

    return 0;
}

int q(int n) {
    if (n == 0) {
        return 0; 
    } 
    else {
        return (n * n) + q(n - 1); 
    }
}