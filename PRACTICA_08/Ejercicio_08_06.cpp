// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <string>

using namespace std;

string limpiarEspacios(const string& texto);

int main()
{
    string mensaje;

    cout << "  \nLIMPIADOR DE ESPACIOS " << endl;
    cout << "Ingrese el texto con espacios extra: ";
    getline(cin, mensaje);

    string mensajeLimpio = limpiarEspacios(mensaje);

    cout << "Resultado: \"" << mensajeLimpio << "\"" << endl;

    return 0;
}

string limpiarEspacios(const string& texto)
{
    if (texto.length() == 0)
    {
        return "";
    }

    int inicio = 0;
    while (inicio < texto.length() && texto[inicio] == ' ')
    {
        inicio++;
    }

    if (inicio == texto.length())
    {
        return "";
    }

    int fin = texto.length() - 1;
    while (fin >= 0 && texto[fin] == ' ')
    {
        fin--;
    }

    string resultado = "";

    for (int i = inicio; i <= fin; i++)
    {
        if (texto[i] != ' ')
        {
            resultado += texto[i];
        }
        else
        {

            if (resultado[resultado.length() - 1] != ' ')
            {
                resultado += ' ';
            }
        }
    }

    return resultado;
}