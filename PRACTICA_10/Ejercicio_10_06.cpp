// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 19/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarNombresAleatorios(string vec[], int n);
void OrdenarSeleccionNombres(string vec[], int n);
void MostrarNombres(string vec[], int n);
int aleatorio(int min, int max);

int main()
{
    srand(time(0));
    int n;
    string vec[100];

    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    LlenarNombresAleatorios(vec, n);

    cout << "\nLista original:\n";
    MostrarNombres(vec, n);

    OrdenarSeleccionNombres(vec, n);

    cout << "Lista ordenada:\n";
    MostrarNombres(vec, n);

    return 0;
}

void LlenarNombresAleatorios(string vec[], int n)
{
    string nombresBase[10] = {"Ana", "Carlos", "Sofia", "Mateo", "Lucia", "Diego", "Valentina", "Lucas", "Camila", "Joaquin"};
    string apellidosBase[10] = {"Gomez", "Perez", "Rodriguez", "Lopez", "Martinez", "Sanchez", "Diaz", "Torres", "Flores", "Ramirez"};

    for (int i = 0; i < n; i++)
    {
        int r1 = aleatorio(0, 9);
        int r2 = aleatorio(0, 9);
        vec[i] = nombresBase[r1] + " " + apellidosBase[r2];
    }
}

void OrdenarSeleccionNombres(string vec[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vec[j] < vec[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            string temp = vec[i];
            vec[i] = vec[minIndex];
            vec[minIndex] = temp;
        }
    }
}

void MostrarNombres(string vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << vec[i] << endl;
    }
    cout << endl;
}

int aleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}