// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main ()

{
    float precio;
    float IVA = 0.13;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    float precioFinal = precio + (precio * IVA);

    cout.precision(2);
    cout << "El precio del producto con IVA es: " << precioFinal << endl;

    return 0;
}