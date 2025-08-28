// Materia: Programacion 1, Paralelo 4
// Autor: Pablo Hernan Uribe Castedo
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica
// Fecha de creacion: 22/08/2025
// Numero de ejercicio: 4

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    system("chcp 65001");
    int radio_de_esfera = 0;
    cout << "Ingrese la radio de la esfera: ";
    cin >> radio_de_esfera;
    int volumen_esfera = (4/3) * 3.1416 * radio_de_esfera * radio_de_esfera * radio_de_esfera;
    cout << "El volumen de la esfera es: " << volumen_esfera;
    return 0;
}
