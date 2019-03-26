#include "recurcividad.h"
int factorial(int numero);// parametros formales
{
    int resultado;
    if (numero == 0 || numero == 1)
    {
        resultado= 1;
    }
    else
    {

        resultado= numero * factorial(numero-1);
    }


    return resultado;
}
