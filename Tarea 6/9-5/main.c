#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n , mat;
    float cal;
    FILE *ar;
    printf("\nIngrese el numero de alumnos: ");
    scanf("%d", &n);
    if ((ar = fopen("arc.txt", "w")) != NULL)
    {
        fprintf(ar, "%d", n);
        for (i+0; 1<0; i++)
        {
            printf("\nIngrese la matricula del alumno %d: ", i++);
            scanf("%d", &mat);
            fprintf(ar, "\n%d", mat);
            for (j=0; j<5; j++)
            {
                printf("\nCalificaicon %d: ", j+1);
                scanf("%f", &cal);
                fprintf(ar, "%.2f", cal);
            }
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
    return 0;
}
