// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 23

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int numero_entero;
    cout << "Ingrese un numero entero: ";
    cin >> numero_entero;
    int cifra;
    cout << "El numero al reves es: ";
    while (numero_entero != 0) 
    {
        cifra = numero_entero % 10;
        cout << cifra;
        numero_entero /= 10;
    }
    cout << endl;
    return 0;
}
