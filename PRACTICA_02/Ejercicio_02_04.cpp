// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 06/09/2026

// Escriba un programa que calcule el valor de:
// 1+3+5+...+2n-1

#include <iostream>

using namespace std;

int main ()
{
    int n;
    int suma = 0;

    cout << "Ingrese la cantidad de numeros impares : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += (2 * i - 1);
    }

    cout << "La suma de los " << n << " numeros impares es: " << suma << endl;

    return 0;
}