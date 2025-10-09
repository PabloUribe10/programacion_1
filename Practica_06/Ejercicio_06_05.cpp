// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int N1;
    int N2;

    cout << "Ingrese la cantidad de clientes de la primera empresa: ";
    cin >> N1;
    vector<string> clientes1(N1);
    cout << "Ingrese los nombres de los clientes de la primera empresa:" << endl;
    for (int i = 0; i < N1; i++) {
        cin >> clientes1[i];
    }

    cout << "Ingrese la cantidad de clientes de la segunda empresa: ";
    cin >> N2;
    vector<string> clientes2(N2);
    cout << "Ingrese los nombres de los clientes de la segunda empresa:" << endl;
    for (int i = 0; i < N2; i++) {
        cin >> clientes2[i];
    }
 
    cout << "Clientes en común:" << endl;
    int clientesComunes = 0; // Contador para clientes comunes

    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < N2; j++) {
            if (clientes1[i] == clientes2[j]) {
                cout << clientes1[i] << endl;
                clientesComunes++; 
            }
        }
    }

    if (clientesComunes == 0) {
        cout << "No hay clientes en común." << endl;
    }

    return 0;
}