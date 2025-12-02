// Materia: Programación I, Paralelo 4 
// Autor: PABLO URIBE CASTEDO. 
// Fecha creación: 01-12-2025 
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Producto
{
    int codigo;
    char nombre[50];
    int cantidad;
    float precio_unitario;
};

void MenuOpciones();
void CrearProducto();
void ListarProductos();
void BuscarProductos();
void ModificarProductos();
void AdicionarVentasProductos();
int CalcularVentas(int codigoProducto);

int main()
{
    string archivoProductos = "Productos.bin";
    MenuOpciones();
    return 0;
}

void MenuOpciones(){
    int opcion = 0;

    do {
        system("cls"); // ← limpia pantalla (en windows)
        cout << "\nMenu de Opciones";
        cout << "\n=================\n";
        cout << "1. Adicionar Producto\n";
        cout << "2. Listar Productos (incluye ventas)\n";
        cout << "3. Buscar Productos\n";
        cout << "4. Modificar Productos\n";
        cout << "5. Adicionar Ventas Productos\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        system("cls");

        switch (opcion) {
            case 1: 
                CrearProducto(); 
                break;
            case 2: 
                ListarProductos(); 
                break;
            case 3: 
                BuscarProductos(); 
                break;
            case 4: 
                ModificarProductos(); 
                break;
            case 5: 
                AdicionarVentasProductos(); 
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

void CrearProducto()
{
    system("cls");
    system("chcp 65001");
    Producto prod;
    ofstream archivo("Productos.bin", ios::binary | ios::app);

    if (!archivo.good()){
        cout << "No se pudo abrir el archivo.\n";
        return;
    }

    cout << "\nIngrese Codigo: ";
    cin >> prod.codigo;

    cout << "Ingrese Nombre: ";
    cin.ignore();
    cin.getline(prod.nombre, 50);

    cout << "Ingrese Cantidad Inicial: ";
    cin >> prod.cantidad;

    cout << "Ingrese Precio Unitario: ";
    cin >> prod.precio_unitario;

    archivo.write((char*)&prod, sizeof(Producto));
    archivo.close();

    cout << "\nProducto registrado correctamente.\n";
}

void ListarProductos(){
    system("cls");
    system("chcp 65001");
    ifstream archivo("Productos.bin", ios::binary);
    ofstream reporte("REPORTE.txt", ios::out);  

    if (!archivo.good()){
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    Producto prod;

    cout << "\nREPORTE FINAL DE PRODUCTOS Y VENTAS\n";
    cout << "====================================================================\n";
    cout << "CODIGO   NOMBRE            CANT.INI   PRECIO   VENDIDO   TOTAL\n";
    cout << "--------------------------------------------------------------------\n";

    while (archivo.read((char*)&prod, sizeof(Producto))) {
        ifstream ventas("VENTAS.txt");
        int vendidas = 0;

        if (ventas.good()) {
            string linea;
            int ciCliente, cod, cantidadVendida;
            char nombreCliente[100];

            while (getline(ventas, linea)) {

                sscanf(linea.c_str(),
                       "%d; %[^;]; %d; %d",
                       &ciCliente, nombreCliente,
                       &cod, &cantidadVendida);

                if (cod == prod.codigo)
                    vendidas += cantidadVendida;
            }
        }
        ventas.close();

        float total = vendidas * prod.precio_unitario;

        // Mostrar en pantalla
        cout << prod.codigo << "        " ;
        cout << prod.nombre << "        " ; 
        cout << prod.cantidad << "         ";
        cout << prod.precio_unitario << "        ";
        cout << vendidas << "        ";
        cout << total << endl;

        // Guardar en REPORTE.txt
        reporte << prod.codigo << "        ";
        reporte << prod.nombre << "        ";
        reporte << prod.cantidad << "         ";
        reporte << prod.precio_unitario << "        ";
        reporte << vendidas << "        ";
        reporte << total << endl;
    }

    archivo.close();
    reporte.close();

    cout << "\nReporte generado en REPORTE.txt\n";
}

void BuscarProductos(){
    system("cls");
    system("chcp 65001");
    int codigoBuscado;
    ifstream archivo("Productos.bin", ios::binary);

    if (!archivo.good()){
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    cout << "\nIngrese el Codigo del Producto a buscar: ";
    cin >> codigoBuscado;

    Producto prod;
    bool encontrado = false;

    while (archivo.read((char*)&prod, sizeof(Producto))) {
        if (prod.codigo == codigoBuscado) {
            cout << "\nProducto encontrado:\n";
            cout << "Codigo: " << prod.codigo << endl;
            cout << "Nombre: " << prod.nombre << endl;
            cout << "Cantidad: " << prod.cantidad << endl;
            cout << "Precio: " << prod.precio_unitario << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "\nNo existe un producto con ese codigo.\n";

    archivo.close();
}

void ModificarProductos(){
    system("cls");
    system("chcp 65001");
    int codigoBuscado;
    fstream archivo("Productos.bin", ios::binary | ios::app);

    if (!archivo.good()){
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    cout << "\nIngrese el Codigo del Producto a modificar: ";
    cin >> codigoBuscado;

    Producto prod;
    bool encontrado = false;

    while (archivo.read((char*)&prod, sizeof(Producto))) {
        if (prod.codigo == codigoBuscado) {

            cout << "\nProducto encontrado. Valores actuales:\n";
            cout << "Nombre: " << prod.nombre << endl;
            cout << "Cantidad: " << prod.cantidad << endl;
            cout << "Precio: " << prod.precio_unitario << endl;

            cout << "\nIngrese nuevo nombre: ";
            cin.ignore();
            cin.getline(prod.nombre, 50);

            cout << "Ingrese nueva cantidad: ";
            cin >> prod.cantidad;

            cout << "Ingrese nuevo precio: ";
            cin >> prod.precio_unitario;

            archivo.seekp(-static_cast<int>(sizeof(Producto)), ios::cur);
            archivo.write((char*)&prod, sizeof(Producto));

            cout << "\nProducto modificado correctamente.\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "\nNo existe un producto con ese codigo.\n";

    archivo.close();
}

void AdicionarVentasProductos(){
    system("cls");
    system("chcp 65001");
    ifstream archInv("Productos.bin", ios::binary);

    if (!archInv.good()) {
        cout << "No se pudo abrir Productos.bin\n";
        return;
    }

    Producto p;

    cout << "\n******** INVENTARIO ACTUAL ********\n";
    cout << "CODIGO   NOMBRE                   STOCK   PRECIO\n";
    cout << "---------------------------------------------------\n";

    while (archInv.read((char*)&p, sizeof(Producto))) {
        cout << p.codigo << "        "
             << p.nombre << "        "
             << p.cantidad << "        "
             << p.precio_unitario << endl;
    }

    archInv.close();
    cout << "---------------------------------------------------\n\n";


    ofstream arch("VENTAS.txt", ios::app);

    if (!arch.good()) {
        cout << "No se pudo abrir VENTAS.txt\n";
        return;
    }

    int ciCliente, codigoProducto, cantidadVendida;
    char nombreCliente[100];

    cout << "Ingrese CI del cliente: ";
    cin >> ciCliente;

    cout << "Ingrese nombre del cliente: ";
    cin.ignore();
    cin.getline(nombreCliente, 100);

    cout << "Ingrese el CÓDIGO del producto vendido: ";
    cin >> codigoProducto;

    cout << "Ingrese cantidad vendida: ";
    cin >> cantidadVendida;

    arch << ciCliente << "; "
         << nombreCliente << "; "
         << codigoProducto << "; "
         << cantidadVendida << "\n";

    arch.close();

    cout << "\nVenta registrada correctamente en VENTAS.txt\n";
}