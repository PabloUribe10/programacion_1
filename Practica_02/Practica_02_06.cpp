// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    int numeros_aleatorios;
    cout << "Ingrese la cantidad de números aleatorios a generar: ";
    cin >> numeros_aleatorios;
    srand((time(0)));
    int contador_primos = 0;

    for (int i = 0; i < numeros_aleatorios; ++i) {
        int numero = rand() % 10000 + 1; // Generar número aleatorio entre 1 y 10000
        cout << numero << " ";

        if (numero > 1) {
            int contador_divisores = 0;
            for (int j = 1; j <= numero; j++) {
                if (numero % j == 0) {
                    contador_divisores++;
                }
            }
            if (contador_divisores == 2) {
                contador_primos++;
            }
        }
    }

    cout << endl;
    cout << "Cantidad de números primos generados: " << contador_primos << endl;

    return 0;
}