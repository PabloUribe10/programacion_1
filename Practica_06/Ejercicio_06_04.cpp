// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");

    int N, k;
    cout << "Ingrese el número de elementos en el vector: ";
    cin >> N;

    vector<int> numeros(N);
    cout << "Ingrese " << N << " números:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
    }

    cout << "Ingrese el número de posiciones a rotar a la derecha: ";
    cin >> k;
    k = k % N;

    vector<int> rotado(N);
    for (int i = 0; i < N; i++) {
        rotado[(i + k) % N] = numeros[i];
    }

    cout << "Vector después de rotar " << k << " posiciones a la derecha:" << endl;
    for (int num : rotado) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}