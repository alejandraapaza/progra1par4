// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

float convertirADolares(float bolivianos, float tipoCambio);

int main()
{
    float montoBs;
    const float TC_OFICIAL = 6.96f;
    const float TC_PARALELO = 12.00f;

    cout << "Conversor de Bolivianos a Dolares" << endl;
    cout << "Ingrese el monto en Bolivianos (Bs): ";
    cin >> montoBs;

    cout << "\nTipo de cambio Oficial (" << TC_OFICIAL << " Bs):" << endl;
    cout << "Dolares: $" << convertirADolares(montoBs, TC_OFICIAL) << " USD" << endl;

    cout << "\nTipo de cambio Paralelo (" << TC_PARALELO << " Bs):" << endl;
    cout << "Dolares: $" << convertirADolares(montoBs, TC_PARALELO) << " USD" << endl;

    return 0;
}

float convertirADolares(float bolivianos, float tipoCambio)
{
    return bolivianos / tipoCambio;
}