#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, N, Num, Sum;
    Sum = 0;
    printf("Ingrese el numero de datos:\t");
    scanf("%d",&N);
    for (I=1; I<=N; I++)
    {
        printf("Ingrese el dato numero %d:\t", I);
        scanf("%d", &Num);
        if(Num > 0)
            Sum = Sum + Num;
    }
    printf("\nLa suma de los numeros positivos es: %d", Sum);
    return 0;
}
