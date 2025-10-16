// Materia: Programación I, Paralelo 3 
// Autor: Pablo Uribe Castedo  
// Fecha creación: 15/10/2024 
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int n;

    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = (i * 2) + (j + 1); // llenar la matriz 
        }
    }

    cout << "Matriz :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl;
    }

    return 0;
}