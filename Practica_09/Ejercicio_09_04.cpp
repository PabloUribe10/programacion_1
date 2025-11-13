// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 5/11/2024 
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct Empleado {
    char nombre[100];
    char genero[20];
    double salario;
};

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;
    cout << "Cantidad de empleados a registrar: ";
    cin >> N;

    Empleado* empleados = new Empleado[N];

    for (int i = 0; i < N; i++) {
        cout << "\nIngrese los datos del empleado " << (i + 1) << ":\n";

        cout << "Nombre: ";
        cin >> empleados[i].nombre;

        cout << "Género: ";
        cin >> empleados[i].genero;

        empleados[i].salario = (rand() % 5000) + 3000; // Salario entre 3000 y 7999
        cout << "Salario: " << empleados[i].salario << endl;
    }

    int indice_menor = 0;
    int indice_mayor = 0;

    for (int i = 1; i < N; i++) {
        if (empleados[i].salario < empleados[indice_menor].salario) {
            indice_menor = i;
        }
        if (empleados[i].salario > empleados[indice_mayor].salario) {
            indice_mayor = i;
        }
    }

    cout << "\nEmpleado con menor salario:\n";
    cout << "Nombre: " << empleados[indice_menor].nombre << endl;
    cout << "Género: " << empleados[indice_menor].genero << endl;
    cout << "Salario: " << empleados[indice_menor].salario << endl;

    cout << "\nEmpleado con mayor salario:\n";
    cout << "Nombre: " << empleados[indice_mayor].nombre << endl;
    cout << "Género: " << empleados[indice_mayor].genero << endl;
    cout << "Salario: " << empleados[indice_mayor].salario << endl;

    delete[] empleados;
    return 0;
}