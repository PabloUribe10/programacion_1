// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 3/11/2024 
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Atleta {
    char nombre[100];
    char pais[100];
    int edad;
    int mejor_tiempo; 
};

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;

    cout << "Cantidad de atletas a registrar: ";
    cin >> N;

    Atleta* atletas = new Atleta[N];

    for (int i = 0; i < N; i++) {
        cout << "\nIngrese los datos del atleta " << (i + 1) << ":\n";

        cout << "Nombre: ";
        cin >> atletas[i].nombre;

        cout << "País: ";
        cin >> atletas[i].pais;

        cout << "Edad: ";
        atletas[i].edad= rand() % (30 - 18 + 1) + 18;
        cout << atletas[i].edad << " años\n";

        cout << "Mejor tiempo (en segundos): ";
        atletas[i].mejor_tiempo = rand() % (150 - 100 + 1) + 100;
        cout <<  atletas[i].mejor_tiempo << " s\n";
    }

    int indice_mejor_atleta = 0;
    for (int i = 1; i < N; i++) {
        if (atletas[i].mejor_tiempo < atletas[indice_mejor_atleta].mejor_tiempo) {
            indice_mejor_atleta = i;
        }
    }

    cout << "\nEl atleta con el mejor tiempo es:\n";
    cout << "Nombre: " << atletas[indice_mejor_atleta].nombre << endl;
    cout << "País: " << atletas[indice_mejor_atleta].pais << endl;

    delete[] atletas;

    return 0;
}