// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

int sumatoria(int num);

int main()
{
    int n;

    cout << "Ingrese su numero: ";
    cin >> n;

    cout << "La suma de los numeros hasta " << n << " es " << sumatoria(n) << endl;

    return 0;
}

int sumatoria(int num)
{
    int suma = 0;
    for (int i = 1; i <= num; i++)
    {
        suma += i;
    }

    return suma;
}