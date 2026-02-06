#include <stdio.h>


int main()
{
    int R1 = 0, R2 =0, R3 =0, R4 = 0, R5 = 0;
    float cal;
    printf("Ingresa laa calficacion el alumno: ");
    scanf("%f", &cal);
    while (cal != -1)
    {
        if(cal<4)
            R1++;
        else
            if(cal<6)
            R2++;
        else
            if (cal<8)
            R3++;
        else
            if(cal<9)
            R4++;
        else
            R5++;
        printf("Ingresa la calificacion del alumno:");
        scanf("%f", &cal);
    }
    printf("\n0..3.99 = %d",R1);
    printf("\n4..4.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8..9 = %d", R4);
    printf("\n9..10 = %d", R5);
    return 0;
}
