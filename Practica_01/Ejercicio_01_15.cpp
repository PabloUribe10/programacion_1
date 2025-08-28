// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 23/08/2025
// Numero de ejercicio: 15

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int notas;
    int suma = 0;
    cout << "Ingrese la cantidad de notas: ";
    cin >> notas;
    for (int i = 1; i <= notas; i++) 
    {
        int nota;
        cout << "Nota " << i << ": ";  // imprime nota y el numero de i para darle contexto
        cin >> nota;
        suma = suma + nota;
    }
    int promedio = suma / notas;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
