// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 01-12-2025 
// Número de ejercicio: 1 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Estudiante
{
    int ci;
    char nombres[30];
    char apellidos[30];
};

struct Nota
{
    int ci;
    char materia[30];
    int nota;
};

void MenuOpciones(string archivoEstudiantes);
void CrearEstudiante(string archivoEstudiantes);
void ApuntarNotaMateria();
void ListadoEstudiantesImpresora(string archivoEstudiantes);

int main()
{
    string archivoEstudiantes = "Estudiantes.bin";
    MenuOpciones(archivoEstudiantes);
    return 0;
}

void MenuOpciones(string archivoEstudiantes){
    int opcion = 0;

    do {
        cout << "Menu de Opciones";
        cout << "\n=================\n";
        cout << "1. ABM Estudiantes " << endl;
        cout << "2. ABM Notas y Materias" << endl;
        cout << "3. Reporte de estudiantes y notas (Impresora)" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                CrearEstudiante(archivoEstudiantes);
                break;
            case 2:
                ApuntarNotaMateria();
                break;
            case 3:
                ListadoEstudiantesImpresora(archivoEstudiantes);
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void CrearEstudiante(string archivoEstudiantes)
{
    Estudiante est;
    ofstream archivo(archivoEstudiantes, ios::binary | ios::app);

    if (!archivo.good()){
        cout << "No se pudo abrir el archivo.\n";
        return;
    }

    cout << "Ingrese CI: ";
    cin >> est.ci;

    cout << "Ingrese Nombres: ";
    cin.ignore();
    cin.getline(est.nombres, 30);

    cout << "Ingrese Apellidos: ";
    cin.getline(est.apellidos, 30);

    // ESCRIBIR EN BINARIO (antes NO lo hacías!)
    archivo.write((char*)&est, sizeof(Estudiante));

    cout << "Estudiante registrado exitosamente.";
    archivo.close();
}

void ApuntarNotaMateria(){
    Nota nota;
    ofstream archivo("Notas.bin", ios::binary | ios::app);

    if (!archivo.good()){
        cout << "No se pudo abrir Notas.bin\n";
        return;
    }

    cout << "Ingrese CI del estudiante: ";
    cin >> nota.ci;

    cout << "Ingrese Materia: ";
    cin.ignore();
    cin.getline(nota.materia, 30);

    cout << "Ingrese Nota: ";
    cin >> nota.nota;

    // ESCRITURA BINARIA — ANTES NO GUARDABAS NADA
    archivo.write((char*)&nota, sizeof(Nota));

    cout << "Nota registrada exitosamente.";
    archivo.close();
}

void ListadoEstudiantesImpresora(string archivoEstudiantes){
    ifstream archEst(archivoEstudiantes, ios::binary);
    ifstream archNotas("Notas.bin", ios::binary);

    ofstream reporte("Reporte.txt", ios::app); 

    if (!archEst.good()){
        cout << "No se pudo abrir Estudiantes.bin\n";
        return;
    }

    if (!archNotas.good()){
        cout << "No se pudo abrir Notas.bin\n";
        return;
    }

    Estudiante est;
    Nota nota;

    reporte << "=======  REPORTE GENERAL  =======\n\n";

    while (archEst.read((char*)&est, sizeof(Estudiante))) {

        reporte << "CI: " << est.ci << "\n";
        reporte << "Nombre: " << est.nombres << " " << est.apellidos << "\n";
        reporte << "Notas:\n";

        bool tieneNotas = false;

        while (archNotas.read((char*)&nota, sizeof(Nota))) {
            if (nota.ci == est.ci) {
                tieneNotas = true;
                reporte << "   - " << nota.materia
                        << " : " << nota.nota << "\n";
            }
        }

        if (!tieneNotas)
            reporte << "   (Sin notas registradas)\n";

        reporte << "--------------------------------------\n\n";
    }

    reporte.close();
    archEst.close();
    archNotas.close();

    cout << "Reporte generado en Reporte.txt\n\n";
}
