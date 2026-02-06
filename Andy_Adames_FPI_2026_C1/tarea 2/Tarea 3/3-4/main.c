#include <stdio.h>
#include <math.h>

int main()
{
    int Num;
    long cua,suc = 0;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &Num);
    while(Num)
    {
        cua = pow(Num, 2);
        printf("%d al cubo es %d", Num, cua);
        suc = suc + cua;
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &Num);
    }

    printf("\nLa sumaa de los cuadrados es %1d", suc);
    return 0;
}
