// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz(int matrix[100][100], int n, int m);
void MostrarMatriz(int matrix[100][100], int n, int m);
void BuscarPuntoDeSilla(int matrix[100][100], int n, int m);
int aleatorio(int min, int max);

int main()
{
    srand(time(0));
    int n, m;

    cout << "\nPUNTO DE SILLA\n";
    cout << "Ingrese el numero de filas (n): ";
    cin >> n;
    cout << "Ingrese el numero de columnas (m): ";
    cin >> m;

    int matrix[100][100];

    LlenarMatriz(matrix, n, m);
    
    cout << "\nMATRIZ GENERADA:\n";
    MostrarMatriz(matrix, n, m);

    cout << "\nRESULTADO:\n";
    BuscarPuntoDeSilla(matrix, n, m);

    return 0;
}

void LlenarMatriz(int matrix[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = aleatorio(1, 10);
        }
    }
}

void MostrarMatriz(int matrix[100][100], int n, int m)
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

void BuscarPuntoDeSilla(int matrix[100][100], int n, int m)
{
    bool encontrado = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int actual = matrix[i][j];
            bool esMenorFila = true;
            bool esMayorColumna = true;

            for (int k = 0; k < m; k++)
            {
                if (matrix[i][k] < actual)
                {
                    esMenorFila = false;
                }
            }

            for (int k = 0; k < n; k++)
            {
                if (matrix[k][j] > actual)
                {
                    esMayorColumna = false;
                }
            }

            if (esMenorFila && esMayorColumna)
            {
                cout << "Punto de silla encontrado" << endl;
                cout << "Numero: " << actual << " en la Fila " << i + 1 << ", Columna " << j + 1 << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado)
    {
        cout << "No se encontro ningun punto de silla" << endl;
    }
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}