// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 14

#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    string texto;
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0; 

    cout << "Ingrese una frase: ";
    getline(cin, texto); 

    for (char c : texto) {

        char letra = tolower(c);

        switch (letra) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            default:
                break; 
        }
    }

    cout << "Cantidad de vocales:" << endl;
    cout << "A: " << a << endl;
    cout << "E: " << e << endl;
    cout << "I: " << i << endl;
    cout << "O: " << o << endl;
    cout << "U: " << u << endl;

    return 0;
}