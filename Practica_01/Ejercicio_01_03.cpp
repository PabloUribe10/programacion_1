// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 3

#include <iostream>

using namespace std;


int main()
{
    system("cls");
    system("chcp 65001");
    int base = 0;
    int altura = 0;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    int area_triangulo = base * altura / 2;  // formula del area del triangulo
    cout << "El area del triangulo es: " << area_triangulo;
    return 0;
}