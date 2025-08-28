// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 14

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}