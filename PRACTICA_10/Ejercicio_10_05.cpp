// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 19/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

void OrdenarBurbujaString(string &palabra);

int main()
{
    string palabra;

    cout << "\nIngrese una palabra: ";
    cin >> palabra;

    OrdenarBurbujaString(palabra);

    cout << "Resultado: " << palabra << endl;

    return 0;
}

void OrdenarBurbujaString(string &palabra)
{
    int n = palabra.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (palabra[j] > palabra[j + 1])
            {
                char temp = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = temp;
            }
        }
    }
}