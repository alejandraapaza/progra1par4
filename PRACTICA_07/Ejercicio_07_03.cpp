// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 17/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

void ingresarCalificaciones(vector<int>& calis, int n);
int calcularSuma(vector<int> calis, int n);
float calcularPromedio(int suma, int n);
void calcularDesviaciones(vector<int> calis, float promedio, vector<float>& desviaciones, int n);
float calcularVarianza(vector<float> desviaciones, int n);

int main()
{
    int n;

    cout << "Ingrese el numero de calificaciones: ";
    cin >> n;

    vector<int> calificaciones(n);
    vector<float> desviacion(n);

    ingresarCalificaciones(calificaciones, n);

    int sumaTotal = calcularSuma(calificaciones, n);
    float promedio = calcularPromedio(sumaTotal, n);

    cout << " \nRESULTADOS " << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Promedio: " << promedio << endl;

    calcularDesviaciones(calificaciones, promedio, desviacion, n);

    float varianza = calcularVarianza(desviacion, n);
    cout << "\nVarianza de los datos: " << varianza << endl;

    return 0;
}

void ingresarCalificaciones(vector<int>& calis, int n)
{
    cout << "\nIngrese las calificaciones:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calis[i];
    }
}

int calcularSuma(vector<int> calis, int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += calis[i];
    }
    return suma;
}

float calcularPromedio(int suma, int n)
{
    return (suma * 1.0) / n;
}

void calcularDesviaciones(vector<int> calis, float promedio, vector<float>& desviaciones, int n)
{
    cout << "\nCalificacion\tDesviacion" << endl;
    for (int i = 0; i < n; i++)
    {
        desviaciones[i] = calis[i] - promedio;
        cout << calis[i] << "\t\t" << desviaciones[i] << endl;
    }
}

float calcularVarianza(vector<float> desviaciones, int n)
{
    float sumaCuadrados = 0;
    for (int i = 0; i < n; i++)
    {
        sumaCuadrados += desviaciones[i] * desviaciones[i];
    }
    return sumaCuadrados / n;
}