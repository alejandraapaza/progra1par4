// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 06/09/2026

// Escriba un programa que tome cada 4 horas la temperatura exterior,
// leyendola durante un periodo de 24 horas, es decir, debe leer 6 temperaturas.
// Calcule la temperatura media del dia, la tempearatura mas alta y la mas baja.

#include <iostream>

using namespace std;

int main ()
{
    float temperatura;
    float sumaTemp = 0;
    float maxima;
    float minima;

    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingrese la temperatura: ";
        cin >> temperatura;

        sumaTemp += temperatura;

        if (i == 1)
        {
            maxima = temperatura;
            minima = temperatura;
        }
        else
        {
            if (temperatura > maxima)
            {
                maxima = temperatura;
            }
            if (temperatura < minima)
            {
                minima = temperatura;
            }
        }
    }

    float media = sumaTemp / 6;

    cout << "\nRESULTADOS" << endl;
    cout << "Temperatura media: " << media << " grados" << endl;
    cout << "Temperatura mas alta: " << maxima << " grados" << endl;
    cout << "Temperatura mas baja: " << minima << " grados" << endl;

    return 0;
}