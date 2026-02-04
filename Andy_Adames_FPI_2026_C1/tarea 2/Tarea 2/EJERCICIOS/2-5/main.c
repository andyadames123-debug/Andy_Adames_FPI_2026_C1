#include <stdio.h>
#include <math.h>

int main()
{
    int opcion, numero;
    float resultado;
    printf("Ingrese la opcion del calculo: 1,2,3 o 4 y el valor entero: ");
    scanf("%d %d", &opcion, &numero);

    switch(opcion)
    {
        case 1:
            resultado = numero / 5;
            break;
        case 2:
            resultado = pow(numero, numero);
            break;
        case 3:
        case 4:
            resultado = 6 * numero / 2;
            break;
        default:
            resultado = 1;
            break;
    }

    printf("\nResultado: %7.2f\n", resultado);
    return 0;
}
