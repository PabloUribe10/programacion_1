// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 15

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int numero = 0;
    int divisor = 1;
    int contador = 0; 
    cout << "Ingrese un numero: ";
    cin >> numero;
    while (divisor <= numero)  
    { 
        if (numero % divisor == 0) // verifica si es divisor
        {
            contador = contador + 1; 
            divisor = divisor + 1; 
        }
        else 
        {
            divisor = divisor + 1; 
        }
    }
    if (contador == 2)
    {
        cout << numero << " es primo" << endl;
    } else 
    {
        cout << numero << " no es primo" << endl;
    }
    return 0;
}
