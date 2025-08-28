// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 10

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int nota = 0;
    cout << "Ingrese la nota:";
    cin >> nota;
    if (nota < 51)
    {
        cout << "Reprobado";
    }
    else if (nota < 60)
    {
        cout << " Calificación = C";
    }
    else if (nota < 70)
    {
        cout << " Calificación = C+";
    }
    else if (nota < 80)
    {
        cout << " Calificación = B";
    }
    else if (nota < 90)
    {
        cout << " Calificación = B+";
    }
    else if (nota < 95)
    {
        cout << " Calificación = A";
    }
    else if (nota <= 100)
    {
        cout << " Calificación = A+";
    }
    return 0;
}