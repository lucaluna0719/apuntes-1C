#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 2
void pedirCadena(char[],char[], int);
void validarTamCadena(char[], char [], int);

int main()
{
    /*char nombre[20];
    char apellido[20];
    char apellidoNombre[41]="";
    int i=0;*/
   // char auxCadena[100];

   int legajos[T];
   float sueldo[T];
   char sexos [T];
   char nombres[T][20];
   int i;
   int j;
   int auxEntero;
   float auxFlotante;
   char auxCaracter;
   char auxcadenal[100];
   for(i=0; i<T; i++)
   {
       printf("Ingrese legajo; ");
       scanf("%d", &legajos[i]);
       printf("Ingrese sueldo: ");
       scanf("%f", &sueldo[i]);
       printf("Ingrese sexo (m o f): ");
       fflush(stdin);
       scanf("%s", &sexos[i]);
       pedirCadena("Nombre: ", nombres[i], 20);
   }

    for (i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(legajos[i]>legajos[j])
            {
                auxEntero = legajos[i];
                legajos[i]= legajos[j];
                legajos[j]= auxEntero;

                auxFlotante=sueldo[i];
                sueldo[i]=sueldo[j];
                sueldo[j]= auxFlotante;

                auxCaracter= sexo[i];
                sexo[i] = sexo[j];
                sexo[j] = auxCaracter;
            }
        }
    }






      for(i=0; i<T; i++)
      {
          printf("%d-%s-%f-%c\n", legajos[i], nombres[i], sueldo[i], sexos[i]);
      }

   /* pedirCadena("nombre: ", nombre, 20);
    pedirCadena("Apellido; ", apellido, 20);

    strcat(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre , nombre);

    strlwr(apellidoNombre);

    apellidoNombre[0]=toupper(apellidoNombre[0]);


    while(apellidoNombre[i]!='\0')
    {
     if(apellidoNombre[i]==' ')//isspace(apelldionombre[i]);
     {
         apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
     }

     i++;

    }
    puts(apellidoNombre);


    printf("Nombre: %s y su apelido es %s ", nombre, apellido);*/

    return 0;
}
void pedirCadena(char mensaje[], char cadena [], int tam)
{
    printf("Ingrese %s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    validarTamCadena(mensaje,cadena,tam);

}
void validarTamCadena(char mensajeError[],char cadena [], int tam)
{
    while (strlen(cadena)>tam)
    {
        printf("Reingrese %s", mensajeError);
        fflush(stdin);
        scanf("%[^\n]", cadena);
    }
}
