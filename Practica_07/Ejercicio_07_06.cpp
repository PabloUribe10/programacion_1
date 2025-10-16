// Materia: Programación I, Paralelo 3 
// Autor: Pablo Uribe Castedo  
// Fecha creación: 15/10/2024 
// Número de ejercicio: 6

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int N;
    int M;

    cout << "Ingrese el número de filas N: ";
    cin >> N;
    cout << "Ingrese el número de columnas M: ";
    cin >> M;

    int matriz[N][M];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    int transpuesta[M][N]; // La matriz transpuesta tendrá dimensiones M x N
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}