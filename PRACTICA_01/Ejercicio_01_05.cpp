// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero estre el 1 y el 7: ";
    cin >> num;

    switch (num)
    {
        case 1:
        {
            cout << "Es Lunes" << endl;
            break;
        }
        case 2:
        {
            cout << "Es Martes" << endl;
            break;
        }
        case 3:
        {
            cout << "Es Miércoles" << endl;
            break;
        }
        case 4:
        {
            cout << "Es Jueves" << endl;
            break;
        }
        case 5:
        {
            cout << "Es Viernes" << endl;
            break;
        }
        case 6:
        {
            cout << "Es Sabado" << endl;
            break;
        }
        case 7:
        {
            cout << "Es Domingo" << endl;
            break;
        }
        default:
        {
            cout << "ERROR: Ingrese un numero entre el 1 y el 7" << endl;
            break;
        }
    }

    return 0;
}
