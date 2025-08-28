// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 19

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int tablas_multiplicacion;
    cout << "Ingrese el numero de la tabla de multiplicacion que desea saber: ";
    cin >> tablas_multiplicacion;
    switch (tablas_multiplicacion)
    {
    case 1:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl; // Imprime la tabla de multiplicar del numero ingresado mediante un for
        }
        break;
    case 2:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 3:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 4:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 5:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 6:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 7:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 8:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 9:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    case 10:
        for (int i = 1; i <= 10; i++)
        {
            cout << tablas_multiplicacion << " x " << i << " = " << tablas_multiplicacion * i << endl;
        }
        break;
    default:
        cout << "Tabla de multiplicar no tabulada" << endl;
    }
}
