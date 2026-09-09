// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double calcularFactorial(int numero);

int main()
{
    srand(time(0));

    int numeroAleatorio = (rand() % 10) + 1;

    cout << "Numero aleatorio: " << numeroAleatorio << endl;

    double factorial = calcularFactorial(numeroAleatorio);

    cout << "\nEl factorial de " << numeroAleatorio << "! es: " << factorial << endl;

    return 0;
}

double calcularFactorial(int numero)
{
    double resultado = 1.0;

    for (int i = 1; i <= numero; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}