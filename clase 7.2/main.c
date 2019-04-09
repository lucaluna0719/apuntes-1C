#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;

} eEmpleado;

int main()
{

    eEmpleado unEmpleado = {1000 , "Martin", 'm', 15000, 12000};//tipo de dato
    eEmpleado otroEmpleado = {1100 , "Jose", 'm', 18000, 12000};//tipo de dato

    printf("inrese legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("inrese nombre: ");
    fflush(stdin);
    gets(unEmpleado.nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", unEmpleado.sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", unEmpleado.sueldoBruto);
    unEmpleado.sueldoNeto= unEmpleado.sueldoBruto*0.85;

    otroEmpleado= unEmpleado;
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto, unEmpleado.sueldoNeto);

    printf("%d-%s-%c-%f-%f\n", otroEmpleado.legajo, otroEmpleado.nombre, otroEmpleado.sexo, otroEmpleado.sueldoBruto, otroEmpleado.sueldoNeto);
    /*puts(unEmpleado.nombre);
    puts(otroEmpleado.nombre);*/

    return 0;
}
