// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 08/11/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void simulador (const vector<string> &partidos, vector<int> &votos, int n);

int main ()
{
    vector<string> partidos = {"PDC", "LIBRE", "MAS", "UN"};
    vector<int> votos (4,0);

    int n;

    cout << "Ingrese la cantidad de los votantes: ";
    cin >> n;

    simulador(partidos, votos, n);

    return 0;
}

void simulador (const vector<string> &partidos, vector<int> &votos, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nVotante: " << i + 1 << endl;
        cout << "MENU DE PARTIDOS" << endl;

        for (int p = 0; p < partidos.size(); p++)
        {
            cout << p + 1 << ". " << partidos[p] << endl; 
        }

        int opcion;
        cout << "Elija el partido por quien desse votar(1-4): ";
        cin >> opcion;

        switch(opcion)
        {
            case 1: votos[0]++; break;
            case 2: votos[1]++; break;
            case 3: votos[2]++; break;
            case 4: votos[3]++; break;

            default:
                cout << "Voto invalido" << endl;
                i--;
                break;

        }
    }

    int mayorvotos = votos[0];
    int ganador = 0;

    for (int i = 0; i < votos.size(); i++)
    {
        if (votos[i] > mayorvotos)
        {
            mayorvotos = votos[i];
            ganador = i;
        }
    }

    cout << "El ganador es: " << partidos[ganador] << " con " << mayorvotos << " votos" << endl;

}