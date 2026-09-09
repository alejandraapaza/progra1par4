// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 11

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPar(int numero);
bool esPrimo(int numero);
void procesarNumeros(int n, int &sumaPares, int &sumaImpares, int &contImpares, int &mayorPrimo);

int main()
{
    srand(time(0));

    int n;
    int sumaPares = 0;
    int sumaImpares = 0;
    int contImpares = 0;
    int mayorPrimo = 0;

    cout << "Ingrese la cantidad de numeros aleatorios: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "La cantidad debe ser mayor a 0" << endl;
        return 0;
    }

    cout << "\nNumeros generados:" << endl;
    procesarNumeros(n, sumaPares, sumaImpares, contImpares, mayorPrimo);

    cout << "\na. Sumatoria de numeros pares: " << sumaPares << endl;

    if (contImpares > 0)
    {
        double promedioImpares = (double)sumaImpares / contImpares;
        cout << "b. Promedio de numeros impares: " << promedioImpares << endl;
    }
    else
    {
        cout << "No hubo ningun numero impar" << endl;
    }

    if (mayorPrimo > 0)
    {
        cout << "c. Mayor numero primo generado: " << mayorPrimo << endl;
    }
    else
    {
        cout << "No hubo ningun numero primo" << endl;
    }

    return 0;
}

bool esPar(int numero)
{
    return (numero % 2 == 0);
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

void procesarNumeros(int n, int &sumaPares, int &sumaImpares, int &contImpares, int &mayorPrimo)
{
    for (int i = 0; i < n; i++)
    {
        int num = (rand() % 1000) + 1;
        cout << num << " ";

        if (esPar(num))
        {
            sumaPares += num;
        }
        else
        {
            sumaImpares += num;
            contImpares++;
        }

        if (esPrimo(num))
        {
            if (num > mayorPrimo)
            {
                mayorPrimo = num;
            }
        }
    }
    cout << endl;
}