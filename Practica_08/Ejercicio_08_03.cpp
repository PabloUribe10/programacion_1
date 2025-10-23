// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 3

#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {
    system("cls");
    system("chcp 65001");
    int n;

    cout << "Ingrese un número entero no negativo para calcular su Fibonacci: ";
    cin >> n;

    int resultado = fibonacci(n);
    cout << "El número Fibonacci en la posición " << n << " es: " << resultado << endl;

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0; // El primer número de Fibonacci es 0
    } 
    else if (n == 1) {
        return 1; // El segundo número de Fibonacci es 1
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}