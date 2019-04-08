#include <stdio.h>
#include <stdlib.h>
int pedirNota(void);

int main()
{
    int valor;
    //int valorUno;
    //int valorDos;
    float sacarPromedio;
    //float promedio;
    valor= pedirNota();
    printf("%d", valor);
    retorno=sacarPromedio;
    valorUno= aproboMateria(6 , 2);
    valorDos= aproboMateria(6 , 8);

}
int pedirNota()
{
    int notaIngresada;
    int segundaNotaIngresada;
    do
    {
        printf("Ingrese nota entre 0 y 10: ");
        scanf("%d", &notaIngresada);
        printf("Ingrese otra nota entre 0 y 10: ");
        scanf("%d", &segundaNotaIngresada);


    }while (notaIngresada < 0 || notaIngresada > 10 );
    return notaIngresada , segundaNotaIngresada;
}
float sacarPromedio(int suma , int cantidad)
{
    float retorno;
    retorno=(float)suma/cantidad;
    return retorno

}
int aproboMateria(int notaMinima , int nota);
{
    int valor;
    if (nota >= notaMinima)

        valor=1
    else
        valor=0
    return valor;

}
