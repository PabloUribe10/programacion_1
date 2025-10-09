// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 9

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string oracion;
    
    cout << "Ingrese una oración: ";
    getline(cin, oracion); 

    vector<string> palabras;
    string palabra;

    for (char c : oracion) {
        if (c == ' ') {
            if (palabra.size() > 0) {
                palabras.push_back(palabra); 
                palabra = "";  
            }
        } else {
            palabra += c; // Construir la palabra
        }
    }

    if (palabra.size() > 0) {
        palabras.push_back(palabra);
    }

    for (int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if (i != 0) {
            cout << " "; 
        }
    }
    cout << endl; 

    return 0;
}