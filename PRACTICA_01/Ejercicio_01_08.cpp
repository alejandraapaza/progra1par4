// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main()
{

    int nota;
    cout << "Ingrese la nota: ";
    cin >> nota;

    while (nota < 0 || nota > 100)
    {
        cout << "ERROR: Ingrese una nota entre 0 y 100: ";
        cin >> nota;
    }

    cout << "Nota registrada correctamente" << endl;

    return 0;

}