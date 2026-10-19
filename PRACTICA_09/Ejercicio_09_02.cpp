// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz (int matrix [100][100], int n);
void MostrarMatriz (int matrix [100][100], int n);
int SumaUltimaColumna(int matrix [100][100], int n);
int ProductoUltimaFila(int matrix [100][100], int n);
void Mayor (int matrix [100][100], int n, int &mayor, int &fila, int &col);
int Promedio (int matrix [100][100], int n);
int aleatorio (int min, int max);

int main ()
{
    srand (time(0));
    int n = 5;
    int matrix [100][100];

    LlenarMatriz(matrix, n);

    cout << "   MATRIZ   " << n << " x " << n << " \n " << endl;
    MostrarMatriz(matrix, n);

    int sumaCol = SumaUltimaColumna(matrix, n);
    cout << "\nSuma de la ultima columna: " << sumaCol << endl;

    int prodFila = ProductoUltimaFila(matrix, n);
    cout << "Producto de la ultima fila: " << prodFila << endl;

    int mayor, fila, col;
    Mayor(matrix, n, mayor, fila, col);
    cout << "El numero mayor es: " << mayor << " (Fila " << fila + 1 << ", Columna " << col + 1 << ")" << endl;

    int prom = Promedio(matrix, n);
    cout << "El promedio de la matriz es: " << prom << endl;

    return 0;
}

void LlenarMatriz (int matrix [100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = aleatorio (1, 10);
        }
    }
}

void MostrarMatriz (int matrix [100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int SumaUltimaColumna(int matrix [100][100], int n)
{
    int suma = 0;
    int UltCol = n - 1;

    for(int i = 0; i < n; i++)
    {
        suma += matrix [i][UltCol];
    }
    return suma;
}

int ProductoUltimaFila(int matrix [100][100], int n)
{
    int producto = 1;
    int UltFil = n - 1;

    for (int j = 0; j < n; j++)
    {
        producto *= matrix[UltFil][j];
    }
    return producto;
}

void Mayor (int matrix [100][100], int n, int &mayor, int &fila, int &col)
{
    mayor = matrix [0][0];
    fila = 0;
    col = 0;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > mayor)
            {
                mayor = matrix[i][j];
                fila = i;
                col = j;
            }
        }
    }
}

int Promedio (int matrix [100][100], int n)
{
    int suma = 0;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma += matrix[i][j];
        }
    }

    return suma / (n * n);
}

int aleatorio (int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}