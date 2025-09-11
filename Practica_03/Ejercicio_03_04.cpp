// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int IMC (int peso, float altura);

int main(){
    system("cls");
    system("chcp 65001");
    int peso;
    float altura;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en m: ";
    cin >> altura;
    IMC(peso, altura);
    return 0;
}

int IMC (int peso, float altura) {
    float imc = peso / (altura * altura); // Cálculo del IMC
    cout << "Su IMC es: " << imc << endl;
    return 0;
}