// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 5/11/2024 
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;   

struct Producto {
    char nombre[100];
    char codigo[50];
    double precio;
    int cantidad_en_inventario;
    char observaciones[200];
};

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    int N = 0;
    cout << "Cantidad de productos a registrar: ";
    cin >> N;

    Producto* productos = new Producto[N];

    for (int i = 0; i < N; i++) {
        cin.ignore();
        cout << "\nIngrese los datos del producto " << (i + 1) << ":\n";

        cout << "Nombre: ";
        cin.getline(productos[i].nombre, 100);

        cout << "Código: ";
        cin.getline(productos[i].codigo, 50);

        productos[i].precio = (rand() % 10000) / 100.0 + 1.0; // Precio entre 1.00 y 100.00
        cout << "Precio: " << productos[i].precio << endl;

        productos[i].cantidad_en_inventario = rand() % 20; // Cantidad entre 0 y 19
        cout << "Cantidad en inventario: " << productos[i].cantidad_en_inventario << endl;

        if (productos[i].cantidad_en_inventario < 5) {
            strcpy(productos[i].observaciones, "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO");
        } else {
            strcpy(productos[i].observaciones, "Cantidad suficiente en inventario");
        }
    }

    // Mostrar el producto más caro
    double precioMaximo = productos[0].precio;
    int indiceProductoCaro = 0;
    for (int i = 1; i < N; i++) {
        if (productos[i].precio > precioMaximo) {
            precioMaximo = productos[i].precio;
            indiceProductoCaro = i;
        }
    }

    cout << "\nProducto más caro:\n";
    cout << "Nombre: " << productos[indiceProductoCaro].nombre << endl;
    cout << "Código: " << productos[indiceProductoCaro].codigo << endl;
    cout << "Precio: " << productos[indiceProductoCaro].precio << endl;
    cout << "Cantidad en inventario: " << productos[indiceProductoCaro].cantidad_en_inventario << endl;
    cout << "Observaciones: " << productos[indiceProductoCaro].observaciones << endl;

    // Mostrar la cantidad total de productos en inventario
    int cantidadTotal = 0;
    for (int i = 0; i < N; i++) {
        cantidadTotal += productos[i].cantidad_en_inventario;
    }
    cout << "Cantidad total de productos en inventario: " << cantidadTotal << endl;

    delete[] productos;
    return 0;
}