// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void censurarMensaje(string& mensaje, const vector<string>& prohibidas);

int main()
{
    string mensaje;
    vector<string> prohibidas = {"manco", "tonto", "noob"};

    cout << "  \nVERIFICADOR DE MENSAJES  " << endl;
    cout << "Mensaje original: ";
    getline(cin, mensaje);

    censurarMensaje(mensaje, prohibidas);

    cout << "Mensaje procesado: " << mensaje << endl;

    return 0;
}

void censurarMensaje(string& mensaje, const vector<string>& prohibidas)
{
    for (int i = 0; i < prohibidas.size(); i++)
    {
        string palabra = prohibidas[i];
        
        size_t pos = mensaje.find(palabra);

        while (pos != string::npos)
        {
            mensaje.replace(pos, palabra.length(), string(palabra.length(), '*'));
            
            pos = mensaje.find(palabra, pos + palabra.length());
        }
    }
}