// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 3

#include <iostream>

using namespace std; 

int capicua(int numero);

int main(){
    system("cls");
    system("chcp 65001");
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    capicua(numero);
    return 0;
}

int capicua(int numero) {
    int invertido = 0;
    int digito;
    int original = numero;
    while (numero > 0) {
        digito = numero % 10; // obtener el último dígito
        invertido = (invertido * 10) + digito; // construir el número invertido
        numero = numero / 10;
    }
    if (original == invertido) {
        cout << original << " es capicúa." << endl;
    } else {
        cout << original << " no es capicúa." << endl;
    }
}