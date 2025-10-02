// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo 
// Fecha creación: 1/10/2025 
// Número de ejercicio: 2  

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls"); 
    system("chcp 65001");
    
    vector<double> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59}; // Lista de voltajes

    for (int i = 0; i < voltios.size(); ++i) {
        cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0) cout << endl;
    }

    return 0;
}