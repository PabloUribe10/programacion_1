// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 5/11/2024 
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct Empleado {
    char nombre[100];
    int id;
    double sueldo;
    int antiguedad; 
};

int contarEmpleadosConSueldoMayor(Empleado* empleados, int N, double sueldoReferencia);
double calcularPromedioAntiguedad(Empleado* empleados, int N);

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;
    cout << "Cantidad de empleados a registrar: ";
    cin >> N;

    Empleado* empleados = new Empleado[N];

    for (int i = 0; i < N; i++) {
        cin.ignore();
        cout << "\nIngrese los datos del empleado " << (i + 1) << ":\n";

        cout << "Nombre: ";
        cin.getline(empleados[i].nombre, 100);

        empleados[i].id = rand() % 10000 + 1; // ID aleatorio entre 1 y 10000
        cout << "ID: " << empleados[i].id << endl;

        empleados[i].sueldo = (rand() % 5000) + 1000 + (rand() % 100) / 100.0; // Sueldo entre 1000.00 y 5999.99
        cout << "Sueldo: " << empleados[i].sueldo << endl;

        empleados[i].antiguedad = rand() % 31; // Antigüedad entre 0 y 30 años
        cout << "Antigüedad (años): " << empleados[i].antiguedad << endl;
    }

    double sueldoReferencia;
    cout << "\nIngrese un valor de sueldo para comparar: ";
    cin >> sueldoReferencia;

    int cantidadMayorSueldo = contarEmpleadosConSueldoMayor(empleados, N, sueldoReferencia);
    cout << "Cantidad de empleados con sueldo mayor a " << sueldoReferencia << ": " << cantidadMayorSueldo << endl;

    double promedioAntiguedad = calcularPromedioAntiguedad(empleados, N);
    cout << "Promedio de antigüedad de los empleados: " << promedioAntiguedad << " años" << endl;

    delete[] empleados;
    return 0;
}

int contarEmpleadosConSueldoMayor(Empleado* empleados, int N, double sueldoReferencia) {
    int contador = 0;
    for (int i = 0; i < N; i++) {
        if (empleados[i].sueldo > sueldoReferencia) {
            contador++;
        }
    }
    return contador;
}

double calcularPromedioAntiguedad(Empleado* empleados, int N) {
    if (N == 0) return 0.0;

    int sumaAntiguedad = 0;
    for (int i = 0; i < N; i++) {
        sumaAntiguedad += empleados[i].antiguedad;
    }
    return static_cast<double>(sumaAntiguedad) / N;
}