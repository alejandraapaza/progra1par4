// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 17/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> vector1(5, 0);
    vector<int> vector2(5, 0);
    vector<int> vector3(5, 0);

    cout << "\nDATOS DEL VECTOR 1\n" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Ingrese el valor de la posicion " << i << ": ";
        cin >> vector1[i];
    }

    cout << "\nDATOS DEL VECTOR 1 VECTOR 2\n" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Ingrese el valor de la posicion " << i << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < 5; i++) 
    {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "\nRESULTADO DEL VECTOR 3 (vector1 + vector2)" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}