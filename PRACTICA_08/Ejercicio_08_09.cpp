// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void buscarContactos(const vector<string>& contactos, const string& prefijo);
char aMinuscula(char c);

int main()
{
    vector<string> contactos = {"Marcelo", "Maria", "Martin", "Juan", "Marcos"};
    string prefijo;

    cout << "  \nBUSCADOR DE CONTACTOS  " << endl;
    cout << "Ingrese el prefijo de busqueda (3 letras): ";
    cin >> prefijo;

    buscarContactos(contactos, prefijo);

    return 0;
}

char aMinuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

void buscarContactos(const vector<string>& contactos, const string& prefijo)
{
    cout << "\nResultados: ";
    bool hayResultados = false;

    for (int i = 0; i < contactos.size(); i++)
    {
        string nombre = contactos[i];

        if (nombre.length() >= prefijo.length())
        {
            bool coincide = true;

            for (int j = 0; j < prefijo.length(); j++)
            {
                if (aMinuscula(nombre[j]) != aMinuscula(prefijo[j]))
                {
                    coincide = false;
                }
            }

            if (coincide)
            {
                if (hayResultados)
                {
                    cout << ", ";
                }
                cout << nombre;
                hayResultados = true;
            }
        }
    }

    if (!hayResultados)
    {
        cout << "Ninguno encontrado";
    }
    cout << endl;
}