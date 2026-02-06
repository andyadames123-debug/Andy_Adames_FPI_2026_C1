#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1,numero2, numero3;
    int ganador1,ganador2,ganador3;
    int aciertos;
    printf("Ingresa 3 numeros del 10 al 40: ");
    scanf("%d %d %d", &numero1, &numero2,&numero3);

    if (numero1 <10 || numero2 > 40 || numero2 < 10 || numero2 >40 || numero3 < 10 || numero3 > 40)
        printf("\nNumero no Valido");
    else
    {
        ganador1 = rand()%31 +10;
        ganador2 =rand ()%31+10;
        ganador3 =rand ()%31+10;

        printf("\n Numeros ganaores: %d %d %d\n", ganador1, ganador2 , ganador3);
        printf("Tus numeros: %d %d %d\n", numero1, numero2, numero3);

        if(numero1==ganador1)
           aciertos=aciertos +1;
        if(numero2==ganador2)
            aciertos=aciertos+1;
        if(numero3==ganador3)
            aciertos=aciertos+1;

        if(aciertos==3)
            printf("\n ---Ganaste todo---");
        else if(aciertos==2)
            printf("\n Acertaste 2");
        else if (aciertos == 1)
            printf("\nAcertaste 1");
        else
            printf("\nPerdiste");
    }
    return 0;
}
