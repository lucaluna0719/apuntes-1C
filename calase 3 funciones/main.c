#include <stdio.h>
#include <stdlib.h>

//prototipo o firma=sinonimo

//tipo_de_dato identificador([parametro]);

int sumarNumeros(int, int);//verifica que son dos enteros

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;
    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese otro numero: ");
    scanf("%d", &numeroDos);
    resultado = sumarNumeros(numeroUno , numeroDos);
    printf("el resultado: %d",numeroUno, numeroDos, resultado);


    return 0;
}

int sumarNumeros(int unNumero, int otroNumero)
{


    int resultado;
    //unNumero +=4;
    resultado= unNumero + otroNumero;


    return resultado;
}
