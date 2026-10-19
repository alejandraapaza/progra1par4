// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;

void generarMatriz(int matrix[100][100], int n);
void mostrarMatriz(int matrix[100][100], int n);

int main()
{
    int n;

    cout << "\nGENERADOR DE MATRIZ\n";
    cout << "Ingrese el orden de la matriz (n): ";
    cin >> n;

    int matrix[100][100];

    generarMatriz(matrix, n);

    cout << "\nMatriz (" << n << "x" << n << "):\n\n";
    mostrarMatriz(matrix, n);

    return 0;
}

void generarMatriz(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 1 + (2 * i) + j;
        }
    }
}

void mostrarMatriz(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}