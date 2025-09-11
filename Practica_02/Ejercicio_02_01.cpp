// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 1 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));  
    int lanzamientos;
    cout << "Ingrese el número de lanzamientos del dado: ";
    cin >> lanzamientos;

    int frecuencia[7] = {0};  // Índices 1-6 para las caras del dado  

    for (int i = 0; i < lanzamientos; i++) {
        int cara = rand() % 6 + 1;  // Lanzar el dado (1-6)
        frecuencia[cara]++;
    }

    cout << "Frecuencia de las caras pares:" << endl;
    for (int i = 2; i <= 6; i += 2) {
        cout << "Cara " << i << ": " << frecuencia[i] << endl;
    }

    return 0;
}