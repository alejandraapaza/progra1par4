// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>

using namespace std;
void correos_validos (int n, vector<string> &correos);

int main ()
{

    int n = 10;
    vector<string> correos;

    cout << "Ingrese sus " << n << " correos " << endl;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cout << "Correo " << i + 1 << ": ";
        cin >> temp;

        correos.push_back(temp);
    }

    cout << "CORREOS INGRESADOS" << endl;

    for (int i = 0; i < correos.size(); i++)
    {
        cout << correos[i] << endl;
    }

    correos_validos(n, correos);

    return 0;
}

void correos_validos (int n, vector<string> &correos)
{
    int numvalidos = 0;
    vector<string> validos;
    bool esvalido = false;

    for (int i = 0; i < correos.size(); i++)
    {
        int posarroba = correos[i].rfind('@');

        if (posarroba != string::npos && correos[i][posarroba + 1] != '.' && correos[i][correos[i].length()-1] != '.' && correos[i].substr(posarroba) == "@ucb.edu.bo")
        {
            esvalido = true;
            numvalidos ++;
            validos.push_back(correos[i]);
        }

    }
        cout << "CORREOS VALIDOS" << endl;
        cout << "Num de correos validos: " << numvalidos << endl;

        if (numvalidos == 0)
        {
            cout << "No se encontro ningun correo valido" << endl;
        }

        else
        {
            for (int j = 0; j < validos.size(); j++)
            cout << "Correo " << j + 1 << ": " << validos[j] << endl;
        }

}