// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main ()

{
    float notaPracticas, notaTeorica, notaParticipacion;

    cout << "Ingrese la nota de las practicas: ";
    cin >> notaPracticas;

    cout << "Ingrese la nota teorica: ";
    cin >> notaTeorica;

    cout << "Ingrese la nota de participacion: ";
    cin >> notaParticipacion;

    float notaFinal = (notaPracticas * 0.3) + (notaTeorica * 0.6) + (notaParticipacion * 0.1);

    cout.precision(2);
    cout << "La nota final es: " << notaFinal << endl;

    return 0;
}



