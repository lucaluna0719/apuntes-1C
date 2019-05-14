#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    int* q;
    int* r;
    p=10;
    q=&p;
    r=q;
    printf("%p\n", q);
    printf("%p\n", r);
    printf("%d\n" ,*q);
    printf("%d\n", *r);




    /*char* Px= NULL;
    char q;
    Px= &q;
    printf("ingrese letra:");
    fflush(stdin);
    scanf("%c",Px);
    printf("la letra es %c", *Px);






    /*int* x= NULL;
    int v=10;
    x=&v;
    printf("el valor al que apunta x es= %d", *x);*/
    return 0;
}
