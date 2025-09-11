// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;

int par(int numero);
int impar(int numero);

int main() {
    system("cls");
    system("chcp 65001");
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    par(numero);
    impar(numero);
    return 0;
}

int par(int numero) {
    if (numero % 2 == 0) {
        cout << numero << " es un número par." << endl; // muestra que el número es par
    }
}

int impar(int numero) {
    if (numero % 2 != 0) {
        cout << numero << " es un número impar." << endl;
    }
}