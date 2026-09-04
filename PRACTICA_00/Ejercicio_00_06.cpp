// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 03/09/2026

// Escriba un programa que lea la entrada estandar de dos catetos de un triangulo rectangulo
// y escriba en la salida estandar su hipotenusa.

#include <iostream>
#include <cmath>

using namespace std;

int main ()

{

    float cateto1, cateto2, hipotenusa;

    cout << "Ingrese el valor del primer cateto: "; cin >> cateto1;
    cout << "Ingrese el valor del segundo cateto: "; cin >> cateto2;

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}