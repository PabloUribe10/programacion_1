// Materia: Programación I, Paralelo 3 
// Autor: Pablo Uribe Castedo  
// Fecha creación: 15/10/2024 
// Número de ejercicio: 1

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int n;

    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    int matriz[n][n];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = temp; // intercambiar los valores
    }

    cout << "Matriz después de intercambiar los valores " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { 
            cout << matriz[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}