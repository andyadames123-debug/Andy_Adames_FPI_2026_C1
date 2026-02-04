#include <stdio.h>

int main()
{
    float vendedor1, vendedor2, vendedor3;
        printf("\nIngrese las ventas del vendedor 1: ");
            scanf("%f", &vendedor1);
        printf("Ingrese las ventas del vendedor 2: ");
            scanf("%f", &vendedor2);
        printf("Ingrese las ventas del vendedor 3: ");
            scanf("%f", &vendedor3);

    printf("\n\nORDEN DE VENTAS (Mayor a Menor):\n");

    if (vendedor1 > vendedor2) {
        if (vendedor1 > vendedor3) {
            if (vendedor2 > vendedor3) {
                printf("Vendedor 1: %8.2f\n", vendedor1);
                printf("Vendedor 2: %8.2f\n", vendedor2);
                printf("Vendedor 3: %8.2f\n", vendedor3);
            } else {
                printf("Vendedor 1: %8.2f\n", vendedor1);
                printf("Vendedor 3: %8.2f\n", vendedor3);
                printf("Vendedor 2: %8.2f\n", vendedor2);
            }
        } else {
            printf("Vendedor 3: %8.2f\n", vendedor3);
            printf("Vendedor 1: %8.2f\n", vendedor1);
            printf("Vendedor 2: %8.2f\n", vendedor2);
        }
    } else {
        if (vendedor2 > vendedor3) {
            if (vendedor1 > vendedor3) {
                printf("Vendedor 2: %8.2f\n", vendedor2);
                printf("Vendedor 1: %8.2f\n", vendedor1);
                printf("Vendedor 3: %8.2f\n", vendedor3);
            } else {
                printf("Vendedor 2: %8.2f\n", vendedor2);
                printf("Vendedor 3: %8.2f\n", vendedor3);
                printf("Vendedor 1: %8.2f\n", vendedor1);
            }
        } else {
            printf("Vendedor 3: %8.2f\n", vendedor3);
            printf("Vendedor 2: %8.2f\n", vendedor2);
            printf("Vendedor 1: %8.2f\n", vendedor1);
        }
    }

    return 0;
}
