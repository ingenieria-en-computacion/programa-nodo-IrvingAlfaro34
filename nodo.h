#include <stdlib.h>
#include <stdbool.h>

#ifndef NODO_H
#define NODO_H

typedef struct Nodo {
    void* dato;
    struct Nodo* referencia;
} Nodo;


Nodo* CrearNodo(void* dato);
bool BorrarNodo(Nodo* nodo);
Nodo* AsignarDato(Nodo* nodo, void* dato);
void* ObtenerDato(Nodo* nodo);
Nodo* AsignarReferencia(Nodo* nodo, Nodo* referencia);
Nodo* ObtenerReferencia(Nodo* nodo);

#endif // NODO_H
