// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 12/11/2025 
// Número de ejercicio: 1

#include <iostream>
#include <fstream>

using namespace std;

void MenuOpciones(string nombreArchivo);
void CrearArchivoTexto(string nombreArchivo);
void LeerArchivoTexto(string nombreArchivo);
void ModificarArchivoTexto(string nombreArchivo);

int main()
{
    system("cls");
    system("chcp 65001");
    string nombreArchivo = "ArchivoTexto.txt";
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
        cout << "1. Ingresar Nombre" << endl;
        cout << "2. Mostrar Nombres" << endl;
        cout << "3. Anadir Nombre" << endl;
        cout << "0. Salir" << endl;
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
    string linea = "";
    archivo.open(nombreArchivo);
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo." << endl;
    }
    else
    {
        cin.ignore();
        cout << "Ingrese el nombre: ";
        getline(cin, linea);
        archivo << linea << endl;
        archivo.close();
    }
}

void LeerArchivoTexto(string nombreArchivo)
{
    ifstream archivo;
    string linea = "";
    archivo.open(nombreArchivo);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        cout << "Contenido del archivo:" << endl;
        while (getline(archivo, linea))
        {
            cout << linea << endl;
        }
        archivo.close();
    }
    system("pause");
}

void ModificarArchivoTexto(string nombreArchivo)
{
    ofstream archivo;
    string linea = "";
    archivo.open(nombreArchivo, ios::app);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        cin.ignore(); // Limpiar el buffer de entrada
        cout << "Ingrese texto para agregar al archivo: ";
        getline(cin, linea);
        archivo << linea << endl;
        archivo.close();
    }
}