// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 16

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int numero_1;
    int numero_2;
    int suma_1 = 0;
    int suma_2 = 0;
    cout << "Ingrese el primer numero: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero_2;
    for (int i = 1; i < numero_1; i++) 
    {
        if (numero_1 % i == 0) 
        {
            suma_1 = suma_1 + i;
        }
    }
    for (int i = 1; i < numero_2; i++) 
    {
        if (numero_2 % i == 0) 
        {
            suma_2 = suma_2 + i;
        }
    }
    if (suma_1 == numero_2 && suma_2 == numero_1) // verifica si son amigos, mediante la suma de divisores
    {
        cout << "Los numeros son amigos" << endl;
    } 
    else 
    {
        cout << "Los numeros no son amigos" << endl;
    }
    return 0;
}