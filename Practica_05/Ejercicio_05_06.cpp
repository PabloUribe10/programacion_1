// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo 
// Fecha creación: 1/10/2025 
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    vector<int> vector1(5);
    vector<int> vector2(5);
    vector<int> vector3(5);

    cout << "Ingrese los elementos del vector1: " ;
    for (int i = 0; i < 5; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del vector2: " ;
    for (int i = 0; i < 5; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i]; // Suma elemento a elemento
    }

    cout << "Elementos del vector3 (suma de vector1 y vector2): " ;
    for (int i = 0; i < 5; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}