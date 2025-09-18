// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 1 

#include <iostream>

using namespace std;

void IntercambiarValores(int& a, int& b);

int main(){
    system("cls");
    system("chcp 65001");
    int a = 0;
    int b = 0;
    cout << "Ingrese el valor de x: ";
    cin >> a;
    cout << "Ingrese el valor de y: ";
    cin >> b;

    cout << "Antes de intercambiar: a = " << a << ", b = " << b << endl;
    IntercambiarValores(a, b);
    cout << "Después de intercambiar: a = " << a << ", b = " << b << endl;

    return 0;
}

void IntercambiarValores(int& a, int& b) {
    int x = a; // Guardar el valor de 'a' en una variable temporal
    a = b;
    b = x;
}