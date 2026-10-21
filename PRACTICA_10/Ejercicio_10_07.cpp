// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 19/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarNotas(int notas[100][100], int filas, int cols);
void CalcularPromedios(int notas[100][100], float promedios[100], int filas, int cols);
void OrdenarBurbujaParalelo(string nombres[100], int notas[100][100], float promedios[100], int n);
void MostrarBoletin(string nombres[100], int notas[100][100], float promedios[100], int n);
int aleatorio(int min, int max);

int main()
{
    srand(time(0));
    int n = 5;
    string nombres[100] = {"Sofia", "Mateo", "Lucia", "Carlos", "Valentina"};
    int notas[100][100];
    float promedios[100];

    LlenarNotas(notas, n, 3);
    CalcularPromedios(notas, promedios, n, 3);

    cout << "NOTAS ORIGINALES\n";
    MostrarBoletin(nombres, notas, promedios, n);

    OrdenarBurbujaParalelo(nombres, notas, promedios, n);

    cout << "NOTAS ORDENADAS\n";
    MostrarBoletin(nombres, notas, promedios, n);

    return 0;
}

void LlenarNotas(int notas[100][100], int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            notas[i][j] = aleatorio(50, 100);
        }
    }
}

void CalcularPromedios(int notas[100][100], float promedios[100], int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        int suma = 0;
        for (int j = 0; j < cols; j++)
        {
            suma += notas[i][j];
        }
        promedios[i] = static_cast<float>(suma) / cols;
    }
}

void OrdenarBurbujaParalelo(string nombres[100], int notas[100][100], float promedios[100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nombres[j] > nombres[j + 1])
            {
                string tempNombre = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = tempNombre;

                float tempProm = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = tempProm;

                for (int k = 0; k < 3; k++)
                {
                    int tempNota = notas[j][k];
                    notas[j][k] = notas[j + 1][k];
                    notas[j + 1][k] = tempNota;
                }
            }
        }
    }
}

void MostrarBoletin(string nombres[100], int notas[100][100], float promedios[100], int n)
{
    cout << "Nombre\t\tNota 1 | Nota 2 | Nota 3 | Promedio\n";
    for (int i = 0; i < n; i++)
    {
        cout << nombres[i] << "\t\t";
        for (int j = 0; j < 3; j++)
        {
            cout << notas[i][j] << "\t ";
        }
        cout << promedios[i] << endl;
    }
    cout << endl;
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}