// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(NULL));

    int n;
    cout << "Ingrese cuantos numeros aleatorios generar: ";
    cin >> n;

    int suma = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaPrimos = 0;

    for (int i = 1; i <= n; i++)
    {
        int aleatorio = 1 + rand() % 100;
        cout << "Numero " << i << ": " << aleatorio << endl;

        suma += aleatorio;

        if (aleatorio % 2 == 0)
        {
            sumaPares += aleatorio;
        }
        else
        {
            sumaImpares += aleatorio;
        }

        int divisores = 0;
        for (int j = 1; j <= aleatorio; j++)
        {
            if (aleatorio % j == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            sumaPrimos += aleatorio;
        }
    }

    cout << "\nSuma total: " << suma << endl;
    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares << endl;
    cout << "Suma de primos: " << sumaPrimos << endl;

    return 0;
}
