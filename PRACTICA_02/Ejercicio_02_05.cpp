// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 06/09/2026

// Escriba un programa que calcule el valor de:
// 1!+2!+3!+....+n! (suma de factoriales)

#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int sumaTotal = 0;
    int factorial = 1;

    for (int i = 1; i <= n; i++) 
    {
    
        factorial *= i;

        sumaTotal += factorial;
    }

    cout << "La suma de los factoriales " << n << " es: " << sumaTotal << endl;

    return 0;
}