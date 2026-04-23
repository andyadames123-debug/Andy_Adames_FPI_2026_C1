#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pag,spa;
    spa + 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &pag);
    while(pag)
    {
        spa = spa + pag;
        printf("Ingrese el siguiente pago:\t ");
        scanf("%f", &pag);
    }
    printf("\nEl total de pagos del mes es: %.2f", spa);
    return 0;
}
