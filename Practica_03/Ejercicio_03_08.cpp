// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 8

#include <iostream>

using namespace std;

int billetes_200(int& monto);
int billetes_100(int& monto);
int billetes_50(int& monto);
int billetes_20(int& monto);
int billetes_10(int& monto);
int monedas_5(int& monto);
int monedas_2(int& monto);
int monedas_1(int& monto);

int main() {
    system("cls");
    system("chcp 65001");
    int monto;
    cout << "Ingrese una cantidad de dinero en Bs: ";
    cin >> monto;
    
    cout << "Total billetes y monedas:" << endl;
    cout << billetes_200(monto) << " billete(s) de 200 Bs" << endl; // cantidad de billetes de 200 Bs
    cout << billetes_100(monto) << " billete(s) de 100 Bs" << endl;
    cout << billetes_50(monto) << " billete(s) de 50 Bs" << endl;
    cout << billetes_20(monto) << " billete(s) de 20 Bs" << endl;
    cout << billetes_10(monto) << " billete(s) de 10 Bs" << endl;
    cout << monedas_5(monto) << " moneda(s) de 5 Bs" << endl;
    cout << monedas_2(monto) << " moneda(s) de 2 Bs" << endl;
    cout << monedas_1(monto) << " moneda(s) de 1 Bs" << endl;

    return 0;
}

int billetes_200(int& monto) {
    int cantidad = monto / 200;
    monto %= 200; 
    return cantidad;
}

int billetes_100(int& monto) {
    int cantidad = monto / 100;
    monto %= 100; 
    return cantidad;
}

int billetes_50(int& monto) {
    int cantidad = monto / 50;
    monto %= 50; 
    return cantidad;
}

int billetes_20(int& monto) {
    int cantidad = monto / 20;
    monto %= 20;
    return cantidad;
}

int billetes_10(int& monto) {
    int cantidad = monto / 10;
    monto %= 10; 
    return cantidad;
}

int monedas_5(int& monto) {
    int cantidad = monto / 5;
    monto %= 5; 
    return cantidad;
}

int monedas_2(int& monto) {
    int cantidad = monto / 2;
    monto %= 2; 
    return cantidad;
}

int monedas_1(int& monto) {
    return monto; 
}