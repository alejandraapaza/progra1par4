// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 19/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarTiempos(float vec[], int n);
void MostrarTiempos(float vec[], int n);
void OrdenarBurbuja(float vec[], int n);
float aleatorio(float min, float max);

int main()
{
    srand(time(0));
    int n = 8;
    float vec[100];

    LlenarTiempos(vec, n);

    cout << "\nTiempos originales:\n";
    MostrarTiempos(vec, n);

    OrdenarBurbuja(vec, n);

    cout << "Tiempos ordenados de menor a mayor:\n";
    MostrarTiempos(vec, n);

    return 0;
}

void LlenarTiempos(float vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vec[i] = aleatorio(10.00, 20.00);
    }
}

void MostrarTiempos(float vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << "s\t";
    }
    cout << endl << endl;
}

void OrdenarBurbuja(float vec[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                float temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

float aleatorio(float min, float max)
{
    float random = static_cast<float>(rand()) / RAND_MAX;
    return min + random * (max - min);
}