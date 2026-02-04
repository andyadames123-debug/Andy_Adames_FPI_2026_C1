#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    int nivel;

    printf("Ingrese el nivel académico del profesor: ");
    scanf("%d", &nivel);
    printf("Ingrese el salario: ");
    scanf("%f", &salario);

    switch(nivel)
    {
            case 1:
            salario = salario * 1.0035;
            break;
            case 2:
            salario = salario * 1.0041;
            break;
            case 3:
            salario = salario * 1.0048;
            break;
            case 4:
            salario = salario * 1.0053;
            break;
        default:
            printf("\nNivel no válido\n");
            break;
    }

    printf("\n\nNivel: %d \tNuevo salario: %8.2f\n", nivel, salario);
    return 0;
}
