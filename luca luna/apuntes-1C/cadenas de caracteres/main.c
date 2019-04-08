#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[10]="PHIlipa", otraPalabra[100];
    int comp;
    strcat(otraPalabra,palabra);
    strcat(otraPalabra, "Fin");

    printf("%s",otraPalabra);
    //comp = strcimp(palabra, "P1hilipa");
    //printf("%d", comp);


  /* if(palabra=="philipa")
    {
        printf("es igual");
    }else
    {
        printf("no es igual");
    }*/



    //strncpy(palabra,otraPalabra,4);//cantidad de caracteres que podes copiar
  // printf("(Ingrese nombre y apellido: ");
   //formas de leer para leer cadenas de vectores con espacio.
    //scanf("%[^\n]", palabra);
  //  gets(palabra);
   //fgets(palabra,10,stdin);
   comp=strlen(palabra);
   // printf("la palabra es: %s\nCantidad de caracteres: %d",palabra, len);

    return 0;
}
