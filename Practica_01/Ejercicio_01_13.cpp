// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 13

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int numero;
    int suma = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++)  // ciclo para sumar los numeros, la suma empieza en 0 y aumenta con i
    {
        suma = suma + i;
    }
    cout << "La suma de los numeros es: " << suma << endl;
}