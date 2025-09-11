// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 11

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double retirarDinero(double saldo, double cantidad);

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));
    double saldo = rand() % 501; // Saldo aleatorio entre 0 y 500
    double cantidad;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;
    double nuevoSaldo = retirarDinero(saldo, cantidad);
    if (nuevoSaldo != saldo) {
        cout << "Retiro exitoso. Nuevo saldo: " << nuevoSaldo << " Bs." << endl;
    }
    return 0;
}

double retirarDinero(double saldo, double cantidad) {
    if (cantidad > saldo) {
        cout << "Saldo insuficiente." << endl;
        return saldo;
    }
    if (int(cantidad) % 10 != 0) {
        cout << "El monto a retirar debe ser múltiplo de 10." << endl;
        return saldo;
    }
    saldo -= cantidad;
    return saldo;
}
