// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 12/11/2025 
// Número de ejercicio: 7

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void MenuCalificaciones(string archivo);
void IngresarCalificaciones(string archivo);
void GenerarPromedios(string archivo);

int main()
{
    string archivo = "calificaciones.txt";
    MenuCalificaciones(archivo);
    return 0;
}

void MenuCalificaciones(string archivo)
{
    int opcion;

    do
    {
        system("cls");
        cout << "MENU DE CALIFICACIONES" << endl;
        cout << "======================" << endl;
        cout << "\t1. Ingresar estudiantes y calificaciones" << endl;
        cout << "\t2. Calcular promedios" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            IngresarCalificaciones(archivo);
            break;
        case 2:
            GenerarPromedios(archivo);
            break;
        default:
            break;
        }

    } while (opcion != 0);
}

void IngresarCalificaciones(string archivo)
{
    ofstream out;
    out.open(archivo);

    if (out.fail())
    {
        cout << "No se pudo crear el archivo." << endl;
        system("pause");
        return;
    }

    int cantidad;
    cout << "Cuantos estudiantes desea ingresar? ";
    cin >> cantidad;

    cin.ignore();
    string nombre;
    float nota;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "\nEstudiante " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Ingrese 4 calificaciones separadas (ej: 7.5 8.0 9.0 8.5): ";
        
        float n1, n2, n3, n4;
        cin >> n1 >> n2 >> n3 >> n4;
        cin.ignore();

        out << nombre << " " << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    }

    out.close();
    cout << "\nCalificaciones registradas correctamente.\n";
    system("pause");
}

void GenerarPromedios(string archivo)
{
    ifstream in;
    in.open(archivo);

    if (in.fail())
    {
        cout << "No se pudo abrir el archivo de calificaciones." << endl;
        system("pause");
        return;
    }

    ofstream out;
    out.open("promedios.txt");

    string nombre;
    float n1, n2, n3, n4;

    cout << "\n--- PROMEDIOS GENERADOS ---\n";

    while (in >> nombre >> n1 >> n2 >> n3 >> n4)
    {
        float promedio = (n1 + n2 + n3 + n4) / 4.0;

        cout << nombre << " = " << promedio << endl;
        out << nombre << " " << promedio << endl;
    }

    in.close();
    out.close();

    cout << "\nArchivo 'promedios.txt' generado correctamente.\n";
    system("pause");
}