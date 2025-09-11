// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int promedio_ponderado();

int main(){
    system("cls");
    system("chcp 65001");
    promedio_ponderado();
    return 0;
}

int promedio_ponderado() {
    srand(time(0));
    int calificaciones[4];
    int pesos[4] = {10, 20, 30, 40};
    int suma_ponderada = 0;
    int suma_pesos = 0;

    for (int i = 0; i < 4; i++) {
        calificaciones[i] = rand() % 100 + 1; 
        suma_ponderada += calificaciones[i] * pesos[i];
        suma_pesos += pesos[i];
    }

    float promedio = float(suma_ponderada) / suma_pesos;
    cout << "El promedio ponderado es: " << promedio << endl; // Mostrar el promedio ponderado
    return 0;
}