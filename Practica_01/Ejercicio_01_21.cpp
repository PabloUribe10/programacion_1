// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 21

#include <iostream>

using namespace std;

int main(){
    system("cls");
    system("chcp 65001");
    int numero_1;
    int numero_2;
    cout << "Ingrese el primer numero: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero_2;
    int multiplicacion = 0;
    for (int i = 1; i <= numero_2; i++)
    {
        multiplicacion = multiplicacion + numero_1;
    }
    cout << "La multiplicacion es: " << multiplicacion << endl;
    return 0;
}