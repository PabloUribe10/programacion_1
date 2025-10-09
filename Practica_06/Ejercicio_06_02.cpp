// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 2

#include <iostream> 
#include <vector> 
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    const int n = 6; 
    string minerales[6] = {"SN", "SB", "AU", "PT", "AG", "CU"}; 
    double produccion[6] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412}; 
    string buscar; 
    bool encontrado = false; 

    cout << "Ingrese el nombre del mineral a buscar (SN, SB, AU, PT, AG, CU): ";
    cin >> buscar;

    for (int i = 0; i < n; i++) {
        if (minerales[i] == buscar) {
            cout << "La produccion de " << buscar << " es: " << produccion[i] << " toneladas metricas." << endl; 
            encontrado = true; 
            break; 
        }
    }

    if (!encontrado) {
        cout << "Mineral no encontrado." << endl; 
    }

    // Ordenar del mayor al menor usando el método de burbuja
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (produccion[j] < produccion[j + 1]) {
                double tempProd = produccion[j];
                produccion[j] = produccion[j + 1];
                produccion[j + 1] = tempProd;
                
                string tempMin = minerales[j];
                minerales[j] = minerales[j + 1];
                minerales[j + 1] = tempMin;
            }
        }
    }

    cout << "\nMineral\tProduccion (TM)" << endl;
    for (int i = 0; i < n; i++) {
        cout << minerales[i] << "\t" << produccion[i] << endl;
    }

    return 0; 
}