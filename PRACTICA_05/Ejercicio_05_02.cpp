// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;

void ModificarValores(int a, int &b);

int main()
{
    int x, y;

    cout << "Ingrese el primer numero (por valor): ";
    cin >> x;

    cout << "Ingrese el segundo numero (por referencia): ";
    cin >> y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    ModificarValores(x, y);

    cout << "x = " << x << " (sin cambios, era por valor)" << endl;
    cout << "y = " << y << " (cambio, era por referencia)" << endl;

    return 0;
}

void ModificarValores(int a, int &b)
{
    a = a * 2;
    b = b + 10;
}