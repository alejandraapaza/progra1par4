// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 06/09/2026

// Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos,
// sin utilizar la funcion pow.

#include <iostream>

using namespace std;

int main ()
{
    int x;
    int y;
    int resultado = 1;

    cout <<"Ingrese x : "; cin >> x;
    cout <<"Ingrese y: "; cin >> y;

    for (int i = 1; i <= y; i++)
    {
        resultado *= x;
    }

    cout << x << " elevado a la " << y << " es: " << resultado << endl;
    return 0;
}