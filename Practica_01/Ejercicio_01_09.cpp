// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 9

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int edad = 0;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <= 12)
    {
        cout << "Niño";
    }
    else if (edad <= 18)
    {
        cout << "Adolescente";
    }
    else if (edad <= 60)
    {
        cout << "Mayor de edad";
    }
    else
    {
        cout << "Adulto mayor";
    }

    return 0;
}
