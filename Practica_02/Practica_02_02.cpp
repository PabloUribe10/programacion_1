// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int lanzamientos;
    int caras = 0;
    int cruces = 0;
    srand((time(0)));
    cout << "Ingrese el numero de lanzamientos de la moneda: ";
    cin >> lanzamientos;
    for (int i = 0; i < lanzamientos; ++i) {
        int lanzamiento = rand() % 2; // Genera 0 o 1
        if (lanzamiento == 0) {
            caras = caras + 1;
        } else {
            cruces = cruces + 1;
        }
    }
    double porcentajeCaras = (double(caras) / lanzamientos) * 100; // Calcular porcentaje de caras
    double porcentajeCruces = (double(cruces) / lanzamientos) * 100;

    cout << "Porcentaje de caras: " << porcentajeCaras << "%" << endl;
    cout << "Porcentaje de cruces: " << porcentajeCruces << "%" << endl;

    return 0;
}