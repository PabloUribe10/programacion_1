// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 5/11/2024 
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct Atleta {
    char nombre[100];
    char departamento[100];
    char deporte[50];
    int medallas;
};

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    const char* deportes[] = {"Tiro con arco", "Atletismo", "Boxeo", "Ciclismo", "Natación", "Esgrima"};
    const int numDeportes = sizeof(deportes) / sizeof(deportes[0]);

    int N = 0;
    cout << "Cantidad de atletas a registrar: ";
    cin >> N;

    Atleta* atletas = new Atleta[N];

    for (int i = 0; i < N; i++) {
        cin.ignore();
        cout << "\nIngrese los datos del atleta " << (i + 1) << ":\n";

        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 100);

        cout << "Departamento: ";
        cin.getline(atletas[i].departamento, 100);

        cout << "Deporte (elige un número):\n";
        for (int j = 0; j < numDeportes; j++) {
            cout << j + 1 << ". " << deportes[j] << endl;
        }
        int deporteIndex;
        cin >> deporteIndex;
        cin.ignore();
        strncpy(atletas[i].deporte, deportes[deporteIndex - 1], 50);

        atletas[i].medallas = rand() % 6; // Medallas entre 0 y 5
        cout << "Medallas ganadas: " << atletas[i].medallas << endl;
    }

    // Mostrar medallero final por departamento
    struct DepartamentoMedallero {
        char nombre[100];
        int totalMedallas;
    };

    DepartamentoMedallero* medalleros = new DepartamentoMedallero[N];
    int numDepartamentos = 0;

    for (int i = 0; i < N; i++) {
        bool encontrado = false;
        for (int j = 0; j < numDepartamentos; j++) {
            if (strcmp(medalleros[j].nombre, atletas[i].departamento) == 0) {
                medalleros[j].totalMedallas += atletas[i].medallas;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            strncpy(medalleros[numDepartamentos].nombre, atletas[i].departamento, 100);
            medalleros[numDepartamentos].totalMedallas = atletas[i].medallas;
            numDepartamentos++;
        }
    }

    cout << "\nMedallero final por departamento:\n";
    for (int i = 0; i < numDepartamentos; i++) {
        cout << "Departamento: " << medalleros[i].nombre << ", Total Medallas: " << medalleros[i].totalMedallas << endl;
    }

    delete[] atletas;
    delete[] medalleros;
    return 0;
}
