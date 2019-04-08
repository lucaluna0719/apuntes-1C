#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int i;
    //for(inicializacion;condicion;incremento);
    /*for(i=0; i<10; i++)
    {
        printf("%d", i+1);
    }*/
    int i=10;
    while(i>0)
    {
        printf("%d\a", i);
        i--;//i=i+1

    }
    printf("\nEste es el valor de i: %d", i);




    /*char caracter;
    char palabra[16];
    printf("ingrese una palabra: ");
    scanf("%s", palabra);
    printf("usted ingreso: %s" , palabra);


    int unNumero;
    int otroNumero;
    int suma;
    float promedio;
    printf("ingrese un numero: ");
    scanf("%d",&unNumero);
    printf("ingrese otro numero: ");
    scanf("%d",&otroNumero);

    suma=unNumero+otroNumero;
    promedio= (float)suma/2;

    printf("el promedio es: %.2f", promedio);*/
    return 0;
}
