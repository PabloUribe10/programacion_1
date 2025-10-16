// Materia: Programación I, Paralelo 3 
// Autor: Pablo Uribe Castedo  
// Fecha creación: 15/10/2024 
// Número de ejercicio: 5

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int N;
    int M;

    cout << "Ingrese el número de filas de la primera matriz N: ";
    cin >> N;
    cout << "Ingrese el número de columnas de la primera matriz M : ";
    cin >> M;

    int matrizA[N][M];
    int matrizB[M][N];
    int matrizC[N][N]; 

    cout << "Ingrese los elementos de la primera matriz (" << N << "x" << M << "):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz (" << M << "x" << N << "):" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizC[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j]; // multiplicación de matrices
            }
        }
    }

    cout << "Matriz resultante (" << N << "x" << N << "):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrizC[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}