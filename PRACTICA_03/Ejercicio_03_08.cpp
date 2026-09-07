// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int n;
    cout << "Ingrese la cantidad de productos vendidos en el dia: ";
    cin >> n;

    float totalDinero = 0;
    float totalIVA = 0;
    float totalDescuentos = 0;

    float masCaro = 0;
    float masBarato = 0;

    for (int i = 1; i <= n; i++)
    {
        float precio = 10 + rand() % (10000 - 10 + 1);

        float utilidad = precio * 0.87;
        float impuesto = precio * 0.13;
        float descuento = 0;

        if (precio > 2500)
        {
            descuento = precio * 0.05;
        }

        float precioFinal = precio - descuento;

        totalDinero += precioFinal;
        totalIVA += impuesto;
        totalDescuentos += descuento;

        if (i == 1)
        {
            masCaro = precioFinal;
            masBarato = precioFinal;
        }
        else
        {
            if (precioFinal > masCaro)
            {
                masCaro = precioFinal;
            }
            if (precioFinal < masBarato)
            {
                masBarato = precioFinal;
            }
        }

        cout << "Producto " << i << ": Base = " << precio 
             << " Bs IVA = " << impuesto 
             << " Bs Desc = " << descuento 
             << " Bs Final = " << precioFinal << " Bs" << endl;
    }

    cout << "\nREPORTE DE VENTAS - LA ESTRELLA\n" << endl;
    cout << "Total de dinero ingresado: " << totalDinero << " Bs" << endl;
    cout << "Monto total IVA a declarar (13%): " << totalIVA << " Bs" << endl;
    cout << "Monto total descontado a clientes: " << totalDescuentos << " Bs" << endl;
    cout << "Producto mas caro vendido: " << masCaro << " Bs" << endl;
    cout << "Producto mas barato vendido: " << masBarato << " Bs" << endl;

    return 0;
}