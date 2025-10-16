// Materia: Programación I, Paralelo 3 
// Autor: Pablo Uribe Castedo  
// Fecha creación: 15/10/2024 
// Número de ejercicio: 3

#include <iostream>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    const int FILAS = 3;
    const int COLUMNAS = 4;
    char matriz[FILAS][COLUMNAS] = {
        {'x', 'o', 'x', 'o'},
        {'o', 'o', 'o', 'o'},
        {'o', 'o', 'x', 'o'}
    };

    // a) Mostrar la matriz que describe el área.
    cout << "Matriz del área:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // b) Mostrar el número de filas y columnas que no tienen un muerto viviente.
    int filasSeguras = 0, columnasSeguras = 0;

    for (int i = 0; i < FILAS; i++) {
        bool filaSegura = true;
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] == 'x') {
                filaSegura = false;
                break;
            }
        }
        if (filaSegura) filasSeguras++;
    }

    for (int j = 0; j < COLUMNAS; j++) {
        bool columnaSegura = true;
        for (int i = 0; i < FILAS; i++) {
            if (matriz[i][j] == 'x') {
                columnaSegura = false;
                break;
            }
        }
        if (columnaSegura) columnasSeguras++;
    }

    cout << "Número de filas seguras: " << filasSeguras << endl;
    cout << "Número de columnas seguras: " << columnasSeguras << endl;

    // c) Determinar las coordenadas de los muertos vivientes en la matriz.
    int filaMuertos[FILAS * COLUMNAS];
    int columnaMuertos[FILAS * COLUMNAS];
    int contadorMuertos = 0;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] == 'x') {
                filaMuertos[contadorMuertos] = i;
                columnaMuertos[contadorMuertos] = j;
                contadorMuertos++;
            }
        }
    }

    cout << "Coordenadas de los muertos vivientes:\n";
    for (int i = 0; i < contadorMuertos; i++) {
        cout << "Muerto viviente en: (" << filaMuertos[i] << ", " << columnaMuertos[i] << ")\n";
    }

    // d) La cantidad de muertos vivientes que existen en toda la matriz.
    cout << "Cantidad de muertos vivientes: " << contadorMuertos << endl;

    // e) Determinar si dos o más muertos vivientes se encuentran en la primera columna.
    int muertosPrimeraColumna = 0;
    for (int i = 0; i < contadorMuertos; i++) {
        if (columnaMuertos[i] == 0) {
            muertosPrimeraColumna++;
        }
    }

    if (muertosPrimeraColumna >= 2) {
        cout << "No es posible entrar al complejo\n";
    } else {
        cout << "Es posible entrar al complejo\n";
    }

    return 0;
}