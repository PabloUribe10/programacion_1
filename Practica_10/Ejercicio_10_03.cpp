// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 12/11/2025 
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void MenuOpciones(string nombreArchivo);
void CrearArchivoTexto(string nombreArchivo);
void LeerArchivoTexto(string nombreArchivo);
void ModificarArchivoTexto(string nombreArchivo);

int main()
{
    srand(time(NULL));
    string nombreArchivo = "estudiantes.txt";
    MenuOpciones(nombreArchivo);
    return 0;
}

void MenuOpciones(string nombreArchivo)
{
    int opcion = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Registrar estudiantes" << endl;
        cout << "\t2. Mostrar estudiantes" << endl;
        cout << "\t3. Agregar mas estudiantes" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            CrearArchivoTexto(nombreArchivo);
            break;
        case 2:
            LeerArchivoTexto(nombreArchivo);
            break;
        case 3:
            ModificarArchivoTexto(nombreArchivo);
            break;
        default:
            break;
        }

    } while (opcion != 0);
}

void CrearArchivoTexto(string nombreArchivo)
{
    ofstream archivo;
    archivo.open(nombreArchivo);

    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo." << endl;
        system("pause");
        return;
    }

    int cantidad;
    cout << "Cuantos estudiantes desea registrar? ";
    cin >> cantidad;
    cin.ignore();

    string nombre;
    int edad;
    float promedio;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "\n--- Estudiante " << i + 1 << " ---\n";

        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Edad: ";
        cin >> edad;

        promedio = (rand() % 101) / 10.0; // 0.0 a 10.0

        cin.ignore();

        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Promedio: " << promedio << endl;
        archivo << "----------------------------" << endl;
    }

    archivo.close();
    cout << "\nRegistros creados correctamente.\n";
    system("pause");
}

void LeerArchivoTexto(string nombreArchivo)
{
    ifstream archivo;
    archivo.open(nombreArchivo);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        system("pause");
        return;
    }

    string linea;

    cout << "\n========= LISTA DE ESTUDIANTES =========\n";

    while (getline(archivo, linea))
    {
        cout << linea << endl;
    }

    archivo.close();
    cout << endl;
    system("pause");
}

void ModificarArchivoTexto(string nombreArchivo)
{
    ofstream archivo;
    archivo.open(nombreArchivo, ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        system("pause");
        return;
    }

    string nombre;
    int edad;
    float promedio;

    cin.ignore();

    cout << "\nNombre: ";
    getline(cin, nombre);

    cout << "Edad: ";
    cin >> edad;

    promedio = (rand() % 101) / 10.0;

    archivo << "Nombre: " << nombre << endl;
    archivo << "Edad: " << edad << endl;
    archivo << "Promedio: " << promedio << endl;
    archivo << "----------------------------" << endl;

    archivo.close();

    cout << "\nEstudiante agregado correctamente.\n";
    system("pause");
}