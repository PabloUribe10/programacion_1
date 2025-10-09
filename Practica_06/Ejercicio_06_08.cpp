// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 8

#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string correo;
    int arrobaCount = 0;
    int puntoCount = 0;

    cout << "Ingrese una dirección de correo electrónico: ";
    cin >> correo;

    for (size_t i = 0; i < correo.length(); i++) {
        // Contar '@'
        if (correo[i] == '@') {
            arrobaCount++;
        }
        // Contar '.' después del '@'
        if (arrobaCount == 1 && correo[i] == '.') {
            puntoCount++;
        }
    }

    if (arrobaCount == 1 && puntoCount >= 1) {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}

