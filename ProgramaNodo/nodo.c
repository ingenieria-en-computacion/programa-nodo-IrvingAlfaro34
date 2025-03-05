#include "nodo.h"

// Crear nodo
Nodo* CrearNodo(void* dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo == NULL) return NULL;
    nuevo->dato = dato;
    nuevo->referencia = NULL;
    return nuevo;
}

// Borrar nodo
bool BorrarNodo(Nodo* nodo) {
    if (nodo == NULL) return false;
    free(nodo);
    return true;
}

// Asignar dato
Nodo* AsignarDato(Nodo* nodo, void* dato) {
    if (nodo == NULL) return NULL;
    nodo->dato = dato;
    return nodo;
}

// Obtener dato
void* ObtenerDato(Nodo* nodo) {
    return (nodo != NULL) ? nodo->dato : NULL;
}

// Asignar referencia
Nodo* AsignarReferencia(Nodo* nodo, Nodo* referencia) {
    if (nodo == NULL) return NULL;
    nodo->referencia = referencia;
    return nodo;
}

// Obtener referencia
Nodo* ObtenerReferencia(Nodo* nodo) {
    return (nodo != NULL) ? nodo->referencia : NULL;
}
