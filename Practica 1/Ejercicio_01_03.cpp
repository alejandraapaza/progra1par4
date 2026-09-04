// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su sexo (Masculino/Femenino): ";
    cin >> sexo;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    cout << "\n RESULTADOS \n";
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;

}