// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 03/09/2026

// Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA.
#include <iostream>

using namespace std;

int main()
{
    float precio, precioFinal;
    float IVA = 0.13;

    cout << "Ingrese el precio del producto: "; cin >> precio;
    precioFinal = precio + (precio * IVA);
    cout << "El precio del producto con IVA es: " << precioFinal << endl;

    return 0;
}
