// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo 
// Fecha creación: 1/10/2025 
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");

    int N;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> N;

    vector<int> vector1(N), vector2(N), resultado(2 * N);
    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < N; ++i) {
        resultado[i] = vector1[i];
        resultado[i + N] = vector2[i]; // Combina ambos vectores
    }

    cout << "\nVector combinado:\n";
    for (int i = 0; i < 2 * N; ++i) {
        cout << "Elemento " << (i + 1) << ": " << resultado[i] << "\n"; 
    }

    return 0;
}