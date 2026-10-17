// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 17/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void voltajes();
void temperaturas();
void caracteres();
void anios();
void velocidades();
void distancias();
int aleatorio(int min, int max);

int main()
{
    srand(time(0));

    voltajes();
    temperaturas();
    caracteres();
    anios();
    velocidades();
    distancias();

    return 0;
}

void voltajes()
{
    vector<float> volt(100);

    cout << " VOLTAJES " << endl;
    for (int i = 0; i < 100; i++)
    {
        volt[i] = aleatorio(20, 220);
        cout << "Voltaje " << i + 1 << ": " << volt[i] << " V" << endl;
    }
    
}

void temperaturas()
{
    vector<float> temp(50);

    cout << " TEMPERATURAS " << endl;
    for (int i = 0; i < 50; i++)
    {
        temp[i] = aleatorio(0, 100);
        cout << "Temperatura " << i + 1 << ": " << temp[i] << " C" << endl;
    }
    
}

void caracteres()
{
    vector<char> car(30);
    
    char letras[62] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };

    cout << " CARACTERES ALFANUMERICOS " << endl;
    for (int i = 0; i < 30; i++)
    {
        int indice = aleatorio(0, 61);
        car[i] = letras[indice];

        cout << "Caracter " << i + 1 << ": " << car[i] << endl;
    }
    
}

void anios()
{
    vector<int> ani(100);
    cout << " ANIOS " << endl;

    for (int i = 0; i < 100; i++)
    {
        ani[i] = aleatorio(1990, 2025);
        cout << "Anio " << i + 1 << ": " << ani[i] << endl;
    }
    
}

void velocidades()
{
    vector<float> vel(32);
    cout << " VELOCIDADES " << endl;
    
    for (int i = 0; i < 32; i++)
    {
        vel[i] = aleatorio(10, 300);
        cout << "Velocidad " << i + 1 << ": " << vel[i] << endl;
    }
    
}

void distancias()
{
    vector<float> dis(1000);
    cout << " DISTANCIAS " << endl;

    for (int i = 0; i < 1000; i++)
    {
        dis[i] = aleatorio(1, 1000);
        cout << "Distancia " << i + 1 << ": " << dis[i] << endl; 
    }
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}