// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>

using namespace std;

int main ()
{
    int n;
    int suma = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }

    cout << "El resultado es: " << suma << endl;

    return 0;
}