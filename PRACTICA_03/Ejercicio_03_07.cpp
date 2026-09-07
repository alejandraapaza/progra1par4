// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>

using namespace std;

int main()
{
    int num;
    int sumaDivisores = 0;

    cout << "Ingrese su numero: ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sumaDivisores += i;
        }
    }

    if (sumaDivisores == num)
    {
        cout << "El numero " << num << " es perfecto" << endl;
    }
    else
    {
        cout << "El numero " << num << " NO es perfecto" << endl;
    }

    return 0;
}