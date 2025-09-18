// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void calcularVentasEIVA(int n, double &totalVentas, double &totalIVA);

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0)); 

    int n; // Número de productos vendidos
    cout << "Ingrese el número de productos vendidos en el día: ";
    cin >> n;

    double totalVentas = 0.0;
    double totalIVA = 0.0;

    calcularVentasEIVA(n, totalVentas, totalIVA);

    cout << "Total de ventas del día: " << totalVentas << " Bs" << endl;
    cout << "Total de IVA a pagar (13%): " << totalIVA << " Bs" << endl;

    return 0;
}

void calcularVentasEIVA(int n, double &totalVentas, double &totalIVA) {
    totalVentas = 0.0;

    for (int i = 0; i <= n; ++i) {
        double precioProducto = rand() % 31 + 20; 
        totalVentas += precioProducto;
    }

    if (totalVentas > 2500) {
        totalVentas *= 0.95; 
    }

    totalIVA = totalVentas * 0.13; 
}