// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

int cantidadDigitos(int num);

int main()
{
    int n;

    cout << "Ingrese su numero: ";
    cin >> n;

    cout << "El numero tiene " << cantidadDigitos(n) << " digitos" << endl;

    return 0;
}

int cantidadDigitos(int num)
{
    int contador = 0;

    if (num == 0)
    {
        return 1;
    }

    while (num > 0)
    {
        num = num / 10;
        contador++;
    }

    return contador;
}