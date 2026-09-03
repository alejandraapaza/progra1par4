// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 03/09/2026

// Escriba la siguiente expresion matematica como expresion c++: 
// a + (b/(c-d))

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, resultado;
    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;
    cout << "Ingrese el valor de d: "; cin >> d;

    resultado = a + (b / (c - d));

    cout.precision(2);
    cout << "El resultado de la expresion a + (b / (c - d)) es: " << resultado << endl;
}