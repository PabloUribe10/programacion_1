// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 01-12-2025 
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Estudiante {
    int carnet;
    char nombres[30];
    char apellidos[30];
    char materia[30];
    int paralelo;

    float nota1;
    float nota2;
    float nota3;

    float notaHabilitacion;
    char estado[20];
};

void menu();
void adicionarEstudiante();
void adicionarNotas();
void listarHabilitados();
void eliminarEstudiante();


int main() {
    menu();
    return 0;
}


void menu() {
    int opcion;

    do {
        system("cls");
        cout << "===== MENU NOTAS UCB =====\n";
        cout << "1. Adicionar Estudiante \n";
        cout << "2. Listado de Estudiantes Habilitados \n";
        cout << "3. Eliminar un Estudiante \n";
        cout << "4. Adicionar notas habilitacion \n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: 
                adicionarEstudiante(); 
                system("pause");
                break;
            case 2: 
                listarHabilitados(); 
                system("pause");
                break;
            case 3: 
                eliminarEstudiante(); 
                system("pause");
                break;
            case 4: 
                adicionarNotas(); 
                system("pause");
                break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n"; break;
        }

        if (opcion != 0) {
            cout << "\nPresione ENTER para continuar...";
            cin.get();
        }

    } while (opcion != 0);
}

void adicionarEstudiante() {
    system("cls");

    ofstream file("ESTUDIANTES.BIN", ios::binary | ios::app);
    if (!file.good()) {
        cout << "ERROR al abrir archivo.\n";
        return;
    }

    Estudiante e;
    cout << "Carnet Identidad: ";
    cin >> e.carnet;
    cin.ignore();

    cout << "Nombres: ";
    cin.getline(e.nombres, 30);

    cout << "Apellidos: ";
    cin.getline(e.apellidos, 30);

    cout << "Materia: ";
    cin.getline(e.materia, 30);

    cout << "Paralelo: ";
    cin >> e.paralelo;

    // notas iniciales
    e.nota1 = e.nota2 = e.nota3 = 0;
    e.notaHabilitacion = 0;
    strcpy(e.estado, "SIN NOTAS");

    file.write((char*)&e, sizeof(Estudiante));
    file.close();

    cout << "\nEstudiante agregado.\n";
}

void adicionarNotas() {
    system("cls");

    fstream file("ESTUDIANTES.BIN", ios::binary | ios::in | ios::out);

    if (!file.good()) {
        cout << "ERROR al abrir archivo.\n";
        return;
    }

    int carnetBuscado;
    cout << "Ingrese carnet del estudiante: ";
    cin >> carnetBuscado;

    Estudiante e;
    bool encontrado = false;

    while (file.read((char*)&e, sizeof(Estudiante))) {
        if (e.carnet == carnetBuscado) {
            encontrado = true;

            cout << "\nIngrese Nota 1: ";
            cin >> e.nota1;

            cout << "Ingrese Nota 2: ";
            cin >> e.nota2;

            cout << "Ingrese Nota 3: ";
            cin >> e.nota3;

            // calcular promedio
            e.notaHabilitacion = (e.nota1 + e.nota2 + e.nota3) / 3.0;

            // determinar estado
            if (e.nota1 >= 60 && e.nota2 >= 60 && e.nota3 >= 60)
                strcpy(e.estado, "HABILITADO");
            else
                strcpy(e.estado, "NO HABILITADO");

            file.seekp(-sizeof(Estudiante), ios::cur);
            file.write((char*)&e, sizeof(Estudiante));

            cout << "\nNotas registradas correctamente.\n";
            break;
        }
    }

    if (!encontrado)
        cout << "No se encontro estudiante.\n";

    file.close();
}

void listarHabilitados() {
    system("cls");

    ifstream file("ESTUDIANTES.BIN", ios::binary);

    if (!file.good()) {
        cout << "ERROR al abrir archivo.\n";
        return;
    }

    Estudiante e;

    cout << "CARNET  NOMBRES  APELLIDOS  MATERIA  PARALELO  NOTA  ESTADO\n";
    cout << "-------------------------------------------------------------------\n";

    float sumaNotas = 0;
    int contador = 0;

    while (file.read((char*)&e, sizeof(Estudiante))) {
        cout << e.carnet << "   ";
        cout << e.nombres << "   ";
        cout << e.apellidos << "   ";
        cout << e.materia << "   ";
        cout << e.paralelo << "   ";
        cout << e.notaHabilitacion << "   ";
        cout << e.estado << endl;

        sumaNotas += e.notaHabilitacion;
        contador++;
    }

    file.close();

    cout << "-------------------------------------------------------------------\n";

    if (contador > 0) {
        float promedio = sumaNotas / contador;
        cout << "PROMEDIO GENERAL DE NOTAS: " << promedio << endl;
    } else {
        cout << "No hay estudiantes registrados.\n";
    }
}

void eliminarEstudiante() {
    system("cls");

    ifstream file("ESTUDIANTES.BIN", ios::binary);
    ofstream temp("TEMP.BIN", ios::binary);

    int carnetBuscado;
    cout << "Ingrese carnet a eliminar: ";
    cin >> carnetBuscado;

    Estudiante e;
    bool encontrado = false;

    while (file.read((char*)&e, sizeof(Estudiante))) {
        if (e.carnet == carnetBuscado) {
            encontrado = true;
            continue; // NO copiarlo
        }
        temp.write((char*)&e, sizeof(Estudiante));
    }

    file.close();
    temp.close();

    remove("ESTUDIANTES.BIN");
    rename("TEMP.BIN", "ESTUDIANTES.BIN");

    if (encontrado)
        cout << "Estudiante eliminado.\n";
    else
        cout << "No existe estudiante con ese carnet.\n";
}