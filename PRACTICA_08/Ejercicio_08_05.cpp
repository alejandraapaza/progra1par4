// Materia: Programación I, Paralelo 4
// Autor: Alejandra Apaza Ticona
// Fecha creación: 18/10/2026

#include <iostream>
#include <string>

using namespace std;

void extraerPartesURL(const string& url);

int main()
{
    string url;

    cout << "  \nANALIZADOR DE URL  " << endl;
    cout << "Ingrese la URL: ";
    cin >> url;

    extraerPartesURL(url);

    return 0;
}

void extraerPartesURL(const string& url)
{
    size_t posProtocolo = url.find("://");
    
    string protocolo = url.substr(0, posProtocolo);

    size_t inicioDominio = posProtocolo + 3;

    size_t posRuta = url.find('/', inicioDominio);

    string dominio;
    string ruta;

    if (posRuta != string::npos)
    {
        dominio = url.substr(inicioDominio, posRuta - inicioDominio);
        ruta = url.substr(posRuta);
    }
    else
    {
        dominio = url.substr(inicioDominio);
        ruta = "/";
    }

    cout << "\nProtocolo: " << protocolo << "\n";
    cout << "Dominio: " << dominio << "\n";
    cout << "Ruta: " << ruta << "\n";
}