#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 1
void ingresarEmpleado(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam ; i++)
    {
    printf("ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto=lista[i].sueldoBruto*0.85;
    }


}

void mostrarEmpleado(eEmpleado lista[], int i)
{

   printf("%d-%s-%c-%f-%f\n", lista[i].legajo, lista[i].nombre, lista[i].sexo, lista[i].sueldoBruto, lista[i].sueldoNeto);

}
void mostrarTodos(eEmpleado lista[], int tam)
{
     int i;
    for(i=0; i<tam; i++)
    {
        mostrarEmpleado(lista,i);
    }

}
void menu()
{
    int seleccionáOpcion;
    do{
        printf("3-Calcular todas las operaciones: \n");
        printf("4-Mostrar resultado: \n");
        printf("5-Salir \n");
        printf("Selecione opcion.\n");






    switch(seleccionaOpcion)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;

        }


     }
