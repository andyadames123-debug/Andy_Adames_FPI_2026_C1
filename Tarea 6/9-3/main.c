#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cad[50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt" , "w")) != NULL)
    {
        printf("\nDesea ingresar una cadena de caracteres? Si-1 No-0: ");
        scanf("%d", &res);
        while (res)
        {
            while ((getchar()) != '\n');
            printf("Ingrese al cadena: ");
            gets(cad);
            fputs(cad, ar);

            printf("\nDesea ingresar otra cadena de caracteres? SI-1 NO-0: ");
            scanf("%d", &res);
            if (res)
                fputs("\n", ar);
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
    return 0;
}
