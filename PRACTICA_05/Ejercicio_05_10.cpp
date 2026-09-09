// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int numero);
void procesarAleatorios(int n, int &cantidadPrimos);

int main()
{
    srand(time(0));

    int n;
    int contadorPrimos = 0;

    cout << "Ingrese la cantidad de numeros aleatorios: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "La cantidad debe ser mayor a 0" << endl;
        return 0;
    }

    cout << "\nNumeros generados:" << endl;
    procesarAleatorios(n, contadorPrimos);

    cout << "\nHay " << contadorPrimos << " numeros primos" << endl;

    return 0;
}

bool esPrimo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}

void procesarAleatorios(int n, int &cantidadPrimos)
{
    for (int i = 0; i < n; i++)
    {
        int num = (rand() % 10000) + 1;

        cout << num << " ";

        if (esPrimo(num))
        {
            cantidadPrimos++;
        }
    }
    cout << endl;
}