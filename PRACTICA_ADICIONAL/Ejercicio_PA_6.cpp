// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenarmatriz (int asientos[5][5]);
void mostrarmatriz (int asientos[5][5]);
bool verificador (int asientos[5][5], int fila);
int aleatorio (int min, int max);

int main()
{
    srand(time(0));
    int asientos[5][5];

    llenarmatriz(asientos);
    mostrarmatriz(asientos);

    int revisarfila_usuario;
    cout << "\nIngrese la fila a revisar (1 al 5): ";
    cin >> revisarfila_usuario;

    int revisarfila_real = revisarfila_usuario - 1;

    if (revisarfila_real >= 0 && revisarfila_real < 5)
    {
        if (verificador(asientos, revisarfila_real))
        {
            cout << "La fila " << revisarfila_usuario << " esta disponible para una pareja" << endl;
        }
        else
        {
            cout << "La fila " << revisarfila_usuario << " no esta disponible para una pareja" << endl;
        }
    }
    else
    {
        cout << "Error, esa fila no existe (debe ser de 1 al 5)" << endl;
    }

    return 0;
}

void llenarmatriz (int asientos[5][5])
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            asientos[i][j] = aleatorio(0,1);
        }
    }

}

void mostrarmatriz (int asientos[5][5])
{
    cout << "\nASIENTOS DEL CINE (Filas del 1 al 5)" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Fila " << i + 1 << ": ";
        
        for (int j = 0; j < 5; j++)
        {
            cout << asientos[i][j] << " ";
        }

        cout << endl;
    }
}

bool verificador (int asientos[5][5], int fila)
{

    for (int j = 0; j < 4; j++)
    {

        if (asientos[fila][j] == 0 && asientos[fila][j+1] == 0)
        {
            return true;
        }


    }

    return false;

}

int aleatorio (int min, int max)
{
    return min + rand () % (max - min + 1);
}