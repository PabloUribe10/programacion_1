// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 12/11/2025 
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void MenuOpciones(string archivo);
void CrearArchivoTexto(string archivo);
void BuscarTextoEnArchivo(string archivo);

int main()
{
    system("cls");
    system("chcp 65001");
    string archivo = "encontrar.txt";
    MenuOpciones(archivo);
    return 0;
}

void MenuOpciones(string archivo)
{
    int opcion = 0;

    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Ingresar texto al archivo" << endl;
        cout << "\t2. Buscar palabra o frase en archivo" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            CrearArchivoTexto(archivo);
            break;

        case 2:
            BuscarTextoEnArchivo(archivo);
            break;

        default:
            break;
        }

    } while (opcion != 0);
}

void CrearArchivoTexto(string archivo)
{
    ofstream archivoOut;
    archivoOut.open(archivo);

    if (archivoOut.fail())
    {
        cout << "No se pudo crear el archivo." << endl;
        system("pause");
        return;
    }

    cin.ignore();
    string texto;

    cout << "Ingrese el texto que desea guardar en el archivo:" << endl;
    getline(cin, texto);

    archivoOut << texto << endl;

    cout << "\nTexto guardado correctamente.\n";

    archivoOut.close();
    system("pause");
}

void BuscarTextoEnArchivo(string archivo)
{
    ifstream archivoIn;
    archivoIn.open(archivo);

    if (archivoIn.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        system("pause");
        return;
    }

    cin.ignore();
    string busqueda;

    cout << "Ingrese la palabra que desea buscar: ";
    getline(cin, busqueda);

    string linea;
    int contador = 0;

    while (getline(archivoIn, linea))
    {
        int pos = 0;

        while ((pos = linea.find(busqueda, pos)) != string::npos)
        {
            contador++;
            pos += busqueda.length();
        }
    }

    archivoIn.close();

    cout << "La palabra " << busqueda << "  aparece " << contador << " veces en el archivo.";

    system("pause");
}