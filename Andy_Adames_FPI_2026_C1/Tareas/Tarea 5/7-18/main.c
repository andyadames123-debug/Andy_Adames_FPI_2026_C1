#include <stdio.h>
#include <stdlib.h>
void inverso (char *);

int main()
{
    char fra[50];
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    printf("\nEscribe laa liena de texto en forma inverso: ");
    inverso(fra);
}
void inverso(char *cadena)
{
    if (cadena[0]!= '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
