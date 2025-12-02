// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 12/11/2025 
// Número de ejercicio: 6

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void MenuTemperaturas(string archivo);
void IngresarTemperaturas(string archivo);
void FiltrarTemperaturas(string archivo);

int main()
{
    string archivo = "temperaturas.txt";
    MenuTemperaturas(archivo);
    return 0;
}

void MenuTemperaturas(string archivo)
{
    int opcion;

    do
    {
        system("cls");
        cout << "MENU DE TEMPERATURAS" << endl;
        cout << "====================" << endl;
        cout << "\t1. Ingresar ciudades y temperaturas" << endl;
        cout << "\t2. Filtrar altas temperaturas" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            IngresarTemperaturas(archivo);
            break;
        case 2:
            FiltrarTemperaturas(archivo);
            break;
        default:
            break;
        }

    } while (opcion != 0);
}

void IngresarTemperaturas(string archivo)
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
    cout << "Cuantas ciudades desea ingresar? ";
    cin >> cantidad;

    cin.ignore();
    string ciudad;
    float temperatura;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "\nCiudad " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, ciudad);

        cout << "Temperatura: ";
        cin >> temperatura;
        cin.ignore();

        out << ciudad << " " << temperatura << endl;
    }

    out.close();
    cout << "\nTemperaturas registradas correctamente.\n";
    system("pause");
}

void FiltrarTemperaturas(string archivo)
{
    ifstream in;
    in.open(archivo);

    if (in.fail())
    {
        cout << "No se pudo abrir el archivo de temperaturas." << endl;
        system("pause");
        return;
    }

    float limite;
    cout << "Ingrese la temperatura limite N: ";
    cin >> limite;

    ofstream out;
    out.open("altas_temperaturas.txt");

    string ciudad;
    float temperatura;

    cout << "\nCiudades con temperatura mayor a " << limite << "°C:\n";

    bool encontrado = false;

    while (in >> ciudad >> temperatura)
    {
        if (temperatura > limite)
        {
            cout << ciudad << "  " << temperatura << endl;
            out << ciudad << " " << temperatura << endl;
            encontrado = true;
        }
    }

    if (!encontrado)
        cout << "No hay ciudades con temperaturas mayores al limite.\n";

    in.close();
    out.close();

    cout << "\nArchivo 'altas_temperaturas.txt' generado correctamente.\n";
    system("pause");
}