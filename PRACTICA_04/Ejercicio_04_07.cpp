// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

float distancia (float v, float t);

int main ()
{

    float velocidad;
    float tiempo;

    cout << "Ingrese la velocidad: ";
    cin >> velocidad;
    
    cout << "Ingrese el tiempo: ";
    cin >> tiempo;

    cout << "La distancia del objeto es: " << distancia (velocidad, tiempo) << endl;

    return 0;

}

float distancia(float v,float t)
{

    int d = 0;

    d = (v * t);

    return (d);

}
