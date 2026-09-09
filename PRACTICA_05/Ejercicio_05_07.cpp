#include <iostream>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main()
{
    double suma = 0.0;
    int cantidad = 0;
    int n;

    cout << "Ingrese la cantidad de notas a registrar: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double nota;
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;

        agregarNota(suma, cantidad, nota);
    }

    cout << "\nResultados:" << endl;
    cout << "Cantidad total de notas: " << cantidad << endl;
    cout << "Suma total: " << suma << endl;

    if (cantidad > 0)
    {
        cout << "Promedio final: " << (suma / cantidad) << endl;
    }

    return 0;
}

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal += nuevaNota;
    cantidadNotas++;
}