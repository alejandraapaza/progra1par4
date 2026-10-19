// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026
// Número de ejercicio: 5

#include <iostream>

using namespace std;

void InicializarSala(int matrix[100][100], int n);
void MostrarSala(int matrix[100][100], int n);
void ComprarEntrada(int matrix[100][100], int n);
void MostrarEstadisticas(int matrix[100][100], int n);

int main()
{
    int n = 5;
    int matrix[100][100];
    int opcion;

    InicializarSala(matrix, n);

    do
    {
        cout << "\nMENU DE SALA CINE VIP";
        cout << "\n1. Mostrar sala\n";
        cout << "2. Comprar entrada\n";
        cout << "3. Estadisticas\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                MostrarSala(matrix, n);
                break;
            case 2:
                ComprarEntrada(matrix, n);
                break;
            case 3:
                MostrarEstadisticas(matrix, n);
                break;
            case 4:
                break;
            default:
                cout << "Opcion invalida\n";
        }

    } while (opcion != 4);

    return 0;
}

void InicializarSala(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void MostrarSala(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                cout << "L\t";
            }
            else
            {
                cout << "O\t";
            }
        }
        cout << endl;
    }
}

void ComprarEntrada(int matrix[100][100], int n)
{
    int fila, asiento;
    cout << "Fila: ";
    cin >> fila;
    cout << "Asiento: ";
    cin >> asiento;

    int f = fila - 1;
    int c = asiento - 1;

    if (f >= 0 && f < n && c >= 0 && c < n)
    {
        if (matrix[f][c] == 0)
        {
            matrix[f][c] = 1;
            cout << "\nReserva exitosa\n";
        }
        else
        {
            cout << "\nLo sentimos, asiento no disponible\n";
        }
    }
    else
    {
        cout << "Fuera de rango\n";
    }
}

void MostrarEstadisticas(int matrix[100][100], int n)
{
    int total = n * n;
    int libres = 0;
    int ocupados = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                libres++;
            }
            else
            {
                ocupados++;
            }
        }
    }

    float pLibres = (static_cast<float>(libres) / total) * 100;
    float pOcupados = (static_cast<float>(ocupados) / total) * 100;

    cout << "\nLibres: " << libres << " (" << pLibres << "%)\n";
    cout << "Ocupados: " << ocupados << " (" << pOcupados << "%)\n";
}