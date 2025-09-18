// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 5

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    float horasTrabajadas;
    float tarifaPorHora;
    float bonificacion = 0.0;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaPorHora;

    float salario = horasTrabajadas * tarifaPorHora;

    if (horasTrabajadas > 8) {
        bonificacion = (horasTrabajadas - 8) * (tarifaPorHora * 1.5); // Bonificación por horas extra
    }

    cout << "Salario del trabajador: " << salario << endl;
    cout << "Salario bonificación: " << bonificacion << endl;

    return 0;
}
