// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarTemperaturas(int temperaturas[100][100], int filas, int cols);
void MostrarTemperaturas(int temperaturas[100][100], int filas, int cols);
void TemperaturaMasAlta(int temperaturas[100][100], int filas, int cols);
void PromedioSemanas(int temperaturas[100][100], int filas, int cols);
void ContarMayor30(int temperaturas[100][100], int filas, int cols);
int aleatorio(int min, int max);

int main()
{
    srand(time(0));
    int filas = 4;
    int cols = 7;
    int temperaturas[100][100];

    LlenarTemperaturas(temperaturas, filas, cols);
    MostrarTemperaturas(temperaturas, filas, cols);

    TemperaturaMasAlta(temperaturas, filas, cols);
    PromedioSemanas(temperaturas, filas, cols);
    ContarMayor30(temperaturas, filas, cols);

    return 0;
}

void LlenarTemperaturas(int temperaturas[100][100], int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temperaturas[i][j] = aleatorio(5, 35);
        }
    }
}

void MostrarTemperaturas(int temperaturas[100][100], int filas, int cols)
{
    cout << "\nTemperaturas (4 semanas x 7 dias):\n\t";
    for (int j = 0; j < cols; j++)
    {
        cout << "Dia " << j + 1 << "\t";
    }
    cout << endl;

    for (int i = 0; i < filas; i++ )
    {
        cout << "Sem " << i + 1 << ":\t";
        for (int j = 0; j < cols; j++)
        {
            cout << temperaturas[i][j] << "C\t";
        }
        cout << endl;
    }
    cout << endl;
}

void TemperaturaMasAlta(int temperaturas[100][100], int filas, int cols)
{
    int maxTemp = temperaturas[0][0];
    int semanaMax = 0;
    int diaMax = 0;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (temperaturas[i][j] > maxTemp)
            {
                maxTemp = temperaturas[i][j];
                semanaMax = i;
                diaMax = j;
            }
        }
    }

    cout << "Temperatura mas alta: " << maxTemp << "C (Semana " << semanaMax + 1 << ", Dia " << diaMax + 1 << ")\n";
}

void PromedioSemanas(int temperaturas[100][100], int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        int suma = 0;
        for (int j = 0; j < cols; j++)
        {
            suma += temperaturas[i][j];
        }
        float promedio = static_cast<float>(suma) / cols;
        cout << "Promedio Sem " << i + 1 << ": " << promedio << "C\n";
    }
}

void ContarMayor30(int temperaturas[100][100], int filas, int cols)
{
    int contador = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (temperaturas[i][j] > 30)
            {
                contador++;
            }
        }
    }
    cout << "Dias con temperatura mayor a 30C: " << contador << endl;
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}