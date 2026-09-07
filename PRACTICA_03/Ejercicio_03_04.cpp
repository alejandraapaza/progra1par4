// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    int factorial = 1;
    int sumaTotal = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sumaTotal += factorial;
    }

    cout << "La suma de los factoriales hasta " << n << "! es: " << sumaTotal << endl;

    return 0;
}