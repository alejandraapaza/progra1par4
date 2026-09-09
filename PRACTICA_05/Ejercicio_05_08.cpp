// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void simularLanzamientos(int n, int &caras, int &cruces);

int main()
{
    srand(time(0));

    int n;
    int caras = 0;
    int cruces = 0;

    cout << "Ingrese la cantidad de lanzamientos de la moneda: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "No hizo ningun lanzamiento" << endl;
        return 0;
    }

    simularLanzamientos(n, caras, cruces);

    double porcentajeCaras = (caras * 100.0) / n;
    double porcentajeCruces = (cruces * 100.0) / n;

    cout << "\nResultados de la simulacion:" << endl;
    cout << "Caras obtenidas: " << caras << " (" << porcentajeCaras << "%)" << endl;
    cout << "Cruces obtenidas: " << cruces << " (" << porcentajeCruces << "%)" << endl;

    return 0;
}

void simularLanzamientos(int n, int &caras, int &cruces)
{
    for (int i = 0; i < n; i++)
    {
        int resultado = rand() % 2;

        if (resultado == 0)
        {
            caras++;
        }
        else
        {
            cruces++;
        }
    }
}