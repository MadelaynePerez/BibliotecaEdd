#include <Libro.h>

Libro::Libro(string t, string i, string g, int a, string au) {
    titulo = t;
    isbn = i;
    genero = g;
    anio = a;
    autor = au;
}

string Libro::getTitulo() { return titulo; }
string Libro::getISBN() { return isbn; }
string Libro::getGenero() { return genero; }
int Libro::getAnio() { return anio; }
string Libro::getAutor() { return autor; }
