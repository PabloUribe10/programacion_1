// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 2

#include <iostream>

using namespace std; 

int Fahrenheit (int celsius);

int main(){
    system("cls");
    system("chcp 65001");
    int celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    cout << "La temperatura en grados Fahrenheit es: " << Fahrenheit(celsius)  << endl;
}

int Fahrenheit (int celsius){
    return (celsius * 9/5) + 32; // Conversión de Celsius a Fahrenheit
}
