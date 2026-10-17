// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 17/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;

void ingresarNumeros(vector<int>& numeros, int& cantidad);
void mostrarNumeros(const vector<int>& numeros, int cantidad);

int main() 
{
    vector<int> numeros(100, 0);
    int cantidad = 0;

    ingresarNumeros(numeros, cantidad);
    mostrarNumeros(numeros, cantidad);

    return 0;
}

void ingresarNumeros(vector<int>& numeros, int& cantidad)
{
    int num;
    bool continuar = true;

    cout << "\nINGRESO DE NUMEROS\n";
    cout << "Ingrese numeros enteros (un negativo para detenerse):\n";

    while (cantidad < 100 && continuar) 
    {
        cout << "Numero [" << cantidad << "]: ";
        cin >> num;

        if (num < 0) 
        {
            continuar = false;
        } 
        else 
        {
            numeros[cantidad] = num;
            cantidad++;
        }
    }
}

void mostrarNumeros(const vector<int>& numeros, int cantidad)
{
    cout << "\nNUMEROS INTRODUCIDOS (" << cantidad << endl;
    
    for (int i = 0; i < cantidad; i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
}