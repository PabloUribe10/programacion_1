// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 11

#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string entrada;
    char delimitador;

    cout << "Ingrese una cadena: ";
    getline(cin, entrada); 

    cout << "Ingrese el delimitador: ";
    cin >> delimitador; 

    size_t pos = 0; 

    while ((pos = entrada.find(delimitador)) != string::npos) { // Mientras se encuentre el delimitador
        cout << entrada.substr(0, pos) << endl;
        entrada.erase(0, pos + 1);
    }

    cout << entrada << endl;

    return 0;
}