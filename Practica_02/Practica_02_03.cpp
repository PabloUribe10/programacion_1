// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    srand((time(0)));

    int numero = rand() % 10 + 1; // Genera un número aleatorio entre 1 y 10
    int factorial = 1;

    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "El numero aleatorio es: " << numero << endl;
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}