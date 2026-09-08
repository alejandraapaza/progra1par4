// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Carrera del estudiante: Diseño Digital
// Fecha creación: 07/09/2026

#include <iostream>

using namespace std;

bool notaValida(float nota);
bool aprobadoParcial(float nota, float notaMinima);
float calcularPromedioParciales(float n1, float n2, float n3);
float calcularNotaFinal(float promedioParciales, float examenFinal);
int procesarEstudiantes();


bool notaValida(float nota)
{
    return (nota >= 0.0 && nota <= 100.0);
}

bool aprobadoParcial(float nota, float notaMinima)
{
    return (nota >= notaMinima);
}

float calcularPromedioParciales(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3.0;
}

float calcularNotaFinal(float promedioParciales, float examenFinal)
{
    return (promedioParciales * 0.5) + (examenFinal * 0.5);
}

int procesarEstudiantes()
{
    int totalEstudiantes;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> totalEstudiantes;

    if (totalEstudiantes <= 0)
    {
        cout << "Cantidad invalida de estudiantes" << endl;
        return 0;
    }

    int aprobados = 0;
    int reprobados = 0;
    float sumaNotasFinales = 0;

    for (int i = 1; i <= totalEstudiantes; i++)
    {
        float n1, n2, n3, examenFinal;
        bool reprobadoEntrada = false;

        cout << "   ESTUDIANTE " << i << " DE " << totalEstudiantes << endl;

        cout << "Ingrese Parcial 1 (0-100): ";
        cin >> n1;
        if (!notaValida(n1) || !aprobadoParcial(n1, 60.0))
        {
            reprobadoEntrada = true;
        }

        if (!reprobadoEntrada)
        {
            cout << "Ingrese Parcial 2 (0-100): ";
            cin >> n2;
            if (!notaValida(n2) || !aprobadoParcial(n2, 60.0))
            {
                reprobadoEntrada = true;
            }
        }

        if (!reprobadoEntrada)
        {
            cout << "Ingrese Parcial 3 (0-100): ";
            cin >> n3;
            if (!notaValida(n3) || !aprobadoParcial(n3, 60.0))
            {
                reprobadoEntrada = true;
            }
        }

        if (reprobadoEntrada)
        {
            cout << "\nEl estudiante reprobo parciales (nota < 60 o invalida)" << endl;
            cout << "No tiene derecho a dar el Examen Final, REPROBADO" << endl;
            reprobados++;
            continue;
        }

        float promParciales = calcularPromedioParciales(n1, n2, n3);
        cout << "Promedio Habilitacion: " << promParciales << endl;

        cout << "Ingrese Nota Examen Final (0-100): ";
        cin >> examenFinal;

        if (!notaValida(examenFinal) || !aprobadoParcial(examenFinal, 60.0))
        {
            cout << "\nNota de examen final invalida o menor a 60, REPROBADO" << endl;
            reprobados++;
            continue;
        }

        float nFinal = calcularNotaFinal(promParciales, examenFinal);
        sumaNotasFinales += nFinal;

        cout << "\nRESUMEN ESTUDIANTE " << i << endl;
        cout << "Parcial 1: " << n1 << " | Parcial 2: " << n2 << " | Parcial 3: " << n3 << endl;
        cout << "Examen Final: " << examenFinal << endl;
        cout << "Nota Final: " << nFinal << endl;

        if (nFinal >= 51.0)
        {
            cout << "Estado: APROBADO" << endl;
            aprobados++;
        }
        else
        {
            cout << "Estado: REPROBADO" << endl;
            reprobados++;
        }
    }

    cout << "\nREPORTE ACADEMICO FINAL" << endl;
    cout << "Total Estudiantes Procesados: " << totalEstudiantes << endl;
    cout << "Aprobados: " << aprobados << " (" << (aprobados * 100.0 / totalEstudiantes) << "%)" << endl;
    cout << "Reprobados: " << reprobados << " (" << (reprobados * 100.0 / totalEstudiantes) << "%)" << endl;

    if (aprobados > 0)
    {
        cout << "Promedio de notas finales: " << (sumaNotasFinales / aprobados) << endl;
    }
    else
    {
        cout << "Promedio de notas finales: 0 " << endl;
    }

    return totalEstudiantes;
}

int main()
{
    procesarEstudiantes();
    return 0;
}