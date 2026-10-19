// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void genEdades (vector<int>& edades);
void genDatos (const vector<string>& nombres, const vector<string>& apellidos, const vector<int>& edades, int n);
int aleatorio(int min, int max);

int main()
{

    srand(time(0));

    int n;
    cout << "Ingrese el numero de datos: ";
    cin >> n;

    vector<string> nombres{"Alejandra", "Liam", "Jessika", "Roberto", "Juana", "Lorena", "Lola", "Paola", "Esteban", "Daniel"};
    vector<string> apellidos{"Guzman", "Villegas", "Barrera", "Zuzunaga", "Sorni", "Bonachera", "Campos", "Chavez", "Rios", "Mendoza"};
    vector<int> edades(10);

    
    genEdades(edades);

    cout << "  \nDATOS A MOSTRAR " << endl;

    genDatos(nombres, apellidos, edades, n);

    return 0;

}

void genEdades (vector<int>& edades)
{
    for (int i = 0; i < 10; i++)
    {
        edades[i] = aleatorio(18,80);
    }
}

void genDatos (const vector<string>& nombres, const vector<string>& apellidos, const vector<int>& edades, int n)
{
    for (int i = 0; i < n; i++)
    {
        int nombre = aleatorio(0, 9);
        int apellido = aleatorio(0, 9);
        int edad = aleatorio (0, 9);

        cout << nombres[nombre] << " " << apellidos[apellido] << " - " << edades[edad]<< " anios" << endl;
    }
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}