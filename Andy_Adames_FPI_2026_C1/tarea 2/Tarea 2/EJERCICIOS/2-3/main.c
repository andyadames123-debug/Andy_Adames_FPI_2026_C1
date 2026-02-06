#include <stdio.h>
#include <stdlib.h>

int main()
{
    float promedio;
        printf("Ingrese el promedio del estudiante: ");
        scanf("%f", &promedio);
    if (promedio >= 6.5)
        printf("\nAprobado");
    else
        printf("\nReprobado");
    return 0;
}
