// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 12

#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string texto;
    string limpio;
    
    cout << "Ingrese un texto: ";
    getline(cin, texto); 

    for (char c : texto) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) { // Si es una letra
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A');
            }
            limpio += c; 
        }
    }

    string reverso;
    for (int i = limpio.size() - 1; i >= 0; i--) {
        reverso += limpio[i]; 
    }

    if (limpio == reverso) {
        cout << "Es un palíndromo." << endl;
    } else {
        cout << "No es un palíndromo." << endl;
    }

    return 0;
}