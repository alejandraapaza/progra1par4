// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int invertido = 0;
    int temp = numero;

    while (temp > 0) 
    {
        int digito = temp % 10;
        invertido = (invertido * 10) + digito;
        temp = temp / 10;
    }

    while (invertido > 0) 
    {
        int d = invertido % 10;

        cout << endl;

        for (int fila = 0; fila < d; fila++) 
        {
            for (int col = 0; col < d; col++) 
            {
                cout << d << " ";
            }
            cout << endl;
        }

        invertido = invertido / 10;
    }

    return 0;
}