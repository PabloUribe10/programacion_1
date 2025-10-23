// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 5

#include <iostream>
#include <Cstdlib>
#include <ctime>

using namespace std;

int suma(int vec[], int tamaño);

int main() {
    system("cls");
    system("chcp 65001");
    srand((time(0)));
    int tamaño = 0;
    cout << "Ingrese el tamaño del vector: ";
    cin >> tamaño;
    int vec[tamaño];

    for (int i = 0; i < tamaño; i++) {
        vec[i] = rand() % 100; 
        cout << vec[i] << ", ";
    }

    suma(vec, tamaño);
    cout << "La suma de los elementos del vector es: " << suma(vec, tamaño) << endl;

    return 0;
}

int suma(int vec[], int tamaño) {
    if (tamaño == 0) {
        return 0; // Caso base: si el tamaño es 0, la suma es 0
    } 
    else {
        return vec[tamaño - 1] + suma(vec, tamaño - 1); // Suma el último elemento y llama recursivamente
    }
}