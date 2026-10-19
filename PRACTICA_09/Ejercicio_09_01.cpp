// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void leerMatriz(int matrix[100][100], int n, int m);
void intercambiarFilas(int matrix[100][100], int n, int m);
void mostrarMatriz(int matrix[100][100], int n, int m);

int main()
{
    int n, m;

    cout << "\nINTERCAMBIAR PRIMERA Y ULTIMA FILA\n";
    cout << "Ingrese el numero de filas (n): ";
    cin >> n;
    cout << "Ingrese el numero de columnas (m): ";
    cin >> m;

    int matrix[100][100];

    leerMatriz(matrix, n, m);

    cout << "\nMatriz original:\n";
    mostrarMatriz(matrix, n, m);

    intercambiarFilas(matrix, n, m);

    cout << "\nMatriz modificada:\n";
    mostrarMatriz(matrix, n, m);

    return 0;
}

void leerMatriz(int matrix[100][100], int n, int m)
{
    cout << "\nIngrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void intercambiarFilas(int matrix[100][100], int n, int m)
{
    if (n > 1)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = matrix[0][j];
            matrix[0][j] = matrix[n - 1][j];
            matrix[n - 1][j] = temp;
        }
    }
}

void mostrarMatriz(int matrix[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}