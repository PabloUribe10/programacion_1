// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;

    cout << "Cantidad de píxeles en la imagen: " ;
    cin >> N;

    vector<int> imagen(N);

    for (int i = 0; i < N; i++) {
        imagen[i] = rand() % 256; 
    }
    vector<int> rangos(26, 0); // 0-255 se divide en 26 rangos de 10

    for (int i = 0; i < N; i++) {
        int rango = imagen[i] / 10; 
        rangos[rango]++; 
    }

    cout << "Conteo de píxeles en cada rango:" << endl;
    for (int i = 0; i < rangos.size() - 1; i++) {
        cout << "Rango " << (i * 10) << "-" << (i * 10 + 9) << ": " << rangos[i] << " píxeles" << endl;
    }
    cout << "Rango 250-255: " << rangos[25] << " píxeles" << endl; 

    return 0;
}