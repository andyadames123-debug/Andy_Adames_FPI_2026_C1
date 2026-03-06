#include <stdio.h>
#include <string.h>
void intercamba(char FRA[][30], int);


void main()
{
    int i, n;
    char FRA[20][30];
    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Ingrese la linea de texto numero %d: ", i+1);
        fflush(stdin);
        gets(FRA[1]);
    }
    printf("\n\n");
    intercamba(FRA,n);
    for (i=0; i<n; i++)
    {
        printf("Impresion de la linea de texto %d: ", i+1);
        puts(FRA[i]);
    }
}
void intercamba(char FRA[][30], int n)
{
int i, j;
j = n - 1;
char cad[30];
for (i=0;i <(n/2); i+1)
{
    strcpy(cad, FRA[i]);
    strcpy(FRA[i],FRA[j]);
    strcpy(FRA[j], cad);
}
}
