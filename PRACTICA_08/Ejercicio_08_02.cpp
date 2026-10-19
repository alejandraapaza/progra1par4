// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <string>

using namespace std;

bool verificador (const string& contrasena);

int main()
{
    string contrasena;
    
    cout << "  \nVERIFICADOR DE CONTRASENAS " << endl;
    cout << "Ingrese su contrasena: ";
    cin >> contrasena;

    if (verificador(contrasena))
    {
        cout << "Contrasena segura" << endl;
    }
    else
    {
        cout << "Contrasena vulnerable" << endl;
    }

    return 0;
}

bool verificador (const string& contrasena)
{
    if (contrasena.length() < 8)
    {
        return false;
    }

    bool mayuscula = false;
    bool minuscula = false;
    bool numero = false;
    bool especial = false;

    for (int i = 0; i < contrasena.length(); i++)
    {
        char c = contrasena[i];

        if (c >= 'A' && c <= 'Z')
        {
            mayuscula = true;
        }
        else if (c >= 'a' && c <= 'z')
        {
            minuscula = true;
        }
        else if (c >= '0' && c <= '9')
        {
            numero = true;
        }
        else
        {
            especial = true;
        }
    }
    return mayuscula && minuscula && numero && especial;
}