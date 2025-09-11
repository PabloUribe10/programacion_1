// Materia: Programación I, Paralelo 4 
// Autor: Pablo Hernan Uribe Castedo 
// Carnet: 8921490 SC
// Carrera del estudiante: Ingeniería Biomedica 
// Fecha creación: 10/09/2025 
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

int main() {
    system("cls");
    system("chcp 65001");
    srand((time(0))); 
    int numeroSecreto = rand() % 51; 
    int intentos = 5;
    int intentoUsuario;

    cout << "Tienes que adivinar el numero" << endl;
    cout << "Tienes " << intentos << " intentos para adivinar un numero entre el 0 y el 50." << endl;

    for (int i = 1; i <= intentos; ++i) {
        cout << "Intento " << (i) << endl;
        cout << "Ingresa tu numero: ";    
        cin >> intentoUsuario;

        if (intentoUsuario < 0 || intentoUsuario > 50) {
            cout << "Por favor, ingresa un numero válido entre 0 y 50." << endl;
            --i;
        }
        if (intentoUsuario == numeroSecreto) {
            cout << "Felicitaciones... Adivinaste el numero secreto"<< endl;
        } else if (intentoUsuario < numeroSecreto) {
            cout << "El numero secreto es mayor que " << intentoUsuario << "." << endl;
        } else {
            cout << "El numero secreto es menor que " << intentoUsuario << "." << endl;
        }
        if (i == intentos) {
            cout << "Lo siento, has agotado tus intentos, el numero era: " << numeroSecreto << endl;
        }
    }

    return 0;
}