// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void sufijo (const vector<string> &palabras, string letras);

int main()
{
    vector<string> palabras = {"amor", "loco", "cancion", "polilla", "accion", "pasion", "poblacion", "sopa", "pollo", "erupcion"};
    vector<string> sufijos;
    string letras;

    cout << "ingrese las letras a buscar: ";
    cin >> letras;

    sufijo (palabras, letras);

    return 0;
}

void sufijo (const vector<string> &palabras, string letras)
{
    vector<string> palabrasencontradas;

    for (int i = 0; i < palabras.size(); i++)
    {
        if (palabras[i].size() >= 4)
        {
            string palabrabuscada = palabras[i].substr(palabras[i].size() - 4);

            if (palabrabuscada == letras)
            {
                palabrasencontradas.push_back(palabras[i]);
            }
        }

    }

    cout << "Palabras encontradas: " << endl;

    for (int i = 0; i < palabrasencontradas.size(); i++)
    {
        cout << i + 1 << ". " << palabrasencontradas[i] << endl;
    }

}