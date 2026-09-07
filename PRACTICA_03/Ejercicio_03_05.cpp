// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 06/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int numeroSecreto = 1 + rand() % 100;
    
    int numero;
    int intentos = 0;

    cout << "Adivina un numero entre 1 y 100: ";

    do
    {
        cout << "Ingresa tu numero: ";
        cin >> numero;

        intentos++;

        if (numero < numeroSecreto)
        {
            cout << "El numero secreto es MAYOR" << endl;
        }
        else if (numero > numeroSecreto)
        {
            cout << "El numero secreto es MENOR" << endl;
        }
        else
        {
            cout << "Adivinaste el numero secreto: " << numeroSecreto << endl;
        }

    } while (numero != numeroSecreto);

    cout << "Numero total de intentos: " << intentos << endl;

    return 0;
}