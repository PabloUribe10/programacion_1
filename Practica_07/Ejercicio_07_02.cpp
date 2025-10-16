// Materia: Programación I, Paralelo 3 
// Autor: Pablo Uribe Castedo  
// Fecha creación: 15/10/2024 
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int N;
    int A;
    int B;

    cout << "Ingrese el tamaño de la matriz: ";
    cin >> N;
    cout << "Ingrese el valor mínimo: ";
    cin >> A;
    cout << "Ingrese el valor máximo: ";
    cin >> B;

    int matriz[N][N];
    srand(time(0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % (B - A + 1) + A;
        }
    }

    cout << "Matriz generada:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    int sumaUltimaColumna = 0;
    for (int i = 0; i < N; i++) {
        sumaUltimaColumna += matriz[i][N - 1];
    }
    cout << "Suma de la última columna: " << sumaUltimaColumna << endl;

  int productoUltimaFila = 1;
    for (int j = 0; j < N; j++) {
        if (matriz[N - 1][j] == 0) {
            productoUltimaFila = 0; 
        }
        productoUltimaFila *= matriz[N - 1][j];
    }
    cout << "Producto total de la última fila: " << productoUltimaFila << endl;

    int mayorValor = matriz[0][0];
    int posX = 0, posY = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > mayorValor) {
                mayorValor = matriz[i][j];
                posX = i; // Guardamos la posición X
                posY = j; // Guardamos la posición Y
            }
        }
    }
    cout << "Mayor valor: " << mayorValor << " en la posición (" << posX << ", " << posY << ")" << endl;

    double suma = 0;
    double sumaCuadrados = 0;
    int totalElementos = N * N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            suma += matriz[i][j];
            sumaCuadrados += matriz[i][j] * matriz[i][j];
        }
    }
    double media = suma / totalElementos;
    double varianza = (sumaCuadrados / totalElementos) - (media * media);
    double desviacionEstandar = sqrt(varianza);
    cout << "Desviación estándar : " << desviacionEstandar << endl;

    return 0;
}
