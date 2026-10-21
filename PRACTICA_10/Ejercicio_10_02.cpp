// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 19/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarPuntuaciones(int vec[], int n);
void OrdenarBurbuja(int vec[], int n);
void MostrarPodio(int vec[], int n);
int aleatorio(int min, int max);

int main()
{
    srand(time(0));
    int n = 10;
    int vec[100];

    LlenarPuntuaciones(vec, n);
    OrdenarBurbuja(vec, n);
    MostrarPodio(vec, n);

    return 0;
}

void LlenarPuntuaciones(int vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vec[i] = aleatorio(1, 100);
    }
}

void OrdenarBurbuja(int vec[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] < vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

void MostrarPodio(int vec[], int n)
{
    cout << "Podio de ganadores:\n";
    int limite = (n < 3) ? n : 3;
    for (int i = 0; i < limite; i++)
    {
        cout << "Puesto " << i + 1 << ": " << vec[i] << " puntos\n";
    }
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}