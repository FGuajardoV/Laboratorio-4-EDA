#include "programa.h"

int main()
{
    int size, gen1, gen2;

    printf ( "\n\n************************ Inicio Programa ************************\n\n" );

    FILE *procesosFile = fopen ( "procesos.in", "r" );
    FILE *genesFile = fopen ( "genes.in", "r" );

    if ( procesosFile == NULL || genesFile == NULL)
    {   
        printf ( "Error al cargar los archivos necesarios, revisar y volver a iniciar...\n" );
        printf ( "\n\n************************** Fin Programa *************************\n\n" );
    }

    size = obtenerTamano ( procesosFile );
    Nodo arbolProcesos [ size ];

    printf ( "Ingrese primer gen: " );
    scanf ( "%d", &gen1 );

    printf ( "Ingrese segundo gen: " );
    scanf ( "%d", &gen2 );
    

    printf ( "\n\n************************** Fin Programa *************************\n\n" );
}

int obtenerTamano ( FILE *archivo )
{
    int size;
    fscanf ( archivo, "%d\n", &size );
    return size;
}

Nodo * asignarMemoriaNodo ( int valor )
{
    // Se pide el espacio de memoria para la estructura.
	Nodo * nodo = ( Nodo * ) malloc ( sizeof ( Nodo ) );

    // Si la asignacion de memoria es exitosa, se inicializan las variables.
	if ( nodo != NULL )
    {
        nodo -> vertice = valor;
	    nodo -> ListaGen = NULL;
		nodo -> ListaPadre = NULL;
		return nodo;
	}

	// En caso contrario se retorna nulo.
	else
    {
		return NULL;
	}
}

Lista * asignarMemoriaLista ( int valor )
{
    // Se pide el espacio de memoria para la estructura.
	Lista * lista = ( Lista * ) malloc ( sizeof ( Lista ) );

    // Si la asignacion de memoria es exitosa, se inicializan las variables.
	if ( lista != NULL )
    {
        lista -> valor = valor;
	    lista -> Sgte = NULL;
		return lista;
	}

	// En caso contrario se retorna nulo.
	else
    {
		return NULL;
	}
}