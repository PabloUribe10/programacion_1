// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 12

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int numero = 0;
    do {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> numero;
        if ((numero < 1 || numero > 5)){
            cout << "Numero invalido. Intente de nuevo " << endl;
        }
    } while (numero < 1 || numero > 5);
    cout << "Correcto! El numero ingresado es: " << numero << endl;
    return 0;
}
