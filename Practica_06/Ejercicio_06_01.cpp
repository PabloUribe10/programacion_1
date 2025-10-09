// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 1 

#include <iostream> 
#include <vector> 
#include <string> 
#include <cmath>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    vector<int> edades; 
    int edad; 
    double suma = 0.0, media, desviacion = 0.0; 

    do
    {
        cout << "Ingrese la edad (ingrese -1 para terminar): ";
        cin >> edad;
        if (edad != -1) {
            edades.push_back(edad);
            suma += edad;
        }
    } while (edad != -1);

    int n = edades.size(); 
    if (n == 0) {
        cout << "No se ingresaron edades." << endl; 
        return 0; 
    }

    media = suma / n; 

    for (int i = 0; i < n; i++) {
        desviacion += (edades[i] - media) * (edades[i] - media); 
    }
    desviacion = sqrt(desviacion / n); 

    cout << "La desviacion tipica es: " << desviacion << endl; 

    return 0; 
}