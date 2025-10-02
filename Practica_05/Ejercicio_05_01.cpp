// Materia: Programación I, Paralelo 4 
// Autor: Pablo Uribe Castedo 
// Fecha creación: 1/10/2025 
// Número de ejercicio: 1   

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<double> generarVoltajes(int cantidad, double min, double max);
vector<double> generarTemperaturas(int cantidad, double min, double max);
vector<char> generarCaracteres(int cantidad);
vector<int> generarAnios(int cantidad, int min, int max);
vector<double> generarVelocidades(int cantidad, double min, double max);
vector<double> generarDistancias(int cantidad, double min, double max);

int main() {
    system("cls"); 
    system("chcp 65001"); 
    srand(static_cast<unsigned int>(time(0))); 

    auto voltajes = generarVoltajes(100, 20.00, 220.00);
    auto temperaturas = generarTemperaturas(50, 0.00, 100.00);
    auto caracteres = generarCaracteres(30);
    auto anios = generarAnios(100, 1990, 2025);
    auto velocidades = generarVelocidades(32, 10.00, 300.00);
    auto distancias = generarDistancias(1000, 1.00, 1000.00);

    cout << "Lista de Voltajes: [";
    for (int i = 0; i < voltajes.size(); ++i) cout << voltajes[i] << " ";
    cout << "]\n\n";

    cout << "Lista de Temperaturas: [";
    for (int i = 0; i < temperaturas.size(); ++i) cout << temperaturas[i] << " ";
    cout << "]\n\n";

    cout << "Lista de Caracteres : [";
    for (int i = 0; i < caracteres.size(); ++i) cout << caracteres[i] << " ";
    cout << "]\n\n";

    cout << "Lista de Años: [";
    for (int i = 0; i < anios.size(); ++i) cout << anios[i] << " ";
    cout << "]\n\n";

    cout << "Lista de Velocidades: [";
    for (int i = 0; i < velocidades.size(); ++i) cout << velocidades[i] << " ";
    cout << "]\n\n";

    cout << "Lista de Distancias: [";
    for (int i = 0; i < distancias.size(); ++i) cout << distancias[i] << " ";
    cout << "]\n";

    return 0;
}

vector<double> generarVoltajes(int cantidad, double min, double max) {
    vector<double> voltajes;
    for (int i = 0; i < cantidad; ++i) {
        double voltaje = min + rand() / (double)(RAND_MAX / (max - min));
        voltajes.push_back(voltaje);
    }
    return voltajes;
}

vector<double> generarTemperaturas(int cantidad, double min, double max) {
    vector<double> temperaturas;
    for (int i = 0; i < cantidad; ++i) {
        double temperatura = min + rand() / (double)(RAND_MAX / (max - min));
        temperaturas.push_back(temperatura);
    }
    return temperaturas;
}

vector<char> generarCaracteres(int cantidad) { 
    vector<char> caracteres;
    const string alfanumericos = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < cantidad; ++i) {
        char caracter = alfanumericos[rand() % alfanumericos.size()];
        caracteres.push_back(caracter);
    }
    return caracteres;
}

vector<int> generarAnios(int cantidad, int min, int max) {
    vector<int> anios;
    for (int i = 0; i < cantidad; ++i) {
        int anio = min + rand() % (max - min + 1);
        anios.push_back(anio);
    }
    return anios;
}

vector<double> generarVelocidades(int cantidad, double min, double max) {
    vector<double> velocidades;
    for (int i = 0; i < cantidad; ++i) {
        double velocidad = min + rand() / (double)(RAND_MAX / (max - min));
        velocidades.push_back(velocidad);
    }
    return velocidades;
}

vector<double> generarDistancias(int cantidad, double min, double max) {
    vector<double> distancias;
    for (int i = 0; i < cantidad; ++i) {
        double distancia = min + rand() / (double)(RAND_MAX / (max - min));
        distancias.push_back(distancia);
    }
    return distancias;
}