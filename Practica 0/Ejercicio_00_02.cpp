// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 03/09/2026

// Realice un programa estandar los siguientes datos de una persona:
// Edad: Dato de tipo entero
// Sexo: Dato de tipo carácter
// Altura: Dato de tipo real

// Tras leer los datos, el programa debe mostrarlos en la salida estandar.

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;

    cout <<"Ingrese su edad: "; cin >> edad;
    cout <<"Ingrese su sexo: "; cin >> sexo;
    cout <<"Ingrese su altura: "; cin >> altura;

    cout << "\n DATOS INGRESADOS \n " << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;

    return 0;
}
