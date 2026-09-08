// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

const float PI = 3.14159f;

float volumenCilindro(float radio, float altura);

int main()
{
    float r, h;

    cout << "Ingrese el radio del cilindro: ";
    cin >> r;

    cout << "Ingrese la altura del cilindro: ";
    cin >> h;

    cout << "El volumen del cilindro es: " << volumenCilindro(r, h) << endl;

    return 0;
}

float volumenCilindro(float radio, float altura)
{
    float volumen = PI * radio * radio * altura;
    return volumen;
}