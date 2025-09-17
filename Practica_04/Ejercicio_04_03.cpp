// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 3

#include <iostream>

using namespace std;

void ModificarValores(int valorPorValor, int& valorPorReferencia);

int main() {
    system("cls");
    system("chcp 65001");
    int a = 5;
    int b = 15;

    cout << "Antes de llamar a la función - a: " << a << ", b: " << b << endl;
    ModificarValores(a, b);
    cout << "Después de llamar a la función - a: " << a << ", b: " << b << endl;

    return 0;
}

void ModificarValores(int valorPorValor, int& valorPorReferencia) {
    valorPorValor *= 2; 
    valorPorReferencia += 10; 
}

