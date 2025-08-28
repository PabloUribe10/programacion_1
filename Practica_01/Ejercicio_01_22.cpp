// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 22

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int numero_1;
    int numero_2;
    cout << "Ingrese el primer numero: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero_2;
    if (numero_1 % numero_2 == 0)
    {
        cout << numero_1 << " es multiplo de " << numero_2 << endl;
    }
    else
    {
        cout << numero_1 << " no es multiplo de " << numero_2 << endl;
    }
    return 0;
}
