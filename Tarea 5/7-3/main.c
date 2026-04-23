#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cad0 = "Buenos dias";
    char cad1[20] = "Hola";
    char cad2[] = "Mexico";
    char cad3[] = {'B','I','E','N','V','E','N','I','D','O', '\0'};
    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);
    printf("La cadena cad2 es: ");
    puts(cad2);
    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una linea de texto - se lee con scanf-: \n");
    scanf("%s", cad5);
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);

    while((getchar()) != '\n');  // limpia el buffer

    char p;
    int i = 0;
    printf("\nIngrese una linea de texto -se lee cada caaracter con getchar-: \n");
    while((p = getchar()) != '\n')
        cad6[i++] = p;
    cad6[i] = '\0';
    printf("\nLa cadena cad6 es: ");
    puts(cad6);

    return 0;
}
