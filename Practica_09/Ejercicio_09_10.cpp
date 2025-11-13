// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo.
// Fecha creación: 5/11/2024 
// Número de ejercicio: 1-

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;    

struct Fraccion {
    int numerador;
    int denominador;
};

int MCD(int a, int b);

Fraccion SimplificarFraccion(Fraccion f) ;

int main() {
    system("cls");
    system("chcp 65001");
    srand(time(0));

    Fraccion fraccion;

    cout << "Ingrese el numerador de la fracción: ";
    cin >> fraccion.numerador;

    cout << "Ingrese el denominador de la fracción: ";
    cin >> fraccion.denominador;

    Fraccion fraccionSimplificada = SimplificarFraccion(fraccion);

    cout << "La fracción simplificada es: " << fraccionSimplificada.numerador << "/" << fraccionSimplificada.denominador << endl;

    return 0;
}

int MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraccion SimplificarFraccion(Fraccion f) {
    Fraccion resultado;
    int mcd = MCD(f.numerador, f.denominador);
    resultado.numerador = f.numerador / mcd;
    resultado.denominador = f.denominador / mcd;
    return resultado;
}
