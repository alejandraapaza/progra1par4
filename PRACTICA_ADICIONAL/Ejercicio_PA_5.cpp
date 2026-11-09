// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void modificador (vector<string> &mensaje);

int main ()
{

    vector<string> mensaje = {"Hola", "mis", "amigos"};

    modificador(mensaje);

    cout << "El mensaje modificado es: " << endl;

    for (int i = 0; i < mensaje.size(); i++)
    {
        cout << mensaje[i] << " ";

    }


    return 0;
}

void modificador (vector<string> &mensaje)
{
    for (int i = 0; i < mensaje.size(); i++)
    {
        string invertida = "";

        for (int j = mensaje[i].size() - 1; j >= 0 ; j--)
        {
            invertida += mensaje[i][j];
        }

        mensaje[i] = invertida;
    }

}
