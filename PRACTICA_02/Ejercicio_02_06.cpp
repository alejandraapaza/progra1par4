// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 06/09/2026

// Realice un programa que calcule la descomposicion en factoress primos de un numero entero
// por ejemplo: 20 = 2 * 2 * 5

#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    cout << "La descomposicion en factores primos de " << numero << " es: ";

    int divisor = 2;

    while (numero > 1)
    {
        while (numero % divisor == 0)
        {
            cout << divisor << " ";
            numero /= divisor;
        }

        divisor++;
    }

    cout << endl;

    return 0;
}