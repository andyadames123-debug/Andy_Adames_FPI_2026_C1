#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I;
    float salc, nom;
    nom = 0;
    for (I=1; I<=12; I++)
    {
        printf("\nIngrese el salario del profesor%d:\t", I);
        scanf("%f", &salc);
        nom = nom + salc;
    }
    printf("\nEl total de la nomina es: %.2f", nom);2

    return 0;
}
