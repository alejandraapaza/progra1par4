// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 4?

#include <iostream>

using namespace std;

float CalcularPrecioTotal(float precioBase, float impuesto = 13.0);

int main()
{
    float precio;

    cout << "Ingrese el precio base del producto (Bs): ";
    cin >> precio;

    float totalConIVA = CalcularPrecioTotal(precio);
    cout << "Precio total con IVA por defecto (13%): " << totalConIVA << " Bs" << endl;

    float totalEspecial = CalcularPrecioTotal(precio, 18.0);
    cout << "Precio total con impuesto especial (18%): " << totalEspecial << " Bs" << endl;

    return 0;
}

float CalcularPrecioTotal(float precioBase, float impuesto)
{
    float montoImpuesto = precioBase * (impuesto / 100.0);
    return precioBase + montoImpuesto;
}