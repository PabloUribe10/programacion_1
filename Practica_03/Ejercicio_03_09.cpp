// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 9

#include <iostream>

using namespace std;

int calcularTiempo(int minutosTrabajados);

int main() {
    system("cls");
    system("chcp 65001");
    int minutosTrabajados;
    cout << "Ingrese el tiempo total trabajado en minutos: ";
    cin >> minutosTrabajados;
    int resultado = calcularTiempo(minutosTrabajados);
    if (resultado > 0) {
        cout << "Ha trabajado " << resultado << " minutos extra." << endl;
    } else if (resultado < 0) {
        cout << "Debe " << -resultado << " minutos a la empresa." << endl;
    } else {
        cout << "Ha cumplido exactamente con la jornada laboral." << endl;
    }
    return 0;
}

int calcularTiempo(int minutosTrabajados) {
    const int jornadaLaboral = 8 * 60; // 8 horas en minutos
    return minutosTrabajados - jornadaLaboral;
}