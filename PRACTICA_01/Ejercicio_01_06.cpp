// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "El numero: " << num << " es par" << endl;
    }
    else
    {
        cout << "El numero: " << num << " es impar" << endl;
    }

    return 0;
}



