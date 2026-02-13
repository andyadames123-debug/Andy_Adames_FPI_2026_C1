#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TRA, EDA, DIA;
    float Cos;
    printf("Ingrese tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);
    switch(TRA)
    {
        case 1: Cos = DIA * 2800; break;
        case 2: Cos = DIA * 1950; break;
        case 3: Cos = DIA * 2500; break;
        case 4: Cos = DIA * 1150; break;
        default: Cos = -1; break;
    }
    if (Cos != -1)
    {
        if(EDA >=60)
            Cos + Cos * 0.75;
        else
            if(EDA<=25)
            Cos+Cos*0.85;
        printf("\nClave tratamiento: %\tDias: %d\t Costo toral: %8.2f", TRA, DIA, Cos);
    }
            else
                printf("\nLa clave del tratamiento es incorrecta");

    return 0;
}
