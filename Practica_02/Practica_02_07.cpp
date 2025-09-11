// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int ninos;
    cout << "Ingrese la cantidad total de niños: ";
    cin >> ninos;
    srand((time(0)));

    int ninos1 = rand() % (ninos + 1);
    int ninos2 = rand() % (ninos + 1 - ninos1);
    int ninos3 = ninos - ninos1 - ninos2;
    int consumo = (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2); //consumo total de pañales

    cout << "Niños de 1 año: " << ninos1 << endl;
    cout << "Niños de 2 años: " << ninos2 << endl;
    cout << "Niños de 3 años: " << ninos3 << endl;
    cout << "Consumo total de pañales: " << consumo << " PAÑALES" << endl;

    return 0;
}