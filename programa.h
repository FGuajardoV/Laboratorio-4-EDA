#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/********** Estructuras **********/
typedef struct Lista
{
    int valor; 
    struct Lista *Sgte;
} Lista;

typedef struct Nodo 
{
    int vertice;
    struct Lista *ListaPadre;
    struct Lista *ListaGen;
} Nodo;

int obtenerTamano ( FILE * );
Nodo * asignarMemoriaNodo ( int valor );
Lista * asignarMemoriaLista ( int valor );