// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 12/11/2025 
// Número de ejercicio: 5

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void MenuProductos(string archivo);
void IngresarProductos(string archivo);
void MostrarProductos(string archivo);
void ActualizarProducto(string archivo);

int main()
{
    string archivo = "productos.txt";
    MenuProductos(archivo);
    return 0;
}

void MenuProductos(string archivo)
{
    int opcion;

    do
    {
        system("cls");
        cout << "MENU DE PRODUCTOS" << endl;
        cout << "=================" << endl;
        cout << "\t1. Ingresar productos" << endl;
        cout << "\t2. Mostrar productos" << endl;
        cout << "\t3. Actualizar precio de un producto" << endl;
        cout << "\t0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            IngresarProductos(archivo);
            break;
        case 2:
            MostrarProductos(archivo);
            break;
        case 3:
            ActualizarProducto(archivo);
            break;
        default:
            break;
        }

    } while (opcion != 0);
}

void IngresarProductos(string archivo)
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
    cout << "Cuantos productos desea ingresar? ";
    cin >> cantidad;

    string nombre;
    float precio;

    cin.ignore();

    for (int i = 0; i < cantidad; i++)
    {
        cout << "\nProducto " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Precio: ";
        cin >> precio;
        cin.ignore();

        out << nombre << " " << precio << endl;
    }

    out.close();
    cout << "\nProductos registrados correctamente.\n";
    system("pause");
}

void MostrarProductos(string archivo)
{
    ifstream in;
    in.open(archivo);

    if (in.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        system("pause");
        return;
    }

    string nombre;
    float precio;

    cout << "\n--- LISTA DE PRODUCTOS ---\n";

    while (in >> nombre >> precio)
    {
        cout << "Producto: " << nombre << "  | Precio: " << precio << endl;
    }

    in.close();
    system("pause");
}

void ActualizarProducto(string archivo)
{
    ifstream in;
    in.open(archivo);

    if (in.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        system("pause");
        return;
    }

    cin.ignore();
    string buscado;
    float nuevoPrecio;

    cout << "Ingrese el producto a actualizar: ";
    getline(cin, buscado);

    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;

    ofstream temp;
    temp.open("temp.txt");

    string nombre;
    float precio;
    bool encontrado = false;

    while (in >> nombre >> precio)
    {
        if (nombre == buscado)
        {
            temp << nombre << " " << nuevoPrecio << endl;
            encontrado = true;
        }
        else
        {
            temp << nombre << " " << precio << endl;
        }
    }

    in.close();
    temp.close();

    remove(archivo.c_str());
    rename("temp.txt", archivo.c_str());

    if (encontrado)
        cout << "\nProducto actualizado correctamente.\n";
    else
        cout << "\nEl producto NO existe en el archivo.\n";

    system("pause");
}