// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 19/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarPrecios(float vec[], int n);
void MostrarPrecios(float vec[], int n);
void OrdenarSeleccion(float vec[], int n);
void MostrarMasBarato(float vec[], int n);
void MostrarMasCaro(float vec[], int n);
void CalcularMediana(float vec[], int n);
int aleatorio(int min, int max);

int main()
{
    srand(time(0));
    int n = 7;
    float vec[100];

    LlenarPrecios(vec, n);

    cout << "\nPrecios originales:\n";
    MostrarPrecios(vec, n);

    OrdenarSeleccion(vec, n);

    cout << "Precios ordenados de forma ascendente:\n";
    MostrarPrecios(vec, n);

    MostrarMasBarato(vec, n);
    MostrarMasCaro(vec, n);
    CalcularMediana(vec, n);

    return 0;
}

void LlenarPrecios(float vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vec[i] = static_cast<float>(aleatorio(10, 500)) / 10.0f;
    }
}

void MostrarPrecios(float vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " \t";
    }
    cout << endl << endl;
}

void OrdenarSeleccion(float vec[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vec[j] < vec[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            float temp = vec[i];
            vec[i] = vec[minIndex];
            vec[minIndex] = temp;
        }
    }
}

void MostrarMasBarato(float vec[], int n)
{
    cout << "Producto mas barato: " << vec[0] << endl;
}

void MostrarMasCaro(float vec[], int n)
{
    cout << "Producto mas caro: " << vec[n - 1] << endl;
}

void CalcularMediana(float vec[], int n)
{
    float mediana;
    if (n % 2 != 0)
    {
        mediana = vec[n / 2];
    }
    else
    {
        mediana = (vec[(n / 2) - 1] + vec[n / 2]) / 2.0f;
    }
    cout << "Mediana de los precios: " << mediana << endl;
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}