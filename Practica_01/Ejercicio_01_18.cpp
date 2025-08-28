// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 18

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    for (int i = 1; i <=100; i++)
    {
        int numero = i;
        int divisor = 1;
        int contador = 0;
        while (divisor <= numero)
        {
            if (numero % divisor == 0)
            {
                contador = contador + 1;
            }
            divisor = divisor + 1;
        }
        if (contador == 2)
        {
            cout << numero << endl;
        }
    }
}
