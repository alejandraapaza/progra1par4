// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 09/09/2026

// Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total
//  de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. 
// La función es calcular el año, mes y día actual para el número dado de días que se le transmitan. 
// Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.

#include <iostream>

using namespace std;

void calc_anios(int totalDias, int &anio, int &mes, int &dia);

int main()
{
    int diasTotales;
    int a;
    int m;
    int d;

    cout << "Ingrese el numero de dias desde el 1/1/2000: ";
    cin >> diasTotales;

    calc_anios(diasTotales, a, m, d);

    cout << "Anio: " << a << endl;
    cout << "Mes:  " << m << endl;
    cout << "Dia:  " << d << endl;

    return 0;
}

void calc_anios(int totalDias, int &anio, int &mes, int &dia)
{
    anio = 2000 + (totalDias / 365);
    totalDias = totalDias % 365;

    mes = 1 + (totalDias / 30);
    totalDias = totalDias % 30; 

    dia = 1 + totalDias;
}