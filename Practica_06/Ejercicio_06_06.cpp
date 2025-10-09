// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int N;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    vector<int> calificaciones(N);

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < N; i++) {
        calificaciones[i] = rand() % 101; 
    }

    int reprobados = 0;
    int regulares = 0;
    int buenos = 0;
    int excelentes = 0;

    for (int i = 0; i < N; i++) {
        if (calificaciones[i] >= 0 && calificaciones[i] <= 59) {
            reprobados++;
        } else if (calificaciones[i] >= 60 && calificaciones[i] <= 79) {
            regulares++;
        } else if (calificaciones[i] >= 80 && calificaciones[i] <= 89) {
            buenos++;
        } else if (calificaciones[i] >= 90 && calificaciones[i] <= 100) {
            excelentes++;
        }
    }

    cout << "Porcentaje de estudiantes en cada rango:" << endl;
    cout << "Reprobado (0-59): " << (reprobados * 100.0 / N) << "%" << endl; // Porcentaje con un decimal
    cout << "Regular (60-79): " << (regulares * 100.0 / N) << "%" << endl;
    cout << "Bueno (80-89): " << (buenos * 100.0 / N) << "%" << endl;
    cout << "Excelente (90-100): " << (excelentes * 100.0 / N) << "%" << endl;

    return 0;
}