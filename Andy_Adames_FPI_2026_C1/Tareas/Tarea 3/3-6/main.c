#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I = 0;
        float Salario , pro , nomina = 0;
        printf("Ingrese el salario del profesor:\t");
        scanf("%f",&Salario);
        do{
            nomina = nomina + Salario;
            I =I +1;
            printf("Ingrese el salario del profesor -0 para terminar- :\t");
            scanf("%f", &Salario);
        }
        while(Salario);
        pro = nomina/I;
        printf("\nNomina: %.2f\t Promedio de salarios: %.2f", nomina,pro);
    return 0;
}
