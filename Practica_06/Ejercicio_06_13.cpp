// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 13

#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string texto;
    string resultado;
    
    cout << "Ingrese un texto: ";
    getline(cin, texto); 
    int estado = 1;

    for (char c : texto) {
        if (c == ' ') {
            resultado += c; 
            estado = 1; 
        } else {
            if (estado == 1) {
                if (c >= 'a' && c <= 'z') {
                    c = c - ('a' - 'A'); 
                }
                estado = 0;
            }
            resultado += c; 
        }
    }

    cout << "Texto capitalizado: " << resultado << endl;

    return 0;
}