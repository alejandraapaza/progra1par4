// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main()
{
    int anio;
    cout << "Ingrese el anio: ";
    cin >> anio;

    if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
    {
        cout << "El anio: " << anio << " es bisiesto" << endl;

    }
    else
    {
        cout << "El anio: " << anio << " no es bisiesto" << endl;
    }

    return 0;
}