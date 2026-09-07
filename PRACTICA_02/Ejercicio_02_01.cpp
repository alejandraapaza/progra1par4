// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera: Diseño Digital
// Fecha de Creación: 06/09/2026

// Realice un programa que lea de la entrada estandar numeros hasta que
// se introduzca un cero. En ese momento el programa debe terminar y mostrar
// en la salida estandar el numero de valores mayores que cero leidos.


#include <iostream>

using namespace std;

int main ()
{
    int numero;
    int mayores = 0;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero > 0)
        {
            mayores++;
        }

    } while (numero != 0);

    cout << "\nCantidad de numeros mayores que cero ingresados: " << mayores << endl;

    return 0;
}