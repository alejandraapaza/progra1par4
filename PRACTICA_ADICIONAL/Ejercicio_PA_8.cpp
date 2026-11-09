// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenarmatriz (int nums[100][100], int n);
void mostrarmatriz(int nums[100][100], int n);
void encontrarExtremos(int nums[100][100], int n, int &peorcolumna, int &mejorcolumna);
void intercambio (int nums[100][100], int n, int peor, int mejor);
int aleatorio (int min, int max);

int main ()
{
    srand(time(0));

    int nums [100][100];
    int n;
    cout << "Ingrese la cantidad n x n: ";
    cin >> n;

    llenarmatriz(nums, n);

    cout << "\nMATRIZ ORIGINAL" << endl;
    mostrarmatriz(nums, n);

    int peor, mejor;

    encontrarExtremos(nums, n, peor, mejor);

    cout << "\nLa peor columna fue la: " << peor + 1 << " y la mejor fue la: " << mejor + 1 << endl;

    intercambio(nums, n, peor, mejor);

    cout << "\nMATRIZ INTERCAMBIADA" << endl;
    mostrarmatriz(nums, n);

    return 0;
}

void llenarmatriz (int nums[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            nums[i][j] = aleatorio(1,100);
        }
    }
}

void mostrarmatriz(int nums[100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << nums[i][j] << "\t";
        }

        cout << endl;
    }
}

void encontrarExtremos(int nums[100][100], int n, int &peorcolumna, int &mejorcolumna)
{
    float promediobajo = 999.0;
    float promedioalto = -1.0;
    
    peorcolumna = 0;
    mejorcolumna = 0;

    for (int j = 0; j < n; j++)
    {
        float suma = 0;
        for (int i = 0; i < n; i++)
        {
            suma += nums[i][j];
        }
        float promedioactual = suma / n;

        if (promedioactual < promediobajo)
        {
            promediobajo = promedioactual;
            peorcolumna = j;
        }

        if (promedioactual > promedioalto)
        {
            promedioalto = promedioactual;
            mejorcolumna = j;
        }
    }
}

void intercambio (int nums[100][100], int n, int peor, int mejor)
{
    for (int i = 0; i < n; i++)
    {
        int temp = nums[i][peor];
        nums[i][peor] = nums[i][mejor];
        nums[i][mejor] = temp;
    }
}

int aleatorio (int min, int max)
{
    return min + rand () % (max - min + 1);
}