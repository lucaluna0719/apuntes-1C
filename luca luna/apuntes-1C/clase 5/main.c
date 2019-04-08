#include <stdio.h>
#include <stdlib.h>
#define T 5


int main()
{
    /*int cargarVector[5], numerosCargados;
    for(numerosCargados=0 ; numerosCargados<5 ; numerosCargados++)
    {
        printf("Ingree numero a cargar :");
        scanf("%d", &cargarVector[numerosCargados]);
    }*/


    //int const Q = 5;
    int numeros[T];
    int i;
    int maximo;
    //printf("%d--%d", numeros, &numeros);
    //numeros[2]=23;
    cargarVector(numeros, T);

    for(i=0; i<T; i++)
    {
        printf("%d\n", numeros[i]);
    }
    maximo = busarMaximo(numeros[i]);
    printf ("el maximo es %d " , maximo);
    return 0;
}
