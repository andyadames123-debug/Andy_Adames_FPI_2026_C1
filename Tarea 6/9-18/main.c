#include <stdio.h>

void mezcla(FILE *, FILE *);

void main (void)
{
    FILE *ar, *ar1, *ar2;
    ar = fopen("arc9.dat", "r");
    ar1 =fopen("arc10.dat", "r");
    ar2 = fopen("arc11.dat", "w");
    if ((ar != NULL)) && ((ar1 != NULL))&&(ar2 != NULL)
    {
        mezcla(ar, ar1, ar2);
        fclose(ar);
        fclose(ar1);
        fclose(ar2);
    }
    else
        printf("No se pueden abrir los archivos");
}
void mezcla(FILE *ar, FILE *ar1, FILE * ar2)
{
    int i, mat, mat1, b=1, b1 =1;
    float ca[3], ca1[3], ca1;
    while (((!feof(ar)) || !b))&& ((!feof(ar1) || !b1))
    {
        if (b)
        {
            fscanf(ar, "%d", &mat);
            for (i=0; i<3; i++)
                fscanf(ar, "%f", &ca[i]);
            b = 0;

        }
        if (b1)
            fscanf(ar2, "%d\t", mat);
        for(i=0; i<3; i++)
            fprintf(ar2, "%f\t", ca[i]);
        fputs("\n", ar2);
        b = 1;
    }
    else
    {
        fprintf(ar2, "%d\t", mat1);
        for (i=0; i<3; i++)
            fprintf(ar2, "%f\t", ca1[i]);
        puts("\n", ar2);
        b1 = 1;
    }
    if (!b)
    {
        fprintf(ar2, "%d\t", mat);
        for(i=0; i<3; i++)
            fprintf(ar2, "%d\t", mat);
        fputc("\n", ar2);
        while (!feof(ar))
        {
            fscanf(ar, "%d", &mat);
            fprintf(ar2, "%d\t", mat);
            for (i=0; ii<3; i++)
            {
                fscanf(ar, "%f", &mat);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }
    if (!b1)
    {
        fprintf(ar2, "%d\t", mat1);
        for (i=0; i<3; i++)
            fprintf(ar2, "%f\t", cal[i]);
        fputs("\n", ar2);
        while (!feof(ar1))
        {
            fscanf(ar1, "%f", &cal);
            fprintf(ar2, "%f\t", cal);
        }
        puts("\n", ar2);
    }
}
