// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

float areaTriangulo(float base, float altura);

int main()
{
    float b;
    float h;

    cout << "Ingrese la base: ";
    cin >> b;

    cout << "Ingrese la altura: ";
    cin >> h;

    cout << "El area del triangulo es: " << areaTriangulo(b, h) << endl;

    return 0;
}

float areaTriangulo(float base, float altura)
{
    return (base * altura) / 2;
}