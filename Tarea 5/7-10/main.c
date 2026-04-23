#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    printf("\nDesea ingrear una cadena de caracteres (S/N) ");
    c = getchar();
    while((getchar()) != '\n');

    while (c == 'S')
    {
        printf("\nIngrese la cadena de caracteres: ");
        while((getchar()) != '\n');10+
        gets(cad);
        i++;
        sum += atof(cad);
        printf("\nDesea ingresar otra cadena de caracteres (S/N) ");
        c = getchar();

    }
    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %.2f", sum / i);
    return 0;
}
