// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 6

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int Numero = 0;
    cout << "Ingrese un numero: ";
    cin >> Numero;
    if (Numero > 0)   // cualquier numero positivo
    {
        cout << "El numero es positivo" << endl;
    }
    else if (Numero < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es 0" << endl;
    }
    return 0;
}