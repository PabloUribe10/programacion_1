// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo
// Fecha creación: 16/09/2025 
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int ConvertirCelsiusAFahrenheit(int celsius);
int MayorTemperatura(int temp1, int temp2);

int main() {
    system("cls");
    system("chcp 65001");
    int celsius1;
    int celsius2;

    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> celsius1;
    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> celsius2;

    int fahrenheit1 = ConvertirCelsiusAFahrenheit(celsius1);
    int fahrenheit2 = ConvertirCelsiusAFahrenheit(celsius2);

    cout << "La primera temperatura en Fahrenheit es: " << fahrenheit1 << endl;
    cout << "La segunda temperatura en Fahrenheit es: " << fahrenheit2 << endl;

    int mayor = MayorTemperatura(fahrenheit1, fahrenheit2);
    cout << "La mayor temperatura en Fahrenheit es: " << mayor << endl;

    return 0;
}

int ConvertirCelsiusAFahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

int MayorTemperatura(int temp1, int temp2) {
    if (temp1 > temp2) {
        return temp1;
    } else {
        return temp2;
    } 
}