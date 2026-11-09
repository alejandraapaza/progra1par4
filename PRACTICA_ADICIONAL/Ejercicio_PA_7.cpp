// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenarmatriz (int tiempo[4][5]);
void mostrarmatriz (int tiempo[4][5]);
void mejortiempo (int tiempo[4][5]);
void mejorpromedionadador (int tiempo[4][5]);
int aleatorio (int min, int max);

int main ()
{
    srand(time(0));

    int tiempo [4][5];

    llenarmatriz(tiempo);
    mostrarmatriz(tiempo);
    mejortiempo(tiempo);
    mejorpromedionadador(tiempo);

    return 0;
    
}

void llenarmatriz (int tiempo[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tiempo[i][j] = aleatorio(20,50);
        }
    }
}

void mostrarmatriz (int tiempo[4][5])
{
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cout << tiempo[i][j] << "\t";
        }

        cout << endl; 

    }
}

void mejortiempo (int tiempo[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        int menor = 50;
        for (int j = 0; j < 5; j++)
        {
            if (tiempo[i][j] < menor)
            {
                menor = tiempo[i][j];
            }
        }

        cout << "El mejortiempo de cada fila es: " << menor << endl;
    }
}

void mejorpromedionadador (int tiempo[4][5])
{
    float mejorpromedio  = 99;
    int nadadorganador = 0;

    for (int j = 0; j < 5; j++)
    {
        float suma = 0;

        for (int i = 0; i < 4; i++)
        {
            suma += tiempo[i][j];
        }

        float promedioactual = suma/4;
        cout << "El promedio del Nadador " << j + 1 << " es: " << promedioactual << endl;

        if (promedioactual < mejorpromedio)
        {
            mejorpromedio = promedioactual;
            nadadorganador = j + 1;
        }
    }

    cout << "\nEl mejor nadador en promedio es el Nadador " << nadadorganador << " con un promedio de " << mejorpromedio << endl;
}

int aleatorio (int min, int max)
{
    return min + rand () % (max - min + 1);
}