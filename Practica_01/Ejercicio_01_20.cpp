// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 20

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int numero_entero;
    cout << "Ingrese un numero entero: ";
    cin >> numero_entero;
    int cantidad_digitos = 0;
    while (numero_entero != 0) 
    {
        numero_entero /= 10;
        cantidad_digitos = cantidad_digitos + 1;
    }
    cout << "La cantidad de digitos es: " << cantidad_digitos << endl;
    return 0;
}
