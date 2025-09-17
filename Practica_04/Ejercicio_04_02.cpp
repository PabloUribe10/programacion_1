// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 2

#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

double CalcularVolumen(double radio, double altura) ;

int main() {
    system("cls");
    system("chcp 65001");
    double radio;
    double altura = 10;
    srand(time(0));
    cout << "Ingrese el radio del cilindro: ";
    double volumen = CalcularVolumen(radio, altura);
    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}

double CalcularVolumen(double radio, double altura) {
    radio = rand() % 100 + 1; 
    cout << "El radio generado aleatoriamente es: " << radio << endl;
    double volumen = 3.14159 * radio * radio * altura;
    return volumen;
}