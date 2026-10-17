// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 17/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>

using namespace std;

void vec();

int main()
{
    vec();
    return 0;
}

void vec()
{
    vector<float> voltios{11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "Voltios:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << voltios[i * 3 + j] << "\t";
        }
        cout << endl;
    }
}
