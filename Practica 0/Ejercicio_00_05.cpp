// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 03/09/2026

// Escriba un programa que lea la nota final de cuatro alumnos
// y calcule la nota final media de los cuatro alumnos (promedio)

#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, promedio;

    cout << "Ingrese la nota final del primer alumno: "; cin >> nota1;
    cout << "Ingrese la nota final del segundo alumno: "; cin >> nota2;
    cout << "Ingrese la nota final del tercer alumno: "; cin >> nota3;
    cout << "Ingrese la nota final del cuarto alumno: "; cin >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    cout.precision(2);
    cout << "El promedio de las notas finales de los cuatro alumnos es: " << promedio << endl;

    return 0;
}
