// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo 
// Fecha creación: 1/10/2025 
// Número de ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    vector<int> numeros(10);
    int contador = 0;

    cout << "Ingrese hasta 10 numeros (negativo para terminar): " << endl;
    
    int num; 
    do {
        cin >> num;
        if (num >= 0 && contador < 10) {  // Solo se almacena si es no negativo y hay espacio
            numeros[contador] = num;
            contador++;
        }
    } while (contador < 10 && num >= 0); // Condiciones para continuar

    cout << "Elementos introducidos: ";
    for (int i = 0; i < contador; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}