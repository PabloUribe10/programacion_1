// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 5

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int temperatura = 0;
    int temperatura_Kelvin = 0;
    cout << "Ingrese la temperatura en C: ";
    cin >> temperatura;
    temperatura_Kelvin = temperatura + 273;    // formula para hallar Kelvin de Celsius
    cout << "La temperatura en Kelvin es: " << temperatura_Kelvin;
    return 0;
}
