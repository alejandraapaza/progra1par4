// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Fecha creación: 08/09/2026
// Número de ejercicio: 5

#include <iostream>

using namespace std;

const float PI_VALOR = 3.14159;

double calcularArea(double lado);
double calcularArea(double base, double altura);
float calcularArea(float radio, float pi);

int main()
{
    int opcion;

    cout << "Calcular el area de: " << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Circulo" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    if (opcion == 1)
    {
        double lado;
        cout << "\nIngrese el lado del cuadrado: ";
        cin >> lado;

        cout << "El area del cuadrado es: " << calcularArea(lado) << endl;
    }
    else if (opcion == 2)
    {
        double base, altura;
        cout << "\nIngrese la base del rectangulo: ";
        cin >> base;
        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;

        cout << "El area del rectangulo es: " << calcularArea(base, altura) << endl;
    }
    else if (opcion == 3)
    {
        float radio;
        cout << "\nIngrese el radio del circulo: ";
        cin >> radio;

        cout << "El area del circulo es: " << calcularArea(radio, PI_VALOR) << endl;
    }
    else
    {
        cout << "Opcion no valida" << endl;
    }

    return 0;
}


double calcularArea(double lado)
{
    return lado * lado;
}

double calcularArea(double base, double altura)
{
    return base * altura;
}

float calcularArea(float radio, float pi)
{
    return pi * radio * radio;
}