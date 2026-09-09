// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void IntercambiarValores(int &a, int &b);

int main()
{
    int x, y;

    cout << "Ingrese el primer numero (x): ";
    cin >> x;

    cout << "Ingrese el segundo numero (y): ";
    cin >> y;

    IntercambiarValores(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

void IntercambiarValores(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}