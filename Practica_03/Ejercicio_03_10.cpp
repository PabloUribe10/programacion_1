// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 10

#include <iostream>

using namespace std;

int calcularTarifa(double kmRecorridos);

int main() {
    system("cls");
    system("chcp 65001");
    double kmRecorridos;
    cout << "Ingrese la distancia recorrida en kilómetros: ";
    cin >> kmRecorridos;
    double tarifa = calcularTarifa(kmRecorridos);
    cout << "La tarifa del viaje es: " << tarifa << " Bs." << endl;
    return 0;
}

int calcularTarifa(double kmRecorridos) {
    double tarifaBase = 10.0;
    double precioPorKm = 2.0;
    double tarifaTotal = tarifaBase + (kmRecorridos * precioPorKm);
    if (kmRecorridos > 10) {
        tarifaTotal = tarifaTotal * 0.9; // Aplicar descuento del 10%
    }
    return tarifaTotal;
}
