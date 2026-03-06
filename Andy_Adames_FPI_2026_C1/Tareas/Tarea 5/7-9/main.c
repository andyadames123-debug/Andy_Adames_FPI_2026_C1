#include <stdio.h>
#include <stdlib.h>

int cuenta (char *, char);
int main()
{
    char car,cad[50];
    int res;
    printf("\nIngrese laa cadena de caracteres: ");
    gets(cad);
    fflush(stdin);
    printf("\ningrese el caractere: ");
    car = getchar();
    res = cuenta(cad, car);
    printf("\n\%c se encuentra %d veces en la cadena %s", car,res , cad);
}
int cuenta (char *cad, char car)
{
    int i = 0, r = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] == car)
            r++;
        i++;
    }
    return(r);
}

