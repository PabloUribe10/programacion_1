// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 24

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int opcion;
    cout << "Seleccione una opcion: " << endl;
    cout << "1. Opcion 1" << endl;
    cout << "2. Opcion 2" << endl;
    cout << "3. Opcion 3" << endl;
    cout << "0. Salir" << endl;
    cin >> opcion;
    switch (opcion) 
    {
        case 1:
            cout << "Selecciono la opcion 1" << endl;
            break;
        case 2:
            cout << "Selecciono la opcion 2" << endl;
            break;
        case 3:
            cout << "Selecciono la opcion 3" << endl;
            break;
        case 0:
            cout << "Vuelva pronto" << endl;
            break;
        default:
            cout << "Intente de nuevo." << endl;
    }
    return 0;
}
