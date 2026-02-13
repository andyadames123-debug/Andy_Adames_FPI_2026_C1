#include <stdio.h>
#include <math.h>

int main()
{
    int Num;

    printf("Ingrese el numero:");
    scanf("%d", &Num);

    if (Num == 0)
        printf("\nNulo");
    else
        if(pow(-1,Num)>0)
        printf("\nPar");
    else
        printf("\nImpar");
    return 0;
}
