// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo 
// Fecha creación: 1/10/2025 
// Número de ejercicio: 3 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls"); 
    system("chcp 65001"); 

    int N;
    cout << "Ingrese el número de calificaciones: ";
    cin >> N;

    vector<int> calificaciones(N);
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese la calificación " << (i + 1) << ": ";
        cin >> calificaciones[i];
    }

    int suma = 0;
    for (int i = 0; i < N; ++i) {
        suma += calificaciones[i];
    }

    double promedio = static_cast<double>(suma) / N;
    cout << "\nSuma total de calificaciones: " << suma;
    cout << "\nPromedio de calificaciones: " << promedio << "\n";

    vector<double> desviacion(N);
    for (int i = 0; i < N; ++i) {
        desviacion[i] = calificaciones[i] - promedio;
    }

    cout << "\nDesviaciones:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Calificación: " << calificaciones[i] << " - Desviación: " << desviacion[i] << "\n"; // Mostrar calificación y su desviación
    }

    double sumaDesviacionesCuadradas = 0.0;
    for (int i = 0; i < N; ++i) {
        sumaDesviacionesCuadradas += desviacion[i] * desviacion[i];
    }

    double varianza = sumaDesviacionesCuadradas / N;
    cout << "\nVarianza de las calificaciones: " << varianza << "\n";

    return 0;
}