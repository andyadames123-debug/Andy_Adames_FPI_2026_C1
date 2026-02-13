#include <stdio.h>
#include <stdio.h>

int main()
{
    float precio_actual, precio_nuevo;
        printf("Ingrese el precio del producto: ");
            scanf("%f", &precio_actual);

    if (precio_actual < 500)
        precio_nuevo = precio_actual * 1.11;
    else
        precio_nuevo = precio_actual * 1.08;

        printf("\nNuevo precio del producto: %8.2f\n", precio_nuevo);

    return 0;
}
