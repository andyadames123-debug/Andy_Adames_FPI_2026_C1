#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dis, tie;
    float bil;
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d" , &dis, &tie);
    if ((dis*2 > 500) && (tie > 10))
        bil = dis * 2 * 0.19 * 0.8;
    else
        bil = dis * 2 * 0.19;

    printf("\n\nCosto del billete: %7.2f" , bil);

    return 0;
}
