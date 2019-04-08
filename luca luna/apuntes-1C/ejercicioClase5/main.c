#include <stdio.h>
#include <stdlib.h>
#define T 5
#include "guardarMostrarVectores.h"

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
    int valor;
    int indiceValor;
    //printf("%d--%d", numeros, &numeros);
    //numeros[2]=23;
    cargarVector(numeros, T);
    mostrarVector(numeros, T);
    maximo=buscarMaximo(numeros, T);

    printf("/nEl maximo ingresado fue: %d", maximo);

    printf("/nIngrese valor y le informaremos su posicion en el vector: ");
    scanf("%d", &valor);

    indiceValor=buscarValor(numeros,T,valor);
    printf("/nEl valor %d esta en la posicion %d ", valor,indiceValor);
    /*for(i=0; i<T; i++)
    {
        printf("%d\n", numeros[i]);
    }
    maximo = busarMaximo(numeros[i]);
    printf ("el maximo es %d " , maximo);*/

    return 0;
}
