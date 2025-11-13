// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 3/11/2024 
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct Estudiante {
    int cedula;
    char nombre[100];
    char apellido[100];
    int edad;
    char profesion[100];
    char lugar_nacimiento[100];
    char direccion[200];
    int telefono;
};

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;
    cout << "Cantidad de estudiantes a registrar: ";
    cin >> N;

    Estudiante* estudiantes = new Estudiante[N];

    for (int i = 0; i < N; i++) {
        cout << "\nIngrese los datos del estudiante " << (i + 1) << ":\n";

        estudiantes[i].cedula = rand() % (99999999 - 1000000 + 1) + 1000000;
        cout << "Cédula: " << estudiantes[i].cedula << endl;

        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;

        cout << "Apellido: ";
        cin >> estudiantes[i].apellido;

        estudiantes[i].edad = rand() % (25 - 17 + 1) + 17;
        cout << "Edad: " << estudiantes[i].edad << " años\n";

        cout << "Profesión: ";
        cin >> estudiantes[i].profesion;

        cin.ignore();
        int aleatorio = rand() % 9 + 1;
        switch (aleatorio) {
            case 1: 
                strcpy(estudiantes[i].lugar_nacimiento, "La Paz"); 
                break;
            case 2: 
                strcpy(estudiantes[i].lugar_nacimiento, "Cochabamba"); 
                break;
            case 3: 
                strcpy(estudiantes[i].lugar_nacimiento, "Santa Cruz"); 
                break;
            case 4: 
                strcpy(estudiantes[i].lugar_nacimiento, "Oruro"); 
                break;
            case 5: 
                strcpy(estudiantes[i].lugar_nacimiento, "Potosí"); 
                break;
            case 6: 
                strcpy(estudiantes[i].lugar_nacimiento, "Tarija"); 
                break;
            case 7: 
                strcpy(estudiantes[i].lugar_nacimiento, "Sucre"); 
                break;
            case 8: 
                strcpy(estudiantes[i].lugar_nacimiento, "Beni"); 
                break;
            case 9: 
                strcpy(estudiantes[i].lugar_nacimiento, "Pando"); 
                break;
        } 

        cout << "Lugar de nacimiento: " << estudiantes[i].lugar_nacimiento << endl;

        cout << "Dirección: ";
        cin.getline(estudiantes[i].direccion, 200);

        estudiantes[i].telefono = rand() % (79999999 - 60000000 + 1) + 60000000;
        cout << "Teléfono: " << estudiantes[i].telefono << endl;
    }

    cout << "\n\n===== DATOS DE LOS ESTUDIANTES REGISTRADOS =====\n";
    for (int i = 0; i < N; i++) {
        cout << "\nEstudiante " << (i + 1) << ":\n";
        cout << "Cédula: " << estudiantes[i].cedula << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Apellido: " << estudiantes[i].apellido << endl;
        cout << "Edad: " << estudiantes[i].edad << " años" << endl;
        cout << "Profesión: " << estudiantes[i].profesion << endl;
        cout << "Lugar de nacimiento: " << estudiantes[i].lugar_nacimiento << endl;
        cout << "Dirección: " << estudiantes[i].direccion << endl;
        cout << "Teléfono: " << estudiantes[i].telefono << endl;
    }

    delete[] estudiantes;
    return 0;
}