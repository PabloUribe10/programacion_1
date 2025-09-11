// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int anio_bisiesto(int anio);
int dias_mes(int anio, int mes);

int main() {
    system("cls");
    system("chcp 65001");
    int anio;
    int mes;
    cout << "Ingrese un año: ";
    cin >> anio;
    cout << "Ingrese un mes: ";
    cin >> mes;
    int dias = dias_mes(anio, mes);
    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;
    return 0;
}

int anio_bisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int dias_mes(int anio, int mes) {
    int dias;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            if (anio_bisiesto(anio)) { // año bisiesto
                dias = 29;
            } else {
                dias = 28;
            }
            break;
    }
    return dias;
}