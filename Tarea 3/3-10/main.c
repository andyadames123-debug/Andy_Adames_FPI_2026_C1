#include <stdio.h>
#include <math.h>

int main()
{
    int I,N,Num,spa = 0,Sim =0 ,Cim =0;
    printf("Ingrese el numero de datos que se vam a procesar:\t");
    scanf("%d", &N);
    if (N>0)
    {
        for(I=1; I<=N;I++)
        {
            printf("\nIngrese el numero %d: ", I);
            scanf("%d", &Num);

            if (Num)

                if(pow(-1, Num)>0)
                  spa = spa + Num;
            else
            {
                Sim = Sim + Num ;
                Cim++;
            }
        }
        printf("\n La suma de los numeros pares es: %d", spa);
        printf("\n El promedio e numeros impares es: %5.2f", (float)(Sim/Cim));

    }
     else
            printf("\nEl valor de N es incorrecto");

    return 0;
}
