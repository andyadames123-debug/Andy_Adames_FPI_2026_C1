#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, N;
    float Lan, Sla = 0;
    do
    {
        printf("Ingrese el numero de lanzamientos:\t");
        scanf("%d", &N);
    }
    while(N < 1|| N > 11);
    for (I=1; I<=N; I++)
    {
        printf("\nIngrese el lanzamiento %d:", I);
        scanf("%f", &Lan);
        Sla = Sla + Lan;
    }
    Sla = Sla/N;
    printf("\nEl promedio de lanzamiento es: %.2f", Sla);
    return 0;
}
