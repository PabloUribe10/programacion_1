// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 3/11/2024 
// Número de ejercicio: 1

#include <iostream>

using namespace std;

struct Libro {
    char titulo[100];
    char autor[100];
    int anio_publicacion;
    bool disponible;
};

int main() {
    system("cls");
    system("chcp 65001");

    Libro libro;
    
    cout << "Ingrese el título del libro: ";
    cin >> libro.titulo;

    cout << "Ingrese el autor del libro: ";
    cin >> libro.autor;

    cin.ignore();

    cout << "Ingrese el año de publicación del libro: ";
    cin >> libro.anio_publicacion;

    char disponibilidad;
    cout << "¿El libro está disponible? (s/n): ";
    cin >> disponibilidad;
    libro.disponible = (disponibilidad == 's' || disponibilidad == 'S');

    cout << "\nDatos del libro registrado:" << endl;
    cout << "Título: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Año de publicación: " << libro.anio_publicacion << endl;
    cout << "Disponibilidad: " << (libro.disponible ? "Disponible" : "No disponible") << endl;

    return 0;
}