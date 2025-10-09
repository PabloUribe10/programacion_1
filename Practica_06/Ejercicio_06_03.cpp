// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 9/10/2024 
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");

    vector<string> nombres = {
        "Juan", "Ana", "Pedro", "Maria", "Luis",
        "Sofia", "Carlos", "Laura", "Javier", "Emma"
    };
    
    vector<string> apellidos = {
        "Gomez", "Lopez", "Martinez", "Fernandez", "Perez",
        "Rodriguez", "Sanchez", "Torres", "Morales", "Diaz"
    };
    
    vector<int> edades = {25, 30, 22, 28, 35, 40, 18, 26, 31, 29};

    int N;
    cout << "Ingrese el número de selecciones aleatorias: ";
    cin >> N;

    srand((time(0)));

    for (int i = 0; i < N; i++) {
        int aleatorio = rand() % 10; 
        cout << "\nSelección " << (i + 1) << ": " << endl;
        cout << "Nombre: " << nombres[aleatorio] << endl;
        cout << "Apellido: " << apellidos[aleatorio] << endl;
        cout << "Edad: " << edades[aleatorio] << endl;
    }

    return 0;
}