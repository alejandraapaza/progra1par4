// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> extraerHashtags(const string& texto);

int main()
{
    string mensaje;

    cout << "  \nEXTRACTOR DE HASHTAGS" << endl;
    cout << "Ingrese el texto: ";
    getline(cin, mensaje);

    vector<string> hashtags = extraerHashtags(mensaje);

    cout << "\nLista de hashtags: " << endl;
    for (int i = 0; i < hashtags.size(); i++)
    {
        cout << hashtags[i] << "\n";
    }

    return 0;
}

vector<string> extraerHashtags(const string& texto)
{
    vector<string> listaHashtags;
    int i = 0;

    while (i < texto.length())
    {
        if (texto[i] == '#')
        {
            string hashtagActual = "";
            
            hashtagActual += texto[i];
            
            i++;

            while (i < texto.length() && texto[i] != ' ')
            {
                hashtagActual += texto[i];
                i++;
            }

            listaHashtags.push_back(hashtagActual);
        }
        else
        {
            i++;
        }
    }

    return listaHashtags;
}