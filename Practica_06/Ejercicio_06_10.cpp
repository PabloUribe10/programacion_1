// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 10

#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string entrada;

    cout << "Ingrese una cadena: ";
    getline(cin, entrada); 

    string resultado;

    for (char c : entrada) {
        if (c < '0' || c > '9') { // Si no es un dígito
            resultado += c; 
        }
    }

    cout << "Salida: " << resultado << endl;

    return 0;
}