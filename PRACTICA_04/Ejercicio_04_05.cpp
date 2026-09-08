// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

bool esPar(int numero);

int main()
{
    int num;

    cout << "Ingrese su numero: ";
    cin >> num;

    bool resultado = esPar(num);

    if (resultado == true)
    {
        cout << "El numero " << num << " es PAR" << endl;
    }
    else
    {
        cout << "El numero " << num << " es IMPAR" << endl;
    }

    return 0;
}

bool esPar(int numero)
{
    if (numero % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}