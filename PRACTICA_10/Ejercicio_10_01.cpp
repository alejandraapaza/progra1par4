// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 19/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ordenarNombresSeleccion(string nombres[], int n);
void generarNombresCompletos(string nombres[10], string apellidos[10], int n);
int aleatorio(int min, int max);

int main()
{
    srand(time(0));

    string nombres[10] = {"Ana", "Carlos", "Sofia", "Mateo", "Lucia", "Diego", "Valentina", "Lucas", "Camila", "Joaquin"};
    string apellidos[10] = {"Gomez", "Perez", "Rodriguez", "Lopez", "Martinez", "Sanchez", "Diaz", "Torres", "Flores", "Ramirez"};

    int n = 5;

    cout << "\nNOMBRES GENERADOS: \n";
    generarNombresCompletos(nombres, apellidos, n);

    return 0;
}

void ordenarNombresSeleccion(string vec[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vec[j] < vec[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            string temp = vec[i];
            vec[i] = vec[min];
            vec[min] = temp;
        }
    }
}

void generarNombresCompletos(string nombres[10], string apellidos[10], int n)
{
    string listaGenerada[100];

    for (int i = 0; i < n; i++)
    {
        int r1 = aleatorio(0, 9);
        int r2 = aleatorio(0, 9);
        listaGenerada[i] = nombres[r1] + " " + apellidos[r2];
    }

    ordenarNombresSeleccion(listaGenerada, n);

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << listaGenerada[i] << endl;
    }
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}