// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 12

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int calcularPanales(int n, int &ninos1, int &ninos2, int &ninos3);

int main()
{
    srand(time(0));

    int n;
    int n1 = 0, n2 = 0, n3 = 0;

    cout << "Ingrese la cantidad de ninos: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "La cantidad debe ser mayor a 0" << endl;
        return 0;
    }

    int totalPanales = calcularPanales(n, n1, n2, n3);

    cout << "\nDistribucion aleatoria de los " << n << " ninos:" << endl;
    cout << "Ninos de 1 ano: " << n1 << endl;
    cout << "Ninos de 2 anos: " << n2 << endl;
    cout << "Ninos de 3 anos: " << n3 << endl;

    cout << "\nConsumo total diario:" << endl;
    cout << "(" << n1 << " x 6) + (" << n2 << " x 3) + (" << n3 << " x 2) = " << totalPanales << " PANALES" << endl;

    return 0;
}

int calcularPanales(int n, int &ninos1, int &ninos2, int &ninos3)
{
    ninos1 = rand() % (n + 1);

    int restante = n - ninos1;

    if (restante > 0)
    {
        ninos2 = rand() % (restante + 1);
    }
    else
    {
        ninos2 = 0;
    }

    ninos3 = n - ninos1 - ninos2;

    return (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2);
}
