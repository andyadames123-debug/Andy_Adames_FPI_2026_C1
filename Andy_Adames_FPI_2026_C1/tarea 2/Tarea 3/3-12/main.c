#include <stdio.h>
#include <math.h>

int main()
{
    int Num;
    printf("Ingresa el numero para calcular la serie: ");
    scanf("%d", &Num);
    if (Num>0)
    {
        printf("\nSerie de ULAM\n");
        printf("%d \t", Num);
        while(Num != 1)
        {
            if(pow(-1,Num)>0)
                Num = Num/2;
            else
                Num = Num * 3 + 1;
            printf("%d\t",Num);
        }
    }
    else
    {
        printf("\n Num debe ser un entero positivo");
    }
    return 0;
}
