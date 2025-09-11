// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

int estatura_media(int numero_estudiantes);
int edad(int numero_estudiantes);
int alumnos_mayores(int numero_estudiantes);
int alumnos_altos(int numero_estudiantes);

int main() {
    system("cls");
    system("chcp 65001");
    srand((time(0))); 
    int numero_estudiantes;
    cout << "Ingrese el número de estudiantes: ";
    cin >> numero_estudiantes;

    int media_estatura = estatura_media(numero_estudiantes);
    int promedio_edad = edad(numero_estudiantes);
    int mayores_edad = alumnos_mayores(numero_estudiantes);
    int altos = alumnos_altos(numero_estudiantes);

    cout << "La estatura media es: " << media_estatura << " cm" << endl;
    cout << "La edad promedio es: " << promedio_edad << " años" << endl;
    cout << "Número de alumnos mayores de edad: " << mayores_edad << endl;
    cout << "Número de alumnos con estatura mayor a 175 cm: " << altos << endl; 

    return 0;
}

int estatura_media(int numero_estudiantes) {
    int suma_estatura = 0;
    for (int i = 0; i < numero_estudiantes; i++) {
        int estatura = rand() % 51 + 150; 
        suma_estatura += estatura;
    }
    return suma_estatura / numero_estudiantes; // promedio de estatura
}

int edad(int numero_estudiantes) {
    int suma_edad = 0;
    for (int i = 0; i < numero_estudiantes; i++) {
        int edad = rand() % 10 + 15; 
        suma_edad += edad;
    }
    return suma_edad / numero_estudiantes; // promedio de edad
}

int alumnos_mayores(int numero_estudiantes) {
    int contador = 0;
    for (int i = 0; i < numero_estudiantes; i++) {
        int edad = rand() % 10 + 15;
        if (edad >= 18) {
            contador=contador + 1; // incrementa el contador si el estudiante es mayor de edad
        }
    }
    return contador;
}

int alumnos_altos(int numero_estudiantes) {
    int contador = 0;
    for (int i = 0; i < numero_estudiantes; i++) {
        int estatura = rand() % 51 + 150;
        if (estatura > 175) {
            contador=contador + 1; // incrementa el contador si el estudiante es alto
        }
    }
    return contador;
}
