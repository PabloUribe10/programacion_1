// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int numeros_aleatorios;
    cout << "Ingrese la cantidad de números aleatorios a generar: ";
    cin >> numeros_aleatorios;
    srand((time(0)));
    int sumatoria = 0;
    int mayor = 0;
    int menor = 1001; 
    for (int i = 0; i < numeros_aleatorios; ++i) {
        int numero = rand() % 1000 + 1; // Generar número aleatorio entre 1 y 1000
        sumatoria = sumatoria + numero;

        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    double promedio = double(sumatoria) / numeros_aleatorios;
    cout << "sumatoria: " << sumatoria << endl;
    cout << "promedio: " << promedio << endl;
    cout << "valor mayor generado: " << mayor << endl;
    cout << "valor menor generado: " << menor << endl;

    return 0;
}