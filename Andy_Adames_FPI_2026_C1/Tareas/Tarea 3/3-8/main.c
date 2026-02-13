#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, Num;
    long fac;
    printf("\nIngrese el numero: ");
    scanf("%d", &Num);
    if (Num >=0)
    {
        fac = 1 ;
        for(I=1; I<=Num; I ++)
        fac *=I;
        printf("\nEl factorial de %d es: %d", Num,fac);
    }
    else
        printf("\nError en el dato ingresado");
    return 0;
}
