// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 17/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void leerVector(vector<int>& vec, char nombre);
void mostrarVector(const vector<int>& vec, string titulo);
void multiplicarVectores(const vector<int>& a, const vector<int>& b, vector<int>& c);

int main() 
{
    int n;
    cout << "Ingrese la dimension N de los vectores: ";
    cin >> n;

    vector<int> vectorA(n, 0);
    vector<int> vectorB(n, 0);
    vector<int> multiplicacion(n, 0);

    cout << "\nVECTOR A\n";
    leerVector(vectorA, 'A');

    cout << "\nVECTOR B\n";
    leerVector(vectorB, 'B');

    multiplicarVectores(vectorA, vectorB, multiplicacion);

    cout << "\nRESULTADO DE LA MULTIPLICACION\n";
    mostrarVector(multiplicacion, "MULTIPLICACION (A * B)");

    return 0;
}

void leerVector(vector<int>& vec, char nombre) 
{
    for (int i = 0; i < vec.size(); i++) 
    {
        cout << "Ingrese el elemento " << nombre << "[" << i << "]: ";
        cin >> vec[i];
    }
}

void multiplicarVectores(const vector<int>& a, const vector<int>& b, vector<int>& c) 
{
    for (int i = 0; i < a.size(); i++) 
    {
        c[i] = a[i] * b[i];
    }
}

void mostrarVector(const vector<int>& vec, string titulo) 
{
    cout << titulo << ": [ ";
    for (int i = 0; i < vec.size(); i++) 
    {
        cout << vec[i] << " ";
    }
    cout << "]" << endl;
}