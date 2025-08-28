// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 8

#include <iostream>

using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero es par";
    }
    else
    {
        cout << "El numero es impar";
    }
    return 0;
}