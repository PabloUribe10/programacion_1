// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo. 
// Fecha creación: 21/10/2025 
// Número de ejercicio: 6

#include <iostream>
#include <Cstdlib>
#include <ctime>

using namespace std;

int igualdad(int vec1[], int vec2[], int tamaño);

int main() {
    system("cls");
    system("chcp 65001");
    srand((time(0)));
    int tamaño = 0;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> tamaño;
    int vec1[tamaño];
    int vec2[tamaño];

    cout << "Ingrese " << tamaño << " números enteros para el primer vector:" << endl;
    for (int i = 0; i < tamaño; i++) {
        vec1[i] = rand() % 100; 
        cout << vec1[i] << " ";
    }
    cout << endl;

    cout << "Ingrese " << tamaño << " números enteros para el segundo vector:" << endl;
    for (int i = 0; i < tamaño; i++) {
        vec2[i] = rand() % 100; 
        cout << vec2[i] << " ";
    }
    cout << endl;

    if (igualdad(vec1, vec2, tamaño)) {
        cout << "Los vectores son iguales." << endl;
    } 
    else {
        cout << "Los vectores no son iguales." << endl;
    }

    return 0;
}

int igualdad(int vec1[], int vec2[], int tamaño) {
    if (tamaño == 0) {
        return 1; 
    } 
    else if (vec1[tamaño - 1] != vec2[tamaño - 1]) {
        return 0; 
    } 
    else {
        return igualdad(vec1, vec2, tamaño - 1); // Llamada recursiva para el siguiente elemento
    }
}