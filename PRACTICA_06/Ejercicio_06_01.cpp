// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 09/09/2026

// Escriba una funcion nombrada cambio () que tenga un parametro en un numero entero y seis parametros
// de referencia en numero entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente.
// La funcion tiene que considerar el valor entero transmitido como una cantidad en dolares y convertir
// el valor en el numero menor de billetes equivalentes

#include <iostream>

using namespace std;

void cambio(int total, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno);

int main()
{
    int dolares;
    int c100, c50, c20, c10, c5, c1;

    cout << "Ingrese la cantidad en dolares: ";
    cin >> dolares;

    cambio(dolares, c100, c50, c20, c10, c5, c1);

    cout << "Billetes de 100: " << c100 << endl;
    cout << "Billetes de 50:  " << c50 << endl;
    cout << "Billetes de 20:  " << c20 << endl;
    cout << "Billetes de 10:  " << c10 << endl;
    cout << "Billetes de 5:   " << c5 << endl;
    cout << "Billetes de 1:   " << c1 << endl;

    return 0;
}

void cambio(int total, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cien = total / 100;
    total = total % 100;

    cincuenta = total / 50;
    total = total % 50;

    veinte = total / 20;
    total = total % 20;

    diez = total / 10;
    total = total % 10;

    cinco = total / 5;
    total = total % 5;

    uno = total;
}