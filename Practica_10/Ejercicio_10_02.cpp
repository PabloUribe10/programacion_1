// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 12/11/2025 
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void MenuPalabras(string archivo);
void IngresarTexto(string archivo);
void ContarPalabrasArchivo(string archivo);

// ----------------------
int main()
{
    string archivo = "texto.txt";
    MenuPalabras(archivo);
    return 0;
}
// ----------------------

void MenuPalabras(string archivo)
{
    int opcion;

    do
    {
        system("cls");
        cout << "CONTADOR DE PALABRAS" << endl;
        cout << "====================" << endl;
        cout << "\t1. Ingresar texto al archivo" << endl;
        cout << "\t2. Contar palabras del archivo" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            IngresarTexto(archivo);
            break;

        case 2:
            ContarPalabrasArchivo(archivo);
            break;

        default:
            break;
        }

    } while (opcion != 0);
}

void IngresarTexto(string archivo)
{
    ofstream out;
    out.open(archivo);

    if (out.fail())
    {
        cout << "No se pudo crear el archivo." << endl;
        system("pause");
        return;
    }

    cin.ignore();
    string texto;

    cout << "Ingrese el texto: ";
    getline(cin, texto);

    out << texto << endl;

    out.close();
    cout << "\nTexto guardado correctamente.\n";
    system("pause");
}

void ContarPalabrasArchivo(string archivo)
{
    ifstream in;
    in.open(archivo);

    if (in.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        system("pause");
        return;
    }

    string linea;
    int contador = 0;

    // Leer archivo línea por línea
    while (getline(in, linea))
    {
        bool enPalabra = false;

        for (int i = 0; i < linea.length(); i++)
        {
            if (linea[i] != ' ' && linea[i] != '\t')
            {
                if (!enPalabra)
                {
                    contador++;
                    enPalabra = true;
                }
            }
            else
            {
                enPalabra = false;
            }
        }
    }

    in.close();

    cout << "\nEl archivo contiene " << contador << " palabras.\n";
    system("pause");
}