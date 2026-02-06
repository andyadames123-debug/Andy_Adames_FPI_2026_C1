#include <stdio.h>
#include <stdio.h>

int main()
{
    float precio;
    float precio_nuevo;
    printf("Ingrese el precio del articulo: ");
    scanf("%f", &precio);
    if(precio < 1500){
        precio_nuevo = precio * 1.11;
        printf("\nEl precio es: %7.2f\n", precio_nuevo);

    return 0;
}
