#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Cla, cat, ant, res;
        printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");
        scanf("%d %d %d", &Cla,&cat, &ant);
        switch(cat)
        {
        case 3:
            case 4: if (ant >=5)
            res = 1;
            else
                res = 0;
            break;
        case 2:if(ant>= 7)
            res =1;
            else
                res =0;
            break;
        }
        if(res)
            printf("\nEl trabajador con clave %d reune las condiciones para el puesto", Cla);
        else
            printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", Cla);

    return 0;
}
