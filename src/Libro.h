#ifndef LIBRO_H
#define LIBRO_H

#include<iostrean>
#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string isbn;
    string genero;
    int anio;
    string autor;

public:
    Libro(string t, string i, string g, int a, string au);
    string getTitulo();
    string getISBN();
    string getGenero();
    int getAnio();
    string getAutor();
};

#endif
