// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separarPalabras(const string& texto);
bool verificarPlagio(const string& oracionA, const string& oracionB);

int main()
{
    string oracionA, oracionB;

    cout << "  \nVERIFICADOR DE PLAGIO  " << endl;
    cout << "Ingrese la Oracion A: ";
    getline(cin, oracionA);
    
    cout << "Ingrese la Oracion B: ";
    getline(cin, oracionB);

    if (verificarPlagio(oracionA, oracionB))
    {
        cout << "\nAlerta de plagio: Verdadero\n";
    }
    else
    {
        cout << "\nAlerta de plagio: Falso\n";
    }

    return 0;
}

vector<string> separarPalabras(const string& texto)
{
    vector<string> palabras;
    string palabraActual = "";
    int i = 0;

    while (i < texto.length())
    {
        if (texto[i] != ' ')
        {
            palabraActual += texto[i];
        }
        else
        {
            if (palabraActual.length() > 0)
            {
                palabras.push_back(palabraActual);
                palabraActual = "";
            }
        }
        i++;
    }

    if (palabraActual.length() > 0)
    {
        palabras.push_back(palabraActual);
    }

    return palabras;
}

bool verificarPlagio(const string& oracionA, const string& oracionB)
{
    vector<string> palabrasA = separarPalabras(oracionA);
    vector<string> palabrasB = separarPalabras(oracionB);
    
    int coincidencias = 0;

    for (int i = 0; i < palabrasA.size(); i++)
    {
        string palabraBuscada = palabrasA[i];
        bool encontrada = false;

        for (int j = 0; j < palabrasB.size(); j++)
        {
            if (!encontrada)
            {
                if (palabraBuscada == palabrasB[j])
                {
                    encontrada = true;
                }
            }
        }

        if (encontrada)
        {
            coincidencias++;
        }
    }

    return (coincidencias > 3);
}