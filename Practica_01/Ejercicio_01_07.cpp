// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 7

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    char letra;
    cout << "Introduzca una letra: ";
    cin >> letra;
    if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u'))   // verifica si es vocal
    {
        cout << "la letra es una vocal" << endl;
    }
    else 
    {
        cout << "la letra es una consonante" << endl;
    }
    return 0;
}