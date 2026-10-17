// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 17/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

void leerVector(vector<int>& vec, char nombre, int n);
void combinarVectores(const vector<int>& a, const vector<int>& b, vector<int>& c, int n);
void mostrarVector(const vector<int>& vec);

int main() 
{
    int n;

    cout << "Ingrese el tamano N para los vectores: ";
    cin >> n;

    vector<int> vectorA(n, 0);
    vector<int> vectorB(n, 0);
    vector<int> vectorC(n * 2, 0);

    cout << "\nVECTOR A\n";
    leerVector(vectorA, 'A', n);

    cout << "\nVECTOR B\n";
    leerVector(vectorB, 'B', n);

    combinarVectores(vectorA, vectorB, vectorC, n);

    cout << "\nVECTOR COMBINADO\n";
    mostrarVector(vectorC);

    return 0;
}

void leerVector(vector<int>& vec, char nombre, int n)
{
    for (int i = 0; i < n; i++) 
    {
        cout << "Ingrese el elemento " << nombre << "[" << i << "]: ";
        cin >> vec[i];
    }
}

void combinarVectores(const vector<int>& a, const vector<int>& b, vector<int>& c, int n)
{
    for (int i = 0; i < n; i++) 
    {
        c[i] = a[i];
    }

    for (int i = 0; i < n; i++) 
    {
        c[i + n] = b[i];
    }
}

void mostrarVector(const vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++) 
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}