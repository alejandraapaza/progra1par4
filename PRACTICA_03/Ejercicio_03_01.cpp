// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>

using namespace std;

int main ()
{
    int n;
    int multi = 0;

    cout << "Ingrese un numero del 1 al 10: ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        multi = i * n;
        
        cout << n << " * " << i << " = " << multi << endl;
    }
    
    return 0;
}