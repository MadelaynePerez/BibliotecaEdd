#ifndef ARBOL_H
#define ARBOL_H

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *der;
    Nodo *izq;
};

// Prototipos de funciones
Nodo* crearNodo(int n);
void insertarNodo(Nodo *&arbol, int n);

#endif // ARBOL_H
