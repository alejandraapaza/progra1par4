// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <string>


using namespace std;
vector<string> usuario (const vector<string> &nombres, const vector<string> &apellidos);

int main ()
{

    vector<string> nombres = {"Alejandra", "Lola", "Ema", "Paola", "Lucy"};
    vector<string> apellidos = {"Lopez", "Gomez", "Junior", "Poniente", "Flores"};

    vector<string> resultados = usuario(nombres, apellidos);

    cout << "NOMBRES DE USUARIO" << endl;

    for (int i = 0; i < resultados.size(); i++)
    {
        cout << resultados[i] << endl;
    }

    return 0;
}

vector<string> usuario (const vector<string> &nombres, const vector<string> &apellidos)
{

    vector<string> usuarios;
    for (int i = 0; i < nombres.size(); i++)
    {
        string temp = "";
        temp += tolower(nombres[i][0]);

        string apellido_min = "";
        for (int j = 0; j < apellidos[i].size(); j++)
        {
            apellido_min += tolower(apellidos[i][j]);

        }

        usuarios.push_back(temp + apellido_min);
    }

    return usuarios;
}