// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 6

#include <iostream>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main()
{
    int totalSeg;
    int h = 0;
    int m = 0;
    int s = 0;

    cout << "Ingrese la cantidad total de segundos: ";
    cin >> totalSeg;

    calcularTiempo(totalSeg, h, m, s);

    cout << "\nTiempo equivalente:" << endl;
    cout << h << " hora(s) / " << m << " minuto(s) / " << s << " segundo(s) " << endl;

    return 0;
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
}