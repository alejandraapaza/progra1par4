// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Serie descendente: ";
        for (int i = num1; i >= num2; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else if (num1 < num2)
    {
        cout << "Serie ascendente: ";
        for (int i = num1; i <= num2; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Los numeros deben ser distintos entre si " << endl;
    }

    return 0;
}