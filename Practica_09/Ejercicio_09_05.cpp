// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 5/11/2024 
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct Pelicula {
    char titulo[100];
    char director[100];
    int duracion; 
    int anio_estreno;
    char genero[50];
};

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;
    cout << "Cantidad de películas a registrar: ";
    cin >> N;

    Pelicula* peliculas = new Pelicula[N];

    for (int i = 0; i < N; i++) {
        cin.ignore();
        cout << "\nIngrese los datos de la película " << (i + 1) << ":\n";

        cin.ignore();
        cout << "Título: ";
        cin.getline(peliculas[i].titulo, 100);

        cout << "Director: ";
        cin.getline(peliculas[i].director, 100);

        peliculas[i].duracion = rand() % (240 - 60 + 1) + 60; // Duración entre 60 y 240 minutos
        cout << "Duración (minutos): " << peliculas[i].duracion << endl;

        peliculas[i].anio_estreno = rand() % (2024 - 1950 + 1) + 1950; // Año entre 1950 y 2024
        cout << "Año de estreno: " << peliculas[i].anio_estreno << endl;

        cout << "Género: ";
        cin.getline(peliculas[i].genero, 50);
    }

    char genero_buscar[50];
    cout << "\nIngrese el género de películas a buscar: ";
    cin.ignore();
    cin.getline(genero_buscar, 50);

    cout << "\nPelículas del género '" << genero_buscar << "':\n";
    for (int i = 0; i < N; i++) {
        if (strcmp(peliculas[i].genero, genero_buscar) == 0) {
            cout << "- " << peliculas[i].titulo << " (" << peliculas[i].anio_estreno << "), Director: " << peliculas[i].director << ", Duración: " << peliculas[i].duracion << " min\n";
        }
    }

    char director_buscar[100];
    cout << "\nIngrese el director de películas a buscar: ";
    cin.getline(director_buscar, 100);

    cout << "\nPelículas dirigidas por '" << director_buscar << "':\n";
    for (int i = 0; i < N ; i++) {
        if (strcmp(peliculas[i].director, director_buscar) == 0) {
            cout << "- " << peliculas[i].titulo << " (" << peliculas[i].anio_estreno << "), Género: " << peliculas[i].genero << ", Duración: " << peliculas[i].duracion << " min\n";
        }
    }
    delete[] peliculas;
    return 0;
}