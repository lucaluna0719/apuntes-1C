#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 3

int main()
{



    eEmpleado lista[T];
    ingresarEmpleado(lista, T);
    mostrarEmpleado(lista, T);
    return 0;
}
