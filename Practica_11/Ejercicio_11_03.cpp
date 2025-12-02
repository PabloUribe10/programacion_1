// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 01-12-2025 
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

struct Producto
{
    int codigo;
    char nombre[50];
    int tipo;
    char tamano[10];
    float precio;
};

void MenuOpciones();
void Crearpizza();
void listarPizzas();
void modificarPizzas();
void eliminarPizza();
void adicionarVentaPizzas();

int main()
{
    string archivopizzas = "Productos.bin";
    MenuOpciones();
    return 0;
}

void MenuOpciones(){
    int opcion = 0;

    do {
        system("cls"); // ← limpia pantalla (en windows)
        cout << "\nMenu de Opciones";
        cout << "\n=================\n";
        cout << "1. Adicionar Pizza\n";
        cout << "2. Listar Pizzas \n";
        cout << "3. Modificar Pizzas depende el producto\n";
        cout << "4. Eliminar una Pizza\n";
        cout << "5. Adicionar Venta de Pizzas (Impresora)\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        system("cls");

        switch (opcion) {
            case 1: 
                Crearpizza(); 
                system("pause");
                break;
            case 2: 
                listarPizzas(); 
                system("pause");
                break;
            case 3: 
                modificarPizzas(); 
                system("pause");
                break;
            case 4: 
                eliminarPizza(); 
                system("pause");
                break;
            case 5: 
                adicionarVentaPizzas();
                system("pause");
                break;
            case 0: 
                cout << "Saliendo...\n"; 
                break;
            default: cout << "Opcion invalida.\n"; break;
        }

        if (opcion != 0) {
            cout << "\nPresione ENTER para volver al menú...";
            cin.ignore();
            cin.get();
        }

    } while (opcion != 0);
}

void Crearpizza()
{
    system("cls");
    system("chcp 65001");
    ofstream archivo("Productos.bin", ios::binary | ios::app);

    if (!archivo.good()){
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    Producto prod;

    cout << "Ingrese el Codigo de la Pizza: ";
    cin >> prod.codigo;

    cout << "Ingrese el Nombre de la Pizza: ";
    cin.ignore();
    cin.getline(prod.nombre, 50);

    cout << "\nSeleccione el Tipo de Pizza:\n";
    cout << "1. Tradicional\n";
    cout << "2. Especial (+10%)\n";
    cout << "Opción: ";
    cin >> prod.tipo;

    if (prod.tipo != 1 && prod.tipo != 2) {
        cout << "\nTipo inválido (solo 1 o 2).\n";
        return;
    }

    cin.ignore();

    cout << "Ingrese el Tamaño de la Pizza : ";
    cin.getline(prod.tamano, 10);

    cout << "Ingrese el Precio de la Pizza: ";
    cin >> prod.precio;

    if (prod.tipo == 2) {
        prod.precio *= 1.10;
    }

    archivo.write((char*)&prod, sizeof(Producto));

    archivo.close();

    cout << "\nPizza agregada correctamente.\n";
}

void listarPizzas(){
    system("cls");
    system("chcp 65001");
    ifstream archivo("Productos.bin", ios::binary);

    if (!archivo.good()) {
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    Producto prod;

    cout << "\n******** LISTA DE PIZZAS ********\n";
    cout << "CODIGO   NOMBRE                   TIPO          TAMANO     PRECIO\n";
    cout << "---------------------------------------------------------------------\n";

    while (archivo.read((char*)&prod, sizeof(Producto))) {
        cout << prod.codigo << "        ";
        cout << prod.nombre << "        ";
        cout << prod.tipo << "\t        ";
        cout << prod.tamano << "\t        ";
        cout << prod.precio << endl;
    }

    archivo.close();
    cout << "---------------------------------------------------------------------\n\n";
}

void modificarPizzas(){

    system("cls");
    system("chcp 65001");
    fstream archivo("Productos.bin", ios::binary | ios::in | ios::out);

    if (!archivo.good()) {
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    int codigoBuscado;
    cout << "Ingrese el codigo de la pizza a modificar: ";
    cin >> codigoBuscado;

    Producto prod;
    bool encontrado = false;

    while (archivo.read((char*)&prod, sizeof(Producto))) {
        if (prod.codigo == codigoBuscado) {

            cout << "\nPizza encontrada. Valores actuales:\n";
            cout << "Nombre: " << prod.nombre << endl;
            cout << "Tipo: " << prod.tipo << endl;
            cout << "Tamaño: " << prod.tamano << endl;
            cout << "Precio: " << prod.precio << endl;

            cout << "Ingrese nuevo precio: ";
            cin >> prod.precio;

            archivo.seekp(-static_cast<int>(sizeof(Producto)), ios::cur);
            archivo.write((char*)&prod, sizeof(Producto));

            cout << "\nPizza modificada correctamente.\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "\nNo existe una pizza con ese codigo.\n";

    archivo.close();
}

void eliminarPizza(){
    system("cls");
    system("chcp 65001");
    ifstream archivo("Productos.bin", ios::binary);

    if (!archivo.good()) {
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    int codigoBuscado;
    cout << "Ingrese el codigo de la pizza a eliminar: ";
    cin >> codigoBuscado;

    ofstream temp("temp.bin", ios::binary);
    Producto prod;
    bool encontrado = false;

    while (archivo.read((char*)&prod, sizeof(Producto))) {
        if (prod.codigo == codigoBuscado) {
            cout << "\nPizza con codigo " << codigoBuscado << " eliminada.\n";
            encontrado = true;
            continue; // No escribir esta pizza en el archivo temporal
        }
        temp.write((char*)&prod, sizeof(Producto));
    }

    archivo.close();
    temp.close();

    remove("Productos.bin");
    rename("temp.bin", "Productos.bin");

    if (!encontrado)
        cout << "\nNo existe una pizza con ese codigo.\n";
}

void adicionarVentaPizzas() {
    system("cls");
    system("chcp 65001");

    // === ABRIR ARCHIVO BINARIO DE PRODUCTOS ===
    ifstream archInv("Productos.bin", ios::binary);

    if (!archInv.good()) {
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    Producto p;

    // === MOSTRAR INVENTARIO EN PANTALLA ===
    cout << "\n******** INVENTARIO ACTUAL ********\n";
    cout << "CODIGO   NOMBRE                   TIPO          TAMANO     PRECIO\n";
    cout << "---------------------------------------------------------------------\n";

    while (archInv.read((char*)&p, sizeof(Producto))) {
        cout << p.codigo << "        "
             << p.nombre << "        ";

        if (p.tipo == 1)
            cout << "tradicional     ";
        else
            cout << "especial        ";

        cout << p.tamano << "        "
             << p.precio << endl;
    }

    archInv.close();
    cout << "---------------------------------------------------------------------\n\n";

    // === PEDIR DATOS DE LA VENTA ===
    int ciCliente, codigoPizza, cantidad;
    char nombreCliente[50];

    cout << "Ingrese CI del cliente: ";
    cin >> ciCliente;

    cin.ignore();
    cout << "Ingrese nombre del cliente: ";
    cin.getline(nombreCliente, 50);

    cout << "Ingrese CÓDIGO de la pizza vendida: ";
    cin >> codigoPizza;

    cout << "Ingrese cantidad vendida: ";
    cin >> cantidad;

    // === GUARDAR EN ARCHIVO DE TEXTO ===
    ofstream ventas("VentasPizzas.txt", ios::app);

    if (!ventas.good()) {
        cout << "No se pudo abrir VentasPizzas.txt\n";
        return;
    }

    ventas << ciCliente << "; "
           << nombreCliente << "; "
           << codigoPizza << "; "
           << cantidad << "\n";

    ventas.close();

    cout << "\nVenta registrada correctamente en VentasPizzas.txt\n";
}