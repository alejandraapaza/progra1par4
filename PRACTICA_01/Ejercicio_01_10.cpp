// Materia: Programación I, Paralelo 4
// Autor: Apaza Ticona Alejandra
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2026

#include <iostream>

using namespace std;

int main ()
{
    int meses;
    cout << " \n MESES DEL ANIO \n " << endl;
    cout << " Enero "<< endl;
    cout << " Febrero "<< endl;
    cout << " Marzo "<< endl;
    cout << " Abril "<< endl;
    cout << " Mayo "<< endl;
    cout << " Junio "<< endl;
    cout << " Julio "<< endl;
    cout << " Agosto "<< endl;
    cout << " Septiembre "<< endl;
    cout << " Octubre "<< endl;
    cout << " Noviembre "<< endl;
    cout << " Diciembre "<< endl;

    cout << "\n Ingrese un numero para saber el mes correspondiente: ";
    cin >> meses;

    switch (meses)
    {
        case 1:
        {
            cout << "Es Enero" << endl;
            break;
        }
        case 2:
        {
            cout << "Es Febrero" << endl;
            break;
        }
        case 3:
        {
            cout << "Es Marzo" << endl;
            break;
        }
        case 4:
        {
            cout << "Es Abril" << endl;
            break;
        }
        case 5:
        {
            cout << "Es Mayo" << endl;
            break;
        }
        case 6:
        {
            cout << "Es Junio" << endl;
            break;
        }
        case 7:
        {
            cout << "Es Julio" << endl;
            break;
        }
        case 8:
        {
            cout << "Es Agosto" << endl;
            break;
        }
        case 9:
        {
            cout << "Es Septiembre" << endl;
            break;
        }
        case 10:
        {
            cout << "Es Octubre" << endl;
            break;
        }
        case 11:
        {
            cout << "Es Noviembre" << endl;
            break;
        }
        case 12:
        {
            cout << "Es Diciembre" << endl;
            break;
        }
        default:
        {
            cout << "ERROR: Ingrese un numero entre el 1 y el 12" << endl;
            break;
        }
    }

    return 0;
}

