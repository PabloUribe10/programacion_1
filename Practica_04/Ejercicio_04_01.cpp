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
    int x = 5;
    int y = 10;

    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;
    IntercambiarValores(x, y);
    cout << "Después de intercambiar: x = " << x << ", y = " << y << endl;

    return 0;
}

void IntercambiarValores(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}