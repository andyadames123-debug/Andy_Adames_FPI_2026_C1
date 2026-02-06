#include <stdio.h>
#include <stdlib.h>

int main()
{
    float paag, spa =0;
    printf("Ingrese el primer pago:\t");
    scanf("%f",&paag);
    do
    {
        printf("Ingrese el siguiente pago  -0 para terminar -:\t ");
        scanf("%f",&paag);
        spa = spa + paag;
    }
    while(paag);
    printf("\nEl totl de pagos del mes es: %.2f\n", spa);
    return 0;
}
