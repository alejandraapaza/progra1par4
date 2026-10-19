// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <string>

using namespace std;

bool validarTarjetaLuhn(const string& tarjeta);

int main()
{
    string tarjeta;

    cout << "  \nVALIDEZ DE TARJETA DE CREDITO  " << endl;
    cout << "Ingrese los 16 digitos de la tarjeta: ";
    cin >> tarjeta;

    if (tarjeta.length() != 16)
    {
        cout << "Error: La tarjeta debe tener exactamente 16 digitos.\n";
    }
    else
    {
        if (validarTarjetaLuhn(tarjeta))
        {
            cout << "Tarjeta valida\n";
        }
        else
        {
            cout << "Tarjeta invalida\n";
        }
    }

    return 0;
}

bool validarTarjetaLuhn(const string& tarjeta)
{
    int suma = 0;
    bool duplicar = false;
    for (int i = 15; i >= 0; i--)
    {
        int digito = tarjeta[i] - '0';

        if (duplicar)
        {
            digito = digito * 2;
            if (digito > 9)
            {
                digito = digito - 9;
            }
        }

        suma += digito;
        duplicar = !duplicar;
    }

    return (suma % 10 == 0);
}