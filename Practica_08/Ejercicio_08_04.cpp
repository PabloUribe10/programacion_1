// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int mcd(int a, int b);

int main() {
    system("cls");
    system("chcp 65001");
    int a;
    int b;

    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    mcd(a, b);
    cout << "El máximo común divisor de " << a << " y " << b << " es: " << mcd(a, b) << endl;

    return 0;
}   

int mcd(int a, int b) {
    if (b == 0) {
        return a; // Si b es 0, el MCD es a
    } 
    else {
        return mcd(b, a % b); // Llamada recursiva con b y el resto de a dividido por b
    }
}