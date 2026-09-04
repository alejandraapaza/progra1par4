// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main ()
{

    int numero;
    cout <<"Ingrese un numero: ";
    cin >> numero;

    int noriginal = numero;

    int digitos = 0;
    int suma = 0;

    if (noriginal == 0)
    {
        digitos = 1;
        suma = 0;
    }

    while (numero > 0)
    {
        int ultimoDigito = numero % 10;
        suma += ultimoDigito;
        digitos++;
        numero /= 10;
    }

    cout << "El numero " << noriginal << " tiene " << digitos << " digitos" << " y la suma de estos es: " << suma << endl;

    return 0;
}
