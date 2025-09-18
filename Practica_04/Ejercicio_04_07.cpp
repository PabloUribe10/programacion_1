// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 7

#include <iostream>

using namespace std;

int mcd(int m, int n);
int mcm(int m, int n);

int main() {
    system("cls");
    system("chcp 65001");
    int m;
    int n;
    cout << "Ingrese un número entero positivo m: ";
    cin >> m;
    cout << "Ingrese un número entero positivo n: ";
    cin >> n;

    cout << "Máximo Común Divisor (MCD): " << mcd(m, n) << endl;
    cout << "Mínimo Común Múltiplo (MCM): " << mcm(m, n) << endl;

    return 0;
}

int mcd(int m, int n) {
    while (n != 0) { 
        int resto = m % n;  // Calcular el resto
        m = n;             
        n = resto;         
    }
    return m;
}

int mcm(int m, int n) {
    return (m * n) / mcd(m, n); 
}