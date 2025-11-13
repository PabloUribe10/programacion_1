// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 5/11/2024 
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct Alumno {
    char nombre[100];
    float T1, T2, T3, T4, EF;
    float NF;
};

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;
    cout << "Cantidad de alumnos a registrar: ";
    cin >> N;

    Alumno* alumnos = new Alumno[N];

    for (int i = 0; i < N; i++) {
        cin.ignore();
        cout << "\nIngrese los datos del alumno " << (i + 1) << ":\n";

        cout << "Nombre: ";
        cin.getline(alumnos[i].nombre, 100);

        alumnos[i].T1 = rand() % (100 + 1 - 1) + 1; 
        cout << "Nota T1: " << alumnos[i].T1 << endl;

        alumnos[i].T2 = rand() % (100 + 1 - 1) + 1;
        cout << "Nota T2: " << alumnos[i].T2 << endl;

        alumnos[i].T3 = rand() % (100 + 1 - 1) + 1;
        cout << "Nota T3: " << alumnos[i].T3 << endl;

        alumnos[i].T4 = rand() % (100 + 1 - 1) + 1;
        cout << "Nota T4: " << alumnos[i].T4 << endl;

        alumnos[i].EF = rand() % (100 + 1 - 1) + 1;
        cout << "Nota EF: " << alumnos[i].EF << endl;

        float NP = (alumnos[i].T1 + alumnos[i].T2 + alumnos[i].T3 + alumnos[i].T4) / 4.0f;
        alumnos[i].NF = 0.7f * NP + 0.3f * alumnos[i].EF;
    }

    float sumaNF = 0.0f;
    float minNF = alumnos[0].NF;
    float maxNF = alumnos[0].NF;

    cout << "\nNotas finales de los alumnos:\n";
    for (int i = 0; i < N; i++) {
        cout << "Alumno: " << alumnos[i].nombre << ", Nota Final: " << alumnos[i].NF << endl;
        sumaNF += alumnos[i].NF;
        if (alumnos[i].NF < minNF) minNF = alumnos[i].NF;
        if (alumnos[i].NF > maxNF) maxNF = alumnos[i].NF;
    }

    float promedioNF = sumaNF / N;
    cout << "\nPromedio de Notas Finales: " << promedioNF << endl;
    cout << "Nota Final Mínima: " << minNF << endl;
    cout << "Nota Final Máxima: " << maxNF << endl;

    delete[] alumnos;
    return 0;
}