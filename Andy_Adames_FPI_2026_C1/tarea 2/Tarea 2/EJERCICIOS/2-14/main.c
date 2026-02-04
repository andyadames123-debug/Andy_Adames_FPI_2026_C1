#include <stdio.h>
#include <stdlib.h>

int main()
{
    int GLa, Tie;
    float Cos;
    printf("Ingrese la clave y el tiempo: ");
    scanf("%d %d", &GLa, &Tie);
    switch(GLa)
    {
        case 1: Cos = Tie * 0.13 / 60; break;
        case 2: Cos = Tie * 0.11 / 60; break;
        case 5: Cos = Tie * 0.22 / 60; break;
        case 6: Cos = Tie * 0.19 / 60; break;
        case 7:
        case 9: Cos = Tie * 0.17 / 60; break;
        case 10: Cos = Tie * 0.20 / 60; break;
        case 15: Cos = Tie * 0.39 / 60; break;
        case 20: Cos = Tie * 0.28 / 60; break;
        default : Cos = -1; break;
    }
    if (Cos != -1)
        printf("\nClave: %d\tTiempo: %d\tCosto: %6.2f", GLa, Tie, Cos );
    else
        printf("\nError en la clave");

    return 0;
}
